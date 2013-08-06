//
//  AppDelegate.h
//  ChengYu
//
//  Created by ZYVincent on 13-6-16.
//  Copyright ZYVincent 2013年. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "cocos2d.h"


// Added only for iOS 6 support
@interface MyNavigationController : UINavigationController <CCDirectorDelegate>
@end

@interface AppController : NSObject <UIApplicationDelegate>
{
	UIWindow *window_;
	MyNavigationController *navController_;

	CCDirectorIOS	*director_;							// weak ref
}

@property (nonatomic, retain) UIWindow *window;
@property (readonly) MyNavigationController *navController;
@property (readonly) CCDirectorIOS *director;

@end
