//
//  RimsPickerViewController.swift
//  HotRimsAR
//
//  Created by Przemysław Kuzia on 27.11.2016.
//  Copyright © 2016 Iterators Mobile. All rights reserved.
//

import UIKit

class RimsPickerViewController: BaseViewController {

    @IBOutlet weak var containerView: UIView!
    
    let heartButton = UIButton()
    let filterButton = UIButton()
    @IBOutlet weak var infoLabel: UILabel!

    let rimsPickerViewModel = RimsPickerViewModel()
    var rimsPageViewController: RimsPageViewController?
    
    // MARK: View Lifecycle
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        initUI()
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)

        initColorNavBar()
    }
    
    // MARK: Init UI
    
    func initUI() {
        initNavBar()
        getData()
    }
    
    func initNavBar() {
    
        self.title = rimsPickerViewModel.viewTitle
        
        heartButton.setImage(UIImage(named: "Hearts"), for: .normal)
        heartButton.setImage(UIImage(named: "HeartsFilledGrey"), for: .selected)
        heartButton.frame = CGRect(x: 0, y: 0, width: 30, height: 30)
        heartButton.addTarget(self, action: #selector(heartButtonClick(_:)), for: .touchUpInside)
        
        let leftBarButton = UIBarButtonItem(customView: heartButton)
        self.navigationItem.leftBarButtonItem = leftBarButton
        
        filterButton.setImage(UIImage(named: "Filter"), for: .normal)
        filterButton.setImage(UIImage(named: "Clear Filters"), for: .selected)
        
        filterButton.frame = CGRect(x: 0, y: 0, width: 27, height: 27)
        filterButton.addTarget(self, action: #selector(filterButtonClick(_:)), for: .touchUpInside)
        
        let rightBarButton = UIBarButtonItem(customView: filterButton)
        self.navigationItem.rightBarButtonItem = rightBarButton
        
        infoLabel.text = "no_result".localized
        infoLabel.isHidden = true
    }
    
    func initColorNavBar() {
        self.navigationController?.navigationBar.barStyle = .black
        self.navigationController?.navigationBar.tintColor = UIColor.white
    }
    
    func getData() {
        showLoading()
        rimsPickerViewModel.getRimsData { success in
            self.hideLoading()
            self.containerView.isHidden = false
            self.infoLabel.isHidden = true
            self.rimsPageViewController?.rimsPageViewModel.rimsData = self.rimsPickerViewModel.rimsData
            self.rimsPageViewController?.initPageView()
        }
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        if let vc = segue.destination as? RimsPageViewController, segue.identifier == "EmbededPageView" {
            self.rimsPageViewController = vc
        }
    }
    
    // MARK: User Interaction
    
    func heartButtonClick(_ sender: UIBarButtonItem) {
    
        if heartButton.isSelected {
            rimsPickerViewModel.getRimsData(completionHandler: { success in
                self.rimsPageViewController?.rimsPageViewModel.rimsData = self.rimsPickerViewModel.rimsData
                self.rimsPageViewController?.initPageView()
                self.containerView.isHidden = false
                self.infoLabel.isHidden = true
            })
            
        } else {
            rimsPickerViewModel.getFavouriteRims(completionHandler: { success in
                self.rimsPageViewController?.rimsPageViewModel.rimsData = self.rimsPickerViewModel.rimsData
                
                if let rimData = self.rimsPickerViewModel.rimsData, rimData.count > 0 {
                    self.rimsPageViewController?.initPageView()
                } else {
                    self.containerView.isHidden = true
                    self.infoLabel.isHidden = false
                }
                
            })
        }
        
        heartButton.isSelected = !heartButton.isSelected
    }
    
    func filterButtonClick(_ sender: UIBarButtonItem) {
        
       filterButton.isSelected = !filterButton.isSelected
        
        if rimsPickerViewModel.filterActive {
            self.rimsPickerViewModel.filterActive = false
            getData()
        } else {
            let storyboard = UIStoryboard(storyboard: .Main)
            let filterViewController: FilterViewController = storyboard.instantiateViewController()
            filterViewController.modalPresentationStyle = .overCurrentContext
            filterViewController.delegate = self
            
            self.navigationController?.present(filterViewController, animated: true, completion: nil)
        }
    }
    
}

// MARK: FilterViewDelegate

extension RimsPickerViewController: FilterViewDelegate {

    func handleFiltration(filterInstance: FilterInstance) {
        showLoading()
        rimsPickerViewModel.getFilteredData(filterInstance: filterInstance) { success in
            self.hideLoading()
            self.rimsPickerViewModel.filterActive = true
            
            if let rimsData = self.rimsPickerViewModel.rimsData, rimsData.count > 0 {
                self.rimsPageViewController?.rimsPageViewModel.rimsData = self.rimsPickerViewModel.rimsData
                self.rimsPageViewController?.initPageView()
                self.containerView.isHidden = false
                self.infoLabel.isHidden = true
            } else {
                self.containerView.isHidden = true
                self.infoLabel.isHidden = false
            }
           
        
        }
        
    }
}
