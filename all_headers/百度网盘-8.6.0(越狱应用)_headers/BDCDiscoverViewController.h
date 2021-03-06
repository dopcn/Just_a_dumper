//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "BDCChannelBarDelegate-Protocol.h"
#import "BDCDiscoverListWebViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class BDCChannelBar, BDCDiscoverListWebViewController, NSArray, NSString, UIScrollView;

@interface BDCDiscoverViewController : BaseViewController <BDCDiscoverListWebViewDelegate, BDCChannelBarDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    _Bool _isAddTimeLog;
    _Bool _isViewControllerShow;
    BDCChannelBar *_channelBar;
    BDCDiscoverListWebViewController *_webViewController;
    NSArray *_channelTitleList;
    double _startTime;
    UIScrollView *_controllerScrollView;
    long long _fromItem;
    double _oldScrollViewOffX;
}

@property(nonatomic) double oldScrollViewOffX; // @synthesize oldScrollViewOffX=_oldScrollViewOffX;
@property(nonatomic) long long fromItem; // @synthesize fromItem=_fromItem;
@property(retain, nonatomic) UIScrollView *controllerScrollView; // @synthesize controllerScrollView=_controllerScrollView;
@property(nonatomic) _Bool isViewControllerShow; // @synthesize isViewControllerShow=_isViewControllerShow;
@property(nonatomic) _Bool isAddTimeLog; // @synthesize isAddTimeLog=_isAddTimeLog;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSArray *channelTitleList; // @synthesize channelTitleList=_channelTitleList;
@property(retain, nonatomic) BDCDiscoverListWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) BDCChannelBar *channelBar; // @synthesize channelBar=_channelBar;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)addFeedLogWithScrollIndex:(long long)arg1;
- (void)addFeedContentShowTimeLog:(long long)arg1;
- (void)addFeedContentLog:(id)arg1;
- (void)resetStartTime;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)pushDetailViewControllerWithUrl:(id)arg1;
- (void)channelBar:(id)arg1 didSelectItem:(unsigned long long)arg2 fromSelectItem:(unsigned long long)arg3;
- (void)handleAppWillEnterForegroundNotification:(id)arg1;
- (void)handleAppDidEnterBackgroundNotification:(id)arg1;
- (void)videoExitFullScreen;
- (void)addObserver;
- (void)setNavigationItem;
- (void)setChannelBarView;
- (void)initScrollView;
- (void)initData;
- (void)reloadChannelBarViewStatus;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

