//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTViewController.h"

#import "QYPPRouterProtocol-Protocol.h"
#import "RCTViewControllerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SPActivityIndicatorView, UILabel, UIView;

@interface RCTPPViewController : RCTViewController <QYPPRouterProtocol, RCTViewControllerDelegate>
{
    SPActivityIndicatorView *loadingAnimeView;
    _Bool _isFatal;
    _Bool _isLoadError;
    _Bool _didViewAppear;
    _Bool _shouldDisablePopGesture;
    id _targetPopViewController;
    NSArray *_routes;
    NSArray *_lastRoutes;
    NSDictionary *_returnParams;
    NSMutableDictionary *_additionParams;
    CDUnknownBlockType _callBackBlock;
    UIView *_loadingView;
    NSString *_pageInstanceID;
    UILabel *_labelDebugTip;
    NSString *_pageName;
    NSMutableDictionary *_initialProperties;
}

+ (id)viewWithInitialProperties:(id)arg1;
+ (_Bool)enableRN;
+ (id)getUniqueStrByUUID;
+ (id)baseInfoDict;
+ (void)load;
@property(nonatomic) _Bool shouldDisablePopGesture; // @synthesize shouldDisablePopGesture=_shouldDisablePopGesture;
@property(retain, nonatomic) NSMutableDictionary *initialProperties; // @synthesize initialProperties=_initialProperties;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) UILabel *labelDebugTip; // @synthesize labelDebugTip=_labelDebugTip;
@property(retain, nonatomic) NSString *pageInstanceID; // @synthesize pageInstanceID=_pageInstanceID;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool didViewAppear; // @synthesize didViewAppear=_didViewAppear;
@property(copy, nonatomic) CDUnknownBlockType callBackBlock; // @synthesize callBackBlock=_callBackBlock;
@property(retain, nonatomic) NSMutableDictionary *additionParams; // @synthesize additionParams=_additionParams;
@property(retain, nonatomic) NSDictionary *returnParams; // @synthesize returnParams=_returnParams;
@property(retain, nonatomic) NSArray *lastRoutes; // @synthesize lastRoutes=_lastRoutes;
@property(retain, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property(nonatomic) __weak id targetPopViewController; // @synthesize targetPopViewController=_targetPopViewController;
@property(nonatomic) _Bool isLoadError; // @synthesize isLoadError=_isLoadError;
@property(nonatomic) _Bool isFatal; // @synthesize isFatal=_isFatal;
- (void).cxx_destruct;
- (void)disablePopGesture;
- (void)emitRCTQYEvent:(id)arg1 params:(id)arg2;
- (void)pingbackPath;
- (id)RCTPingBackPageName;
- (void)initLoadingView;
- (void)configPopGestureRecognizer;
- (void)componentDidDisappearWithName:(id)arg1;
- (void)componentDidAppearWithName:(id)arg1;
- (void)configComponentLifeCycle;
- (void)handleActionWithSchema:(id)arg1;
- (void)handleShowAlertViewWithParams:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)handleShowActionSheetWithParams:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setQYRCTSchemaParser:(CDUnknownBlockType)arg1;
- (void)didReceiveMemoryWarning;
- (void)initSchemaParser;
- (void)callJSOnResume;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)baseInfoWithParam:(id)arg1;
- (long long)RCTStatusBarStyle;
- (_Bool)RCTNavigationBarHidden;
- (void)dealloc;
- (void)commonInit;
- (id)initWithInitialProperties:(id)arg1;
- (id)initWithBundle:(id)arg1 moduleName:(id)arg2 initialProperties:(id)arg3;
- (id)initWithBundle:(id)arg1 moduleName:(id)arg2;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

