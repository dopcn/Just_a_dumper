//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "XCFStringKeywordDataProvider-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, RLMRealmConfiguration, XCFStringKeywordTransformer;

@interface XCFAdManager : NSObject <XCFStringKeywordDataProvider>
{
    NSDictionary *_universalSearchSDKAdLoaders;
    NSDictionary *_exploreVideoAdLoaders;
    XCFStringKeywordTransformer *_adInfoTransformer;
    NSArray *_tanxAdModels;
    NSMutableDictionary *_currentAdsInMemory;
    NSMutableArray *_adInfoModelClasses;
    RLMRealmConfiguration *_adRealmConfigure;
    NSDate *_tanxAdsFetchDate;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSDate *tanxAdsFetchDate; // @synthesize tanxAdsFetchDate=_tanxAdsFetchDate;
@property(retain, nonatomic) RLMRealmConfiguration *adRealmConfigure; // @synthesize adRealmConfigure=_adRealmConfigure;
@property(retain, nonatomic) NSMutableArray *adInfoModelClasses; // @synthesize adInfoModelClasses=_adInfoModelClasses;
@property(retain, nonatomic) NSMutableDictionary *currentAdsInMemory; // @synthesize currentAdsInMemory=_currentAdsInMemory;
@property(retain, nonatomic) NSArray *tanxAdModels; // @synthesize tanxAdModels=_tanxAdModels;
- (void).cxx_destruct;
- (id)_dynamicUserDeviceInfoForKey:(id)arg1;
- (id)valueForKeyword:(id)arg1;
- (id)keywords;
- (_Bool)shouldHandleString:(id)arg1;
- (id)exploreVideoAdLoaderForType:(unsigned long long)arg1;
- (void)prepareExploreVideoADLoadersWithBaseController:(id)arg1 platforms:(id)arg2;
- (id)universalSearchSDKAdLoaderForType:(unsigned long long)arg1;
- (void)prepareUniversalSearchADLoadersWithBaseController:(id)arg1 platforms:(id)arg2;
- (id)adLoaderWithSDKType:(unsigned long long)arg1 unitID:(id)arg2 videoSupport:(_Bool)arg3 adCount:(long long)arg4 baseController:(id)arg5;
- (id)adLoaderWithSDKType:(unsigned long long)arg1 unitID:(id)arg2 adCount:(long long)arg3 baseController:(id)arg4;
- (void)appDidLaunched;
- (id)fillWithUserDeviceInfoForURLString:(id)arg1 cache:(id)arg2;
- (_Bool)makeupSSPAd:(id)arg1 withTanxSlotName:(id)arg2;
- (void)trackADNotInterestActionWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)cleanAllNotInterestedMarks;
- (_Bool)isSponsoredADNotInterestedWithIdentifier:(id)arg1;
- (void)markSponsoredADNotInterestedWithIdentifier:(id)arg1;
- (id)sponsoredADMarkRealm;
- (void)getAllAdsAndSaveToMemory;
- (void)getHomeBannerAdsAndSaveToMemory;
- (id)getCurrentValidAdModelArrayBySlotNames:(id)arg1;
- (id)getCurrentValidAdModelBySlotName:(id)arg1;
- (void)fetchTanxAdsIfNeeded;
- (void)getAdsBySlotNames:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)adModelsFromDic:(id)arg1 withSlotNames:(id)arg2;
- (id)adModelFromDic:(id)arg1;
- (Class)adInfoModelClassThatCanHandleDic:(id)arg1;
- (void)registerAdInfoModelClass:(Class)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

