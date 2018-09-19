//
//  AppDelegate.h
//  SampleGit
//
//  Created by SmartRx-iOS on 19/09/18.
//  Copyright © 2018 SmartRx-iOS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

