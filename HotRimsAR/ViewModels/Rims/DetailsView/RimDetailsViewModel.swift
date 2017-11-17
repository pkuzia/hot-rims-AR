//
//  RimDetailsViewModel.swift
//  HotRimsAR
//
//  Created by Przemysław Kuzia on 18.12.2016.
//  Copyright © 2016 Iterators Mobile. All rights reserved.
//

import Foundation
import RealmSwift

class RimsDetailsViewModel: BaseViewModel {
    
    var rimObject: RimObject?
    let viewTitle = "Hot Rims"
    
    func addToFavourite(completionHandler: @escaping (_ success: Bool) -> Void) {
        
        if let rimObject = rimObject {
            do {
                let realm = try Realm()
                let rim = realm.objects(RimObject.self).filter("ID == \"\(rimObject.ID)\"").first
                
                try realm.write {
                    rim?.isFavourite = true
                    rim?.likes += 1
                    
                    sendNewLike(ID: rimObject.ID, completionHandler: { success in
                        completionHandler(success)
                    })
                    completionHandler(true)
                }
            } catch _ as NSError {
                completionHandler(false)
            }
        } else {
            completionHandler(false)
        }
    }
    
    private func sendNewLike(ID: String, completionHandler: @escaping (_ success: Bool) -> Void) {
        RestClient.sharedInstance.sendNewLike(ID: ID) { response in
            DispatchQueue.main.async {
                if let result = response.result.value?.result, result {
                    completionHandler(true)
                }
            }
        }
    
    }
}
