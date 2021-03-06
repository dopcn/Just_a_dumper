//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModule.h"

@class HTLLightContentStyleNavigationBarUtil, HTLRedEnvenlopViewController, NSDictionary, NSString, UIButton, UIView;

@interface HTLHomePageNavBarModule : GCBaseModule
{
    _Bool _isTransparent;
    _Bool _isCoverLayerShow;
    HTLLightContentStyleNavigationBarUtil *_lightStyleUtil;
    HTLRedEnvenlopViewController *_redEnvenlopVC;
    UIButton *_backButton;
    UIView *_backBGView;
    unsigned long long _homePageAccommodationType;
    NSString *_redPacketJumpUrl;
    NSDictionary *_event_val_lab;
}

@property(copy, nonatomic) NSDictionary *event_val_lab; // @synthesize event_val_lab=_event_val_lab;
@property(copy, nonatomic) NSString *redPacketJumpUrl; // @synthesize redPacketJumpUrl=_redPacketJumpUrl;
@property(nonatomic) unsigned long long homePageAccommodationType; // @synthesize homePageAccommodationType=_homePageAccommodationType;
@property(retain, nonatomic) UIView *backBGView; // @synthesize backBGView=_backBGView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) _Bool isCoverLayerShow; // @synthesize isCoverLayerShow=_isCoverLayerShow;
@property(nonatomic) _Bool isTransparent; // @synthesize isTransparent=_isTransparent;
@property(retain, nonatomic) HTLRedEnvenlopViewController *redEnvenlopVC; // @synthesize redEnvenlopVC=_redEnvenlopVC;
@property(retain, nonatomic) HTLLightContentStyleNavigationBarUtil *lightStyleUtil; // @synthesize lightStyleUtil=_lightStyleUtil;
- (void).cxx_destruct;
- (void)_jumpToRedPacketCenter;
- (void)clickRedEnvenlop;
- (void)clickFAQ;
- (void)showRedEnvenlopMGE:(_Bool)arg1;
- (void)_startRedPacketAnimation:(id)arg1;
- (void)showRedEnvenlopEntrance:(_Bool)arg1;
- (void)p_setMaskViewShoulDisplay:(_Bool)arg1;
- (void)configNavBarStyleWhenSlide;
- (void)addNavBarTransparentView;
- (void)showNavOperationEntrance;
- (void)setupNavBar;
- (id)rightBarButtonItems;
- (void)bind;
- (void)moduleDidAppear:(_Bool)arg1;
- (void)loadRedEnvenlopInfo;
- (void)updateNavBar;
- (void)addRedEnvenlopVC;
- (void)setupModule;

@end

