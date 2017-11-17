//
//  BaseViewController.swift
//  HotRimsAR
//
//  Created by Przemysław Kuzia on 27.11.2016.
//  Copyright © 2016 Iterators Mobile. All rights reserved.
//

import UIKit
import SVProgressHUD

class BaseViewController: UIViewController {

    // MARK: View lifecycle
    
    override func viewDidLoad() {
        super.viewDidLoad()
    }
    
    // MARK: Helper Functions
    
    func showLoading() {
        DispatchQueue.main.async {
            SVProgressHUD.setForegroundColor(UIColor.lightGray)
            SVProgressHUD.setDefaultMaskType(SVProgressHUDMaskType.clear)
            SVProgressHUD.show()
        }
    }
    
    func hideLoading() {
        DispatchQueue.main.async {
            SVProgressHUD.dismiss()
        }
    }
}
