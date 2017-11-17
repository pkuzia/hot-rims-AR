//
//  AppDelegate.swift
//  HotRimsAR
//
//  Created by Przemysław Kuzia on 09.11.2016.
//  Copyright © 2016 Iterators Mobile. All rights reserved.
//

import UIKit

class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?
    var unityController: UnityAppController!
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey : Any]? = nil) -> Bool {
        
        unityController = UnityAppController()
        unityController.application(application, didFinishLaunchingWithOptions: launchOptions)
        
        return true
    }
    
    func applicationWillResignActive(_ application: UIApplication) {
        unityController.applicationWillResignActive(application)
    }
    
    func applicationDidEnterBackground(_ application: UIApplication) {
        unityController.applicationDidEnterBackground(application)
    }
    
    func applicationWillEnterForeground(_ application: UIApplication) {
        unityController.applicationWillEnterForeground(application)
    }
    
    func applicationDidBecomeActive(_ application: UIApplication) {
        unityController.applicationDidBecomeActive(application)
    }
    
    func applicationWillTerminate(_ application: UIApplication) {
        unityController.applicationWillTerminate(application)
    }


}

