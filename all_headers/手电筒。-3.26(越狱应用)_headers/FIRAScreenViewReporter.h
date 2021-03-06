//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRAScreen, UIViewController;
@protocol OS_dispatch_queue;

@interface FIRAScreenViewReporter : NSObject
{
    UIViewController *_currentViewController;
    FIRAScreen *_currentScreen;
    _Bool _allowScreenParameters;
    _Bool _allowPostScreenDidChangeNotification;
    long long _currentScreenInstanceID;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)notCalled;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)postScreenChangeNotificationWithNewScreen:(id)arg1;
- (void)setCurrentViewController:(id)arg1;
- (id)screenParameters;
- (void)setScreenName:(id)arg1 screenClass:(id)arg2;
- (void)getScreenName:(id *)arg1 screenClass:(id *)arg2;
- (id)init;

@end

