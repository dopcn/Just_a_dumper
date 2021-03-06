//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UCServicePluginBase.h"

#import "IUSWMVideoDelegate-Protocol.h"
#import "IUSWeMediaProtocol-Protocol.h"
#import "NFWeMediaListObserver-Protocol.h"
#import "WMSubscribeObserver-Protocol.h"

@class NSString, NSURL, UCProxy, UCWMVideoService, WeMediaInfo, YYWebImageOperation;

@interface UCWMService : UCServicePluginBase <NFWeMediaListObserver, WMSubscribeObserver, IUSWMVideoDelegate, IUSWeMediaProtocol>
{
    _Bool _hadAccquireWMIcon;
    _Bool _wmHomeOpening;
    _Bool _hadRequestWMVipIcon;
    UCWMVideoService *_wmVideoService;
    NSString *_oriIconUrl;
    YYWebImageOperation *_wmIconOperation;
    WeMediaInfo *_webWeMediaInfo;
    UCProxy *_serviceProxy;
    NSString *_contentUrl;
    NSURL *_pageUrl;
    NSString *_firstPicUrl;
    NSString *_oriVipIconUrl;
}

@property(retain, nonatomic) NSString *oriVipIconUrl; // @synthesize oriVipIconUrl=_oriVipIconUrl;
@property(nonatomic) _Bool hadRequestWMVipIcon; // @synthesize hadRequestWMVipIcon=_hadRequestWMVipIcon;
@property(copy, nonatomic) NSString *firstPicUrl; // @synthesize firstPicUrl=_firstPicUrl;
@property(copy, nonatomic) NSURL *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(retain, nonatomic) NSString *contentUrl; // @synthesize contentUrl=_contentUrl;
@property(retain, nonatomic) UCProxy *serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property(nonatomic) _Bool wmHomeOpening; // @synthesize wmHomeOpening=_wmHomeOpening;
@property(retain, nonatomic) WeMediaInfo *webWeMediaInfo; // @synthesize webWeMediaInfo=_webWeMediaInfo;
@property(retain, nonatomic) YYWebImageOperation *wmIconOperation; // @synthesize wmIconOperation=_wmIconOperation;
@property(retain, nonatomic) NSString *oriIconUrl; // @synthesize oriIconUrl=_oriIconUrl;
@property(nonatomic) _Bool hadAccquireWMIcon; // @synthesize hadAccquireWMIcon=_hadAccquireWMIcon;
@property(retain, nonatomic) UCWMVideoService *wmVideoService; // @synthesize wmVideoService=_wmVideoService;
- (void)tryAjaxPreload:(id)arg1;
- (void)tryPreLoadFirstPic:(id)arg1;
- (void)didSetTargetItem:(id)arg1;
- (void)didSetPageUrl:(id)arg1;
- (id)pageCurrentItem;
- (long long)currentPageSource;
- (id)pageActiveItem;
- (id)getWebAgent;
- (void)webViewWillDismiss;
- (void)webViewWillRelease;
- (void)triggerWeMeidaEventWithWmId:(id)arg1 isSubscribe:(_Bool)arg2;
- (void)unsubscribe:(id)arg1 from:(id)arg2 didSuccessWithUserId:(id)arg3;
- (void)subscribe:(id)arg1 from:(id)arg2 didSuccessWithUserId:(id)arg3;
- (void)openWMHomePageWithStatInfo:(id)arg1 homeUrl:(id)arg2;
- (void)newWeMediaFollowButtonDidClickWithWMID:(id)arg1;
- (void)weMediaInfoButtonDidClick:(id)arg1;
- (void)weMediaFollowButtonDidClick:(id)arg1;
- (void)bindingServiceDelegate:(id)arg1;
- (void)weMediaList:(id)arg1 weMediaFollowChanged:(id)arg2;
- (void)notifyWebPageWeMediaFollowUpdated:(id)arg1;
- (void)didPageRequireOpenWeMediaHomePage:(id)arg1;
- (void)openWeMediaHomePage:(id)arg1;
- (void)setWeMediaInfo:(id)arg1;
- (void)updateWeMediaInfoUsingWebInfo:(id)arg1;
- (void)flushWeMediaInfo:(id)arg1;
- (void)didUpdateWeMediaFollow:(int)arg1 name:(id)arg2 followed:(_Bool)arg3;
- (void)notifyFollowInfo:(id)arg1;
- (void)unregisterAsEventHandler:(id)arg1;
- (void)registerAsEventHandler:(id)arg1;
@property(readonly, nonatomic) WeMediaInfo *activeWeMediaInfo;
- (void)triggerRequestWMVipIcon:(id)arg1;
- (void)triggerAccquireWMHIcon:(id)arg1;
- (void)didWebPageShareSuccess;
- (void)didWebPageFavoriteSuccess;
- (void)didWebPageCommentSuccess;
- (void)showSceneFollowGuideIfNeedWithSceneType:(long long)arg1;
- (void)newsFlowShareSuccess:(id)arg1;
- (_Bool)isWeMediaInfoVaild;
- (long long)wmUrlSource;
- (id)getService:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

