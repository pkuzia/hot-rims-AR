//
//  StatusResponse.swift
//  HotRimsAR
//
//  Created by Przemysław Kuzia on 03.01.2017.
//  Copyright © 2017 Iterators Mobile. All rights reserved.
//

import Foundation
import ObjectMapper

public class StatusResponse: Mappable {
    
    var result: Bool?
    
    required public init?(map: Map) {
        
    }
    
    public func mapping(map: Map) {
        result <- map["result"]
    }
    
}
