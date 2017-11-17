//
//  BaseNavigationController.swift
//  HotRimsAR
//
//  Created by Przemysław Kuzia on 18.12.2016.
//  Copyright © 2016 Iterators Mobile. All rights reserved.
//

import UIKit

class BaseNavigationController: UINavigationController {

    // MARK: View lifecycle
    
    override func viewDidLoad() {
        super.viewDidLoad()
        initUI()
    }
    
    // MARK: Init UI
    
    func initUI() {
        
        UINavigationBar.appearance().setBackgroundImage(UIImage(), for: .default)
        UINavigationBar.appearance().shadowImage = UIImage()
        UINavigationBar.appearance().backgroundColor = UIColor(red: 0.0, green: 0.0, blue: 0.0, alpha: 0.0)
        UINavigationBar.appearance().isTranslucent = true
        
        UINavigationBar.appearance().titleTextAttributes = [
            NSFontAttributeName: UIFont.systemFont(ofSize: 20, weight: UIFontWeightLight)
        ]
    }

}
