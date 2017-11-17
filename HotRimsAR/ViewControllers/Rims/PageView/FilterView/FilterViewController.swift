//
//  FilterViewController.swift
//  HotRimsAR
//
//  Created by Przemysław Kuzia on 27.12.2016.
//  Copyright © 2016 Iterators Mobile. All rights reserved.
//

import UIKit
import Cosmos

protocol FilterViewDelegate {
    func handleFiltration(filterInstance: FilterInstance)
}

public class FilterInstance {
    
    var minPrice: Int?
    var maxPrice: Int?
    var minStars: Float?
}

class FilterViewController: BaseViewController {

    @IBOutlet weak var minPriceHeader: UILabel!
    @IBOutlet weak var minPriceSlider: UISlider!
    @IBOutlet weak var maxPriceHeader: UILabel!
    @IBOutlet weak var maxPriceSlider: UISlider!
    @IBOutlet weak var minStarsHeader: UILabel!
    @IBOutlet weak var cosmosView: CosmosView!
    
    @IBOutlet weak var filterButton: UIButton!
    
    var delegate: FilterViewDelegate?
    
    // MARK: View Lifecycle
    
    override func viewDidLoad() {
        super.viewDidLoad()
        initUI()
    }
    
    // MARK: Init UI
    
    func initUI() {
        minPriceHeader.text = "min_price".localized + String(format: " - %.f $", minPriceSlider.value)
        maxPriceHeader.text = "max_price".localized + String(format: " - %.f $", maxPriceSlider.value)
        minStarsHeader.text = "min_stars".localized
        
        filterButton.setTitle("filter_header".localized, for: .normal)
        
        cosmosView.settings.fillMode = .half
    }
    
    // MARK: User Interactions
    
    @IBAction func minPriceSliderChanged(_ sender: Any) {
        minPriceHeader.text = "min_price".localized + String(format: " - %.f $", minPriceSlider.value)
    }
    
    @IBAction func maxPriceSliderChanged(_ sender: Any) {
        maxPriceHeader.text = "max_price".localized + String(format: " - %.f $", maxPriceSlider.value)
    }
    
    @IBAction func filterButtonClick(_ sender: Any) {
        
        let filterInstance = FilterInstance()
        filterInstance.maxPrice = Int(maxPriceSlider.value)
        filterInstance.minPrice = Int(minPriceSlider.value)
        filterInstance.minStars = Float(cosmosView.rating)
        
        self.dismiss(animated: true, completion: {
            self.delegate?.handleFiltration(filterInstance: filterInstance)
        })
    }
    
}
