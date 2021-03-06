//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class HLPCacheFIFO, NSMutableDictionary, NSString;

@interface HLPCacheManager : NSObject
{
    _Bool _pIsOpen;
    _Bool _pIsContinueLoad;
    _Bool _pOnlyForVIP;
    NSString *_preloadinfo;
    HLPCacheFIFO *_cacheClient;
    long long _pQueueMaxCount;
    NSMutableDictionary *_preRequestCacheCollect;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *preRequestCacheCollect; // @synthesize preRequestCacheCollect=_preRequestCacheCollect;
@property(nonatomic) _Bool pOnlyForVIP; // @synthesize pOnlyForVIP=_pOnlyForVIP;
@property(nonatomic) _Bool pIsContinueLoad; // @synthesize pIsContinueLoad=_pIsContinueLoad;
@property(nonatomic) _Bool pIsOpen; // @synthesize pIsOpen=_pIsOpen;
@property(nonatomic) long long pQueueMaxCount; // @synthesize pQueueMaxCount=_pQueueMaxCount;
@property(retain, nonatomic) HLPCacheFIFO *cacheClient; // @synthesize cacheClient=_cacheClient;
@property(copy, nonatomic) NSString *preloadinfo; // @synthesize preloadinfo=_preloadinfo;
- (void).cxx_destruct;
- (id)searchRequestInfoWithMatchInfo:(id)arg1;
- (void)removeRequestInfoWithMatchInfo:(id)arg1;
- (void)addRequestInfoWithMatchInfo:(id)arg1;
- (void)clearAll;
- (void)clear;
- (void)removeExistCacheWithMatchInfo:(id)arg1;
- (void)removeExistShowidCache:(id)arg1;
- (void)removeCacheInfoWithResponse:(id)arg1;
- (_Bool)addCacheInfoWithResponse:(id)arg1;
- (id)cacheInfoWithMatch:(id)arg1;
@property(readonly, nonatomic) _Bool onlyForVIP;
@property(readonly, nonatomic) long long queueMaxCount;
@property(readonly, nonatomic) _Bool isOpen;
@property(readonly, nonatomic) _Bool isContinueLoad;
@property(readonly, nonatomic) long long cacheCount;
- (void)setupOrange;
- (void)userLoginStateDidChanged:(id)arg1;
- (id)init;
- (void)networkChanged:(id)arg1;

@end

