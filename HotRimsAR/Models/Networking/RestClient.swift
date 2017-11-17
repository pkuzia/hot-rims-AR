//
//  RestClient.swift
//  HotRimsAR
//
//  Created by Przemysław Kuzia on 09.10.2016.
//  Copyright © 2016 Przemysław Kuzia. All rights reserved.
//

import Foundation
import Alamofire
import AlamofireObjectMapper
import ObjectMapper
import RealmSwift


public class RestClient {
    
    static let sharedInstance = RestClient()

    let kMaxPrice = "maxPrice"
    let kID = "ID"
    
    enum Router: URLRequestConvertible {
        
        static let baseURLString = "http://www.bellaryszarda.hekko24.pl/przemo/hotrims/index.php/API"
        
        case rimsData, addToFavourite([String: AnyObject])
        
        var method: Alamofire.HTTPMethod {
            switch self {
            case .rimsData, .addToFavourite:
                return .post
            }
        }
        
        var path: String {
            switch self {
            case .rimsData:
                return "/rims"
            case .addToFavourite:
                return "/add_to_favourite"
            }
        }
        
        func asURLRequest() throws -> URLRequest {
            let url = URL(string: Router.baseURLString)!
            var urlRequest = URLRequest(url: url.appendingPathComponent(path))
            urlRequest.httpMethod = method.rawValue

            switch self {
            case .addToFavourite(let parameters):
                return try Alamofire.URLEncoding.default.encode(urlRequest, with: parameters)
            default:
                return urlRequest
            }
        }
    }
    
    // MARK: - Rims API
    
    public func rimsData(completionHandler: @escaping (_ response: Bool, NSError?) -> Void) {
        
        Alamofire.request(Router.rimsData).responseObject { (response: DataResponse<RimsDataResponse>) in
            
            if let fields = response.result.value, let rimsData = fields.rimsData {
                do {
                    let realm = try Realm()
                    try realm.write {
                        for rim in rimsData {
                            realm.add(rim, update: true)
                        }
                        completionHandler(true, nil)
                    }
                } catch let error as NSError {
                    completionHandler(true, error)
                }
            } else {
                completionHandler(true, nil)
            }
        }
    }
    
    public func sendNewLike(ID: String, completionHandler: @escaping (_ response: DataResponse<StatusResponse>) -> Void) {
        
        var parameters = [String: AnyObject]()
        parameters[kID] = ID as AnyObject?
        
        Alamofire.request(Router.addToFavourite(parameters)).responseObject { (response: DataResponse<StatusResponse>) in
            completionHandler(response)
        }

    }
    
}
