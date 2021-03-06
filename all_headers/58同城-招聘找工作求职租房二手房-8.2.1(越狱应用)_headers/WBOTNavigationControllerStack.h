//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIViewController;
@protocol WBOTViewModelServices;

@interface WBOTNavigationControllerStack : NSObject
{
    NSMutableArray *_navigationControllers;
    UIViewController *_temptViewController;
    NSMutableArray *_tabBarControllers;
    id <WBOTViewModelServices> _services;
}

@property(retain, nonatomic) id <WBOTViewModelServices> services; // @synthesize services=_services;
@property(retain, nonatomic) NSMutableArray *tabBarControllers; // @synthesize tabBarControllers=_tabBarControllers;
@property(retain, nonatomic) UIViewController *temptViewController; // @synthesize temptViewController=_temptViewController;
@property(retain, nonatomic) NSMutableArray *navigationControllers; // @synthesize navigationControllers=_navigationControllers;
- (void).cxx_destruct;
- (void)pushTabBarController:(id)arg1;
- (id)popNavigationController;
- (void)pushNavigationController:(id)arg1;
- (void)registerNavigationHook;
- (id)initWithService:(id)arg1;

@end

