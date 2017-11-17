//
//  RimsDataResponse.swift
//  HotRimsAR
//
//  Created by Przemysław Kuzia on 09.11.2016.
//  Copyright © 2016 Iterators Mobile. All rights reserved.
//

import Foundation
import ObjectMapper
import RealmSwift
import ObjectMapper_Realm

public class RimsDataResponse: Mappable {
    
    var rimsData: [RimObject]?
    
    required public init?(map: Map) {
    
    }
    
    public func mapping(map: Map) {
        rimsData <- map["result"]
    }
}

class RimObject: BaseModel {
    dynamic var ID = ""
    dynamic var name = ""
    dynamic var review = ""
    dynamic var price = 0
    dynamic var stars = 0.0
    dynamic var colorInfo = ""
    dynamic var likes = 0
    dynamic var shipInfo = ""
    dynamic var authorName = ""
    dynamic var authorAvatarURL = ""
    dynamic var modelName = ""
    dynamic var isFavourite = false
    var images = List<Image>()
    
    override static func primaryKey() -> String? {
        return "ID"
    }
    
    public override func mapping(map: Map) {
        ID <- map["id"]
        name <- map["name"]
        review <- map["review"]
        images <- (map["images"], ListTransform<Image>())
        price <- map["price"]
        stars <- map["stars"]
        colorInfo <- map["colorInfo"]
        likes <- map["likes"]
        shipInfo <- map["shipInfo"]
        authorName <- map["authorName"]
        modelName <- map["modelName"]
        authorAvatarURL <- map["authorAvatar"]
    }
}

class Image: BaseModel {
    
    dynamic var URL: String?
    
    public override func mapping(map: Map) {
        URL <- map["url"]
    }
    
}
