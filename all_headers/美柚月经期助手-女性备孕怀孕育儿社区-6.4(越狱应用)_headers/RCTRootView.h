//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSString, RCTBridge, RCTRootContentView, UIViewController;
@protocol RCTRootViewDelegate;

@interface RCTRootView : UIView
{
    RCTBridge *_bridge;
    NSString *_moduleName;
    NSDictionary *_launchOptions;
    RCTRootContentView *_contentView;
    _Bool _passThroughTouches;
    struct CGSize _intrinsicContentSize;
    NSDictionary *_appProperties;
    long long _sizeFlexibility;
    id <RCTRootViewDelegate> _delegate;
    UIViewController *_reactViewController;
    UIView *_loadingView;
    double _loadingViewFadeDelay;
    double _loadingViewFadeDuration;
}

@property(nonatomic) double loadingViewFadeDuration; // @synthesize loadingViewFadeDuration=_loadingViewFadeDuration;
@property(nonatomic) double loadingViewFadeDelay; // @synthesize loadingViewFadeDelay=_loadingViewFadeDelay;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIViewController *reactViewController; // @synthesize reactViewController=_reactViewController;
@property(nonatomic) __weak id <RCTRootViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long sizeFlexibility; // @synthesize sizeFlexibility=_sizeFlexibility;
@property(copy, nonatomic) NSDictionary *appProperties; // @synthesize appProperties=_appProperties;
@property(readonly, nonatomic) RCTBridge *bridge; // @synthesize bridge=_bridge;
@property(readonly, copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;
- (void)cancelTouches;
- (void)dealloc;
- (void)contentViewInvalidated;
@property(nonatomic) struct CGSize intrinsicContentSize;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)runApplication:(id)arg1;
- (void)bundleFinishedLoading:(id)arg1;
- (void)javaScriptDidLoad:(id)arg1;
- (void)bridgeDidReload;
- (id)reactTag;
- (void)hideLoadingView;
- (void)showLoadingView;
- (_Bool)canBecomeFirstResponder;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) _Bool passThroughTouches;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithBundleURL:(id)arg1 moduleName:(id)arg2 initialProperties:(id)arg3 launchOptions:(id)arg4;
- (id)initWithBridge:(id)arg1 moduleName:(id)arg2 initialProperties:(id)arg3;
- (id)initWithBridge:(id)arg1 moduleName:(id)arg2 initialProperties:(id)arg3 frame:(struct CGRect)arg4;
@property(readonly, nonatomic) struct CGSize intrinsicSize;

@end

