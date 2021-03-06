//
//  AppDelegate.h
//  Converter Application
//
//  Created by Andres Ruggiero on 3/13/15.
//  Copyright (c) 2015 Andres Ruggiero. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ExchangeManager;
@class StoreCoordinator;

@interface AppDelegate : UIResponder <UIApplicationDelegate>{
    ExchangeManager *exchangeManager;
}

@property (strong, nonatomic) ExchangeManager *exchangeManager;
@property (strong, nonatomic) StoreCoordinator *storeCoordinator;

@property (strong, nonatomic) UIWindow *window;


@end

