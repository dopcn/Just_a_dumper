//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "RCTBridgeModule-Protocol.h"

@class NSDictionary, NSObject, NSString, RCTBridge, RCTRootView;
@protocol OS_dispatch_queue;

@interface YDCourseTabViewController : UIViewController <RCTBridgeModule>
{
    RCTRootView *rootView;
    NSDictionary *_initialProperties;
    CDUnknownBlockType _showTabBar;
    CDUnknownBlockType _hideTabBar;
    CDUnknownBlockType _viewWillAppear;
    CDUnknownBlockType _viewDidAppear;
    CDUnknownBlockType _viewWillDisappear;
    CDUnknownBlockType _viewDidDisappear;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)load;
+ (id)moduleName;
@property(copy, nonatomic) CDUnknownBlockType viewDidDisappear; // @synthesize viewDidDisappear=_viewDidDisappear;
@property(copy, nonatomic) CDUnknownBlockType viewWillDisappear; // @synthesize viewWillDisappear=_viewWillDisappear;
@property(copy, nonatomic) CDUnknownBlockType viewDidAppear; // @synthesize viewDidAppear=_viewDidAppear;
@property(copy, nonatomic) CDUnknownBlockType viewWillAppear; // @synthesize viewWillAppear=_viewWillAppear;
@property(copy, nonatomic) CDUnknownBlockType hideTabBar; // @synthesize hideTabBar=_hideTabBar;
@property(copy, nonatomic) CDUnknownBlockType showTabBar; // @synthesize showTabBar=_showTabBar;
@property(retain, nonatomic) NSDictionary *initialProperties; // @synthesize initialProperties=_initialProperties;
- (void).cxx_destruct;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)reloadWithURL:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

