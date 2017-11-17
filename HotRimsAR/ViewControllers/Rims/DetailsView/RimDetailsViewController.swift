//
//  RimDetailsViewController.swift
//  HotRimsAR
//
//  Created by Przemysław Kuzia on 18.12.2016.
//  Copyright © 2016 Iterators Mobile. All rights reserved.
//

import UIKit

protocol RimDetailsDelegate {
    func likesChange()
}

class RimDetailsViewController: BaseViewController {

    @IBOutlet weak var collectionView: UICollectionView!
    @IBOutlet weak var rimTitle: UILabel!
    @IBOutlet weak var rimColor: UILabel!
    @IBOutlet weak var likes: UILabel!
    
    @IBOutlet weak var reviewHeader: UILabel!
    @IBOutlet weak var reviewContent: UILabel!
    @IBOutlet weak var authorAvatar: UIImageView!
    @IBOutlet weak var authorName: UILabel!
    
    @IBOutlet weak var matchButton: UIButton!
    
    let heartButton = UIButton()
    
    let rimDetailsViewModel = RimsDetailsViewModel()
    var delegate: RimDetailsDelegate?
    
    // MARK: View Lifecycle

    override func viewDidLoad() {
        super.viewDidLoad()
        initUI()
    }
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        initColorNavBar()
    }
    
    // MARK: Init UI

    func initUI() {
        collectionView.delegate = self
        collectionView.dataSource = self
        
        rimTitle.text = rimDetailsViewModel.rimObject?.name
        rimColor.text = rimDetailsViewModel.rimObject?.colorInfo
        
        if let likes = rimDetailsViewModel.rimObject?.likes {
            self.likes.text = String(describing: likes)
        }
        
        reviewHeader.text = "review_header".localized
        reviewContent.text = rimDetailsViewModel.rimObject?.review
        
        authorName.text = rimDetailsViewModel.rimObject?.authorName
        
        if let imageURL = rimDetailsViewModel.rimObject?.authorAvatarURL, let URL = URL(string: imageURL) {
            authorAvatar.kf.setImage(with: URL)
        }

        matchButton.setTitle("match_button_title".localized, for: .normal)
        
        initNavBar()
    }
    
    func initNavBar() {
        self.title = rimDetailsViewModel.viewTitle
        
        let backButton = UIButton()
        backButton.setImage(UIImage(named: "Back"), for: .normal)
        backButton.frame = CGRect(x: 0, y: 0, width: 30, height: 30)
        backButton.addTarget(self, action: #selector(backButtonClick(_:)), for: .touchUpInside)
        
        let leftBarButton = UIBarButtonItem(customView: backButton)
        self.navigationItem.leftBarButtonItem = leftBarButton
        
        heartButton.frame = CGRect(x: 0, y: 0, width: 30, height: 30)
        heartButton.addTarget(self, action: #selector(heartButtonClick(_:)), for: .touchUpInside)
        
        heartButton.setImage(UIImage(named: "HeartsBlack"), for: .normal)
        heartButton.setImage(UIImage(named: "HeartsBlackFilled"), for: .selected)
        heartButton.setImage(UIImage(named: "HeartsBlackFilled"), for: .highlighted)

    
        if let isFavourite = rimDetailsViewModel.rimObject?.isFavourite, isFavourite {
           heartButton.isSelected = true
        }

        let rightBarButton = UIBarButtonItem(customView: heartButton)
        self.navigationItem.rightBarButtonItem = rightBarButton
    }
    
    func initColorNavBar() {
        self.navigationController?.navigationBar.barStyle = .default
        self.navigationController?.navigationBar.tintColor = UIColor.black
    }


    // MARK: User interaction
    
    @IBAction func backButtonClick(_ sender: Any) {
        _ = self.navigationController?.popViewController(animated: true)
    }

    func heartButtonClick(_ sender: UIButton) {

        if let rimObject = rimDetailsViewModel.rimObject {
            if !rimObject.isFavourite {
                showLoading()
                rimDetailsViewModel.addToFavourite(completionHandler: { success in
                    self.hideLoading()
                    self.heartButton.isSelected = true
                    
                    if let likes = self.rimDetailsViewModel.rimObject?.likes {
                        self.likes.text = String(describing: likes)
                        self.delegate?.likesChange()
                    }
                })
            }
        }
    }
    @IBAction func machButtonClick(_ sender: Any) {
        
        if let modelName = rimDetailsViewModel.rimObject?.modelName {
        
            let unityView = UnityGetGLViewController()
            let appDelegate = UIApplication.shared.delegate as! AppDelegate
            UnitySendMessage("ModelController", "selectModel", modelName)
            appDelegate.unityController.initUnity()
            
            self.navigationController?.present((unityView)!, animated: true, completion: nil)
        }
    }
}

// MARK: UICollectionViewDataSource

extension RimDetailsViewController: UICollectionViewDataSource {
    
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
   
        if let rimObject = rimDetailsViewModel.rimObject {
            return rimObject.images.count
        } else {
            return 0
        }
    }
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        
        if let cell = collectionView.dequeueReusableCell(withReuseIdentifier: "imageCell", for: indexPath) as? RimImageCollectionItem {
            
            if let rimObject = rimDetailsViewModel.rimObject {
                
                let image = rimObject.images[indexPath.row]
                
                if let URLString = image.URL, let URL = URL(string: URLString) {
                    cell.image.kf.setImage(with: URL)
                }
            }

            return cell
        } else {
            return UICollectionViewCell()
        }
    }
    
}

// MARK: UICollectionViewDelegate

extension RimDetailsViewController: UICollectionViewDelegate {
    
}
