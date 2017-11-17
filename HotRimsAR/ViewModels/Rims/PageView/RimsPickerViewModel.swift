//
//  RimsPickerViewModel.swift
//  HotRimsAR
//
//  Created by Przemysław Kuzia on 27.11.2016.
//  Copyright © 2016 Iterators Mobile. All rights reserved.
//

import Foundation
import RealmSwift

class RimsPickerViewModel: BaseViewModel {
    
    var viewTitle = "Hot Rims"
    
    var rimsData: [RimObject]?
    var filterActive = false
    
    func getRimsData(completionHandler: @escaping (_ success: Bool) -> Void) {
        
        do {
            let realm = try Realm()
            
            let rims = realm.objects(RimObject.self)
            if rims.count > 0 {
                self.rimsData = Array(rims)
                completionHandler(true)
            } else {
                fetchRimsData { success in
                    if success {
                        let rims = Array(realm.objects(RimObject.self))
                        self.rimsData = rims
                        completionHandler(true)
                    } else {
                        completionHandler(false)
                    }
                }
            }
        } catch _ as NSError {
            completionHandler(false)
        }
    }

    func getFilteredData(filterInstance: FilterInstance, completionHandler: @escaping (_ success: Bool) -> Void) {
        
        do {
            let realm = try Realm()
            
            if let minPrice = filterInstance.minPrice, let maxPrice = filterInstance.maxPrice, let minStars = filterInstance.minStars {
                
                let query = NSCompoundPredicate(type: .and, subpredicates: [NSPredicate(format: "price > \(minPrice)"),
                                                                            NSPredicate(format: "price < \(maxPrice)"),
                                                                            NSPredicate(format: "stars > \(minStars)")])
                
                let rims = realm.objects(RimObject.self).filter(query)
                
                self.rimsData = Array(rims)
                completionHandler(true)
            }
            completionHandler(false)
        } catch _ as NSError {
            completionHandler(false)
        }
    }
    
    func getFavouriteRims(completionHandler: @escaping (_ success: Bool) -> Void) {
        
        do {
            let realm = try Realm()
            let query = NSCompoundPredicate(type: .and, subpredicates: [NSPredicate(format: "isFavourite == true")])
            
            let rims = realm.objects(RimObject.self).filter(query)
            
            if Array(rims).count > 0 {
                self.rimsData = Array(rims)
            } else {
                self.rimsData = []
            }
            completionHandler(true)

        } catch _ as NSError {
            completionHandler(false)
        }
    }
    
    private func fetchRimsData(completionHandler: @escaping (_ success: Bool) -> Void) {
        RestClient.sharedInstance.rimsData(completionHandler: { success, error in
            DispatchQueue.main.async {
                completionHandler(success)
            }
        })
    }
    
}
