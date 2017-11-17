//
//  String.swift
//  HotRimsAR
//
//  Created by Przemysław Kuzia on 25.12.2016.
//  Copyright © 2016 Iterators Mobile. All rights reserved.
//

import Foundation

extension String {
    var localized: String {
        return NSLocalizedString(self, tableName: nil, bundle: Bundle.main, value: "", comment: "")
    }
}
