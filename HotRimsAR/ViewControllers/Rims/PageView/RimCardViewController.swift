//
//  RimCardViewController.swift
//  HotRimsAR
//
//  Created by Przemysław Kuzia on 27.11.2016.
//  Copyright © 2016 Iterators Mobile. All rights reserved.
//

import UIKit
import Kingfisher
import Cosmos

class RimCardViewController: BaseViewController {

    @IBOutlet weak var rimName: UILabel!
    @IBOutlet weak var rimImageView: UIImageView!
    @IBOutlet weak var rimColor: UILabel!
    @IBOutlet weak var cosmosView: CosmosView!
    @IBOutlet weak var likes: UILabel!
    @IBOutlet weak var shippingInfo: UILabel!
    @IBOutlet weak var price: UILabel!
    
    @IBOutlet weak var checkDetailsButton: UIButton!
    
    var pageIndex: Int = 0
    var rimObject: RimObject?
    
    // MARK: View lifecycle
    
    override func viewDidLoad() {
        super.viewDidLoad()
        initUI()
    }
    
    // MARK: Init UI
    
    func initUI() {
        
        if let rimObject = rimObject {
            rimName.text = rimObject.name
            rimColor.text = rimObject.colorInfo
            likes.text = String(rimObject.likes)
            shippingInfo.text = rimObject.shipInfo
            
            if let image = rimObject.images.first, let URLString = image.URL, let URL = URL(string: URLString) {
                rimImageView.kf.setImage(with: URL)
            }
            
            price.text = String(rimObject.price) + "per_wheel".localized
        }
        cosmosView.settings.fillMode = .precise
        
        if let stars = rimObject?.stars {
            cosmosView.rating = stars
        }
        
        checkDetailsButton.setTitle("details_button".localized, for: .normal)
    }

    
    // MARK: User interaction

    @IBAction func goToDetails(_ sender: Any) {

        let storyboard = UIStoryboard(storyboard: .Main)
        let rimDetailsViewController: RimDetailsViewController = storyboard.instantiateViewController()
        
        rimDetailsViewController.rimDetailsViewModel.rimObject = rimObject
        rimDetailsViewController.delegate = self
        
        navigationController?.pushViewController(rimDetailsViewController, animated: true)
        
    }
}

extension RimCardViewController: RimDetailsDelegate {
    
    func likesChange() {
        if let likes = rimObject?.likes {
            self.likes.text = String(likes)
        }
    }
}
