//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ONEFDDNavigationController, UIViewController;

@interface ONEFDDRouter : NSObject
{
    ONEFDDNavigationController *_rootNav;
    UIViewController *_rootVC;
}

+ (id)globalRouter;
@property(retain, nonatomic) UIViewController *rootVC; // @synthesize rootVC=_rootVC;
@property(retain, nonatomic) ONEFDDNavigationController *rootNav; // @synthesize rootNav=_rootNav;
- (void).cxx_destruct;
- (id)topView;
- (void)setViewContollers:(id)arg1;
- (id)viewControllers;
- (void)disMiss;
- (void)popToRoot;
- (void)popViewController;
- (void)pushViewController:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (id)init;
- (void)dealloc;

@end

