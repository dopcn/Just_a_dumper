//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface QBSaleFeedAdsPool : NSObject
{
    unsigned long long _myFixed1AdState;
    unsigned long long _myFixed2AdState;
    NSMutableDictionary *_allTopAdsDict;
    NSMutableDictionary *_allFixed1AdsDict;
    NSMutableDictionary *_allFixed2AdsDict;
    NSMutableDictionary *_allShowedTopAdsDict;
    NSMutableDictionary *_allShowedFixed1AdsDict;
    NSMutableDictionary *_allShowedFixed2AdsDict;
    NSMutableDictionary *_allNewTopAdsDict;
    NSMutableDictionary *_allNewFixed1AdsDict;
    NSMutableDictionary *_allNewFixed2AdsDict;
}

+ (id)s;
@property(retain, nonatomic) NSMutableDictionary *allNewFixed2AdsDict; // @synthesize allNewFixed2AdsDict=_allNewFixed2AdsDict;
@property(retain, nonatomic) NSMutableDictionary *allNewFixed1AdsDict; // @synthesize allNewFixed1AdsDict=_allNewFixed1AdsDict;
@property(retain, nonatomic) NSMutableDictionary *allNewTopAdsDict; // @synthesize allNewTopAdsDict=_allNewTopAdsDict;
@property(retain, nonatomic) NSMutableDictionary *allShowedFixed2AdsDict; // @synthesize allShowedFixed2AdsDict=_allShowedFixed2AdsDict;
@property(retain, nonatomic) NSMutableDictionary *allShowedFixed1AdsDict; // @synthesize allShowedFixed1AdsDict=_allShowedFixed1AdsDict;
@property(retain, nonatomic) NSMutableDictionary *allShowedTopAdsDict; // @synthesize allShowedTopAdsDict=_allShowedTopAdsDict;
@property(retain, nonatomic) NSMutableDictionary *allFixed2AdsDict; // @synthesize allFixed2AdsDict=_allFixed2AdsDict;
@property(retain, nonatomic) NSMutableDictionary *allFixed1AdsDict; // @synthesize allFixed1AdsDict=_allFixed1AdsDict;
@property(retain, nonatomic) NSMutableDictionary *allTopAdsDict; // @synthesize allTopAdsDict=_allTopAdsDict;
@property(nonatomic) unsigned long long myFixed2AdState; // @synthesize myFixed2AdState=_myFixed2AdState;
@property(nonatomic) unsigned long long myFixed1AdState; // @synthesize myFixed1AdState=_myFixed1AdState;
- (void).cxx_destruct;
- (void)handleSpecialQBSaleAds:(id)arg1;
- (void)sortQBAds:(id)arg1;
- (id)getAnFixed2QBAd;
- (id)getAnFixed1QBAd;
- (id)getAnTopQBAd;
- (id)getAnQBSaleAdWith:(unsigned long long)arg1;
- (id)init;

@end

