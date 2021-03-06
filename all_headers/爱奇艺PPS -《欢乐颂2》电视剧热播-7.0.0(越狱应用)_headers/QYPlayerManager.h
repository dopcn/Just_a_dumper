//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IQYDataLoadManagerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIFadeAlertDeletage-Protocol.h"

@class ContentBuyData, IQYBossAucManager, IQYContentBuyManager, IQYQiDanManager, IQYSubscriptionManager, IQYUseVODCouponManager, IQYVirtualCurrencyDoPayManager, NSString, QYPlayerViewController, UIView;

@interface QYPlayerManager : NSObject <UIFadeAlertDeletage, UIAlertViewDelegate, IQYDataLoadManagerDelegate>
{
    QYPlayerViewController *_playerViewController;
    IQYQiDanManager *_qidanManager;
    _Bool _isQidanLoading;
    _Bool _isUnBeganContentBuy;
    int _qidanType;
    ContentBuyData *_currentBuyData;
    IQYContentBuyManager *_contentBuyManager;
    IQYUseVODCouponManager *_vodCouponManger;
    IQYVirtualCurrencyDoPayManager *_doPayManager;
    IQYSubscriptionManager *_ownerSubscribeManager;
    IQYSubscriptionManager *_videoSubscribeManager;
    IQYBossAucManager *_bossAucManager;
    UIView *_loadingView;
}

@property(nonatomic) _Bool isUnBeganContentBuy; // @synthesize isUnBeganContentBuy=_isUnBeganContentBuy;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) IQYBossAucManager *bossAucManager; // @synthesize bossAucManager=_bossAucManager;
@property(retain, nonatomic) IQYSubscriptionManager *videoSubscribeManager; // @synthesize videoSubscribeManager=_videoSubscribeManager;
@property(retain, nonatomic) IQYSubscriptionManager *ownerSubscribeManager; // @synthesize ownerSubscribeManager=_ownerSubscribeManager;
@property(retain, nonatomic) IQYVirtualCurrencyDoPayManager *doPayManager; // @synthesize doPayManager=_doPayManager;
@property(retain, nonatomic) IQYUseVODCouponManager *vodCouponManger; // @synthesize vodCouponManger=_vodCouponManger;
@property(retain, nonatomic) IQYContentBuyManager *contentBuyManager; // @synthesize contentBuyManager=_contentBuyManager;
@property int qidanType; // @synthesize qidanType=_qidanType;
@property(retain, nonatomic) ContentBuyData *currentBuyData; // @synthesize currentBuyData=_currentBuyData;
@property(nonatomic) _Bool isQidanLoading; // @synthesize isQidanLoading=_isQidanLoading;
- (void).cxx_destruct;
- (void)showToastWithText:(id)arg1;
- (void)requestVideoSubscribeInterfaceFailed:(id)arg1;
- (void)requestLiveOwnerSubscribeInterfaceFailed:(id)arg1;
- (void)requestContentBuyForUnbeganBroadcast;
- (void)requestBossAucInterfaceFailed:(id)arg1;
- (void)requestBossAucInterfaceSucceeded:(id)arg1;
- (void)requestVideoSubscribeInterfaceSucceeded:(id)arg1;
- (void)requestLiveOwnerSubscribeInterfaceSucceeded:(id)arg1;
- (void)requestSubscribeVideo:(unsigned long long)arg1 videoInfo:(id)arg2;
- (void)requestLiveOwnerSubscribe:(unsigned long long)arg1 ownerInfo:(id)arg2;
- (id)getQiDianPidFromContentBuyData;
- (void)stopLoading;
- (void)startLoading;
- (void)requestQiDianDoPayInterfaceFailed:(id)arg1;
- (void)requestQiDianDoPayInterfaceSucceeded:(id)arg1;
- (void)requestQiDianDoPayInterface:(id)arg1;
- (void)requestConsumeVodCouponInterfaceFailed:(id)arg1;
- (void)requestConsumeVodCouponInterfaceSucceeded:(id)arg1;
- (void)requestConsumeVodCouponInterface;
- (void)requestContentBuyInterfaceFailed:(id)arg1;
- (void)requestContentBuyInterfaceSucceeded:(id)arg1;
- (void)requestBossAucInterface;
- (void)pushRequestConsumeVodCouponInterface:(id)arg1;
- (void)requestContentBuyInterface;
- (void)showQidanLoginAlert;
- (void)requestQidanFailed:(id)arg1;
- (void)requestQidanSuccessed:(id)arg1;
- (void)doCancelCollectionBtn;
- (void)doCollectionBtn;
- (void)doQidanBtn:(_Bool)arg1;
- (void)requestQidanDataByType:(int)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (id)initWithPlayerViewController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

