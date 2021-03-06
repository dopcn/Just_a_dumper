//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JUViewControllerBase.h"

#import "AliDetailParentVCDelegate-Protocol.h"
#import "AliTradeSKUViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AliDetailCommonEventSubscriber, JHSDetaiTradeSupplementSubscriber, JHSDetailContextSubscriber, JHSDetailEventJuappSubscriber, JHSDetailEventMainSubscriber, JHSDetailEventRefreshSubscriber, JHSDetailEventTradeSubscriber, JHSDetailMessageCenter, JHSDetailVCDataSource, JHSDetailViewBuilder, JHSDetailWidgetSubscriber, NSString;

@interface JHSDetailViewController : JUViewControllerBase <AliTradeSKUViewDelegate, UIScrollViewDelegate, AliDetailParentVCDelegate>
{
    JHSDetailViewBuilder *_detailBuilder;
    JHSDetailMessageCenter *_detailMsgCenter;
    JHSDetailVCDataSource *_detailDataSource;
    AliDetailCommonEventSubscriber *_commonEventSubscriber;
    JHSDetailEventMainSubscriber *_mainEventSubscriber;
    JHSDetailEventRefreshSubscriber *_refreshSubscriber;
    JHSDetailEventTradeSubscriber *_jhsTradeSubscriber;
    JHSDetailEventJuappSubscriber *_juappSubscriber;
    JHSDetailWidgetSubscriber *_widgetSubscriber;
    JHSDetaiTradeSupplementSubscriber *_jhsTradeSupplementSubscriber;
    JHSDetailContextSubscriber *_contextSubscriber;
    NSString *_eventToken;
}

@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(retain, nonatomic) JHSDetailContextSubscriber *contextSubscriber; // @synthesize contextSubscriber=_contextSubscriber;
@property(retain, nonatomic) JHSDetaiTradeSupplementSubscriber *jhsTradeSupplementSubscriber; // @synthesize jhsTradeSupplementSubscriber=_jhsTradeSupplementSubscriber;
@property(retain, nonatomic) JHSDetailWidgetSubscriber *widgetSubscriber; // @synthesize widgetSubscriber=_widgetSubscriber;
@property(retain, nonatomic) JHSDetailEventJuappSubscriber *juappSubscriber; // @synthesize juappSubscriber=_juappSubscriber;
@property(retain, nonatomic) JHSDetailEventTradeSubscriber *jhsTradeSubscriber; // @synthesize jhsTradeSubscriber=_jhsTradeSubscriber;
@property(retain, nonatomic) JHSDetailEventRefreshSubscriber *refreshSubscriber; // @synthesize refreshSubscriber=_refreshSubscriber;
@property(retain, nonatomic) JHSDetailEventMainSubscriber *mainEventSubscriber; // @synthesize mainEventSubscriber=_mainEventSubscriber;
@property(retain, nonatomic) AliDetailCommonEventSubscriber *commonEventSubscriber; // @synthesize commonEventSubscriber=_commonEventSubscriber;
@property(retain, nonatomic) JHSDetailVCDataSource *detailDataSource; // @synthesize detailDataSource=_detailDataSource;
@property(retain, nonatomic) JHSDetailMessageCenter *detailMsgCenter; // @synthesize detailMsgCenter=_detailMsgCenter;
@property(retain, nonatomic) JHSDetailViewBuilder *detailBuilder; // @synthesize detailBuilder=_detailBuilder;
- (void).cxx_destruct;
- (_Bool)shouldUseMagicMove;
- (id)popAnimatedTransitioning;
- (id)pushAnimatedTransitioning;
- (void)viewWillDisappearAfterSubPageShow;
- (void)viewWillAppearBeforeSubPageHide;
- (void)hideVideoView;
- (void)showVideoView;
- (void)updateSpm:(id)arg1 scm:(id)arg2 videoId:(id)arg3;
- (id)productVideoView;
- (id)dataForUserTrack;
- (void)presentDMSpiritIfPossible;
- (_Bool)forbidbackPanGestureRecognized;
- (void)backItemClicked:(id)arg1;
- (void)tradeSkuView:(id)arg1 showAreaChooserView:(id)arg2 withModel:(id)arg3;
- (_Bool)cartIsOnTop:(id)arg1;
- (id)viewForAnimationInSkuView:(id)arg1;
- (void)tradeSkuValueDidChange:(id)arg1;
- (void)tradeSkuView:(id)arg1 dismissSkuViewHandleBlock:(CDUnknownBlockType)arg2;
- (void)unregisterEvent;
- (void)registerEvent;
- (struct _NSRange)commonEventRange;
- (void)excuteOneTimeRegister;
- (void)registerFactories;
- (void)injectProtocol;
- (id)dataEngine;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)commonInit:(id)arg1;
- (void)updateSubscriberDataSource;
- (id)initWithNativeParames:(id)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

