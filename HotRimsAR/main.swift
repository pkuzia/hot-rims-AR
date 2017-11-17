//
//  main.swift
//  HotRimsAR
//
//  Created by Przemysław Kuzia on 06.01.2017.
//  Copyright © 2017 Iterators Mobile. All rights reserved.
//

import Foundation
// overriding @UIApplicationMain
// http://stackoverflow.com/a/24021180/1060314

custom_unity_init(CommandLine.argc,CommandLine.unsafeArgv)
// Entry point to the application
UIApplicationMain(CommandLine.argc,
                  UnsafeMutableRawPointer(CommandLine.unsafeArgv)
                    .bindMemory(
                        to: UnsafeMutablePointer<Int8>.self,
                        capacity: Int(CommandLine.argc)),
                  nil,
                  NSStringFromClass(AppDelegate.self)
)
