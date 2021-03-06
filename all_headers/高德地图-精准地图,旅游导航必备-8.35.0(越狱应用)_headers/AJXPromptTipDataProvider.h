//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

#import "AMAOSRequestDelegate-Protocol.h"

@class AMAOSBannerRequest, LTMBannerViewUtility, NMBannerInfo, NSString;

@interface AJXPromptTipDataProvider : JSONModel <AMAOSRequestDelegate>
{
    LTMBannerViewUtility *_bannerViewUtility;
    AMAOSBannerRequest *_bannerTipRequest;
    NMBannerInfo *_bannerInfo;
    NSString *_currentPathTypeKey;
    NSString *_bannerKey;
    CDUnknownBlockType _bannerBlock;
}

@property(copy, nonatomic) CDUnknownBlockType bannerBlock; // @synthesize bannerBlock=_bannerBlock;
@property(copy, nonatomic) NSString *bannerKey; // @synthesize bannerKey=_bannerKey;
@property(copy, nonatomic) NSString *currentPathTypeKey; // @synthesize currentPathTypeKey=_currentPathTypeKey;
@property(retain, nonatomic) NMBannerInfo *bannerInfo; // @synthesize bannerInfo=_bannerInfo;
@property(retain, nonatomic) AMAOSBannerRequest *bannerTipRequest; // @synthesize bannerTipRequest=_bannerTipRequest;
@property(retain, nonatomic) LTMBannerViewUtility *bannerViewUtility; // @synthesize bannerViewUtility=_bannerViewUtility;
- (void).cxx_destruct;
- (void)bannerTipViewContentDidClick;
- (void)removeBannerWithTipsInfo:(id)arg1 saveKey:(id)arg2;
- (void)bannerTipViewCloseButtonDidClick;
- (void)cancelRequest;
- (void)removeClosedTipsViewWithKey:(id)arg1;
- (id)closedBannerIDsWithMD5:(id)arg1 saveKey:(id)arg2;
- (id)closedMD5StringWithKey:(id)arg1;
- (void)removeClosedBannerInfoFromBannerInfo:(id)arg1 key:(id)arg2;
- (void)aosRequestFinished:(id)arg1 response:(id)arg2;
- (void)sendBannerTipRequestForType:(id)arg1;
- (void)sendTrainTipRequest;
- (void)sendBusListTipRequest;
- (void)sendBusTipRequest;
- (void)fetchPromptTipDataForType:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

