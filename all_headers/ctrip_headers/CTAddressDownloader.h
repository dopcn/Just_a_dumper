//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTSender.h"

@class NSCondition, NSMutableArray;

@interface CTAddressDownloader : CTSender
{
    int statEnum;
    NSCondition *statEnumCondition;
    NSCondition *addressDownloadCondition;
    NSMutableArray *resultBlockQueue;
    NSMutableArray *_cachedAddressList;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableArray *cachedAddressList; // @synthesize cachedAddressList=_cachedAddressList;
- (void).cxx_destruct;
- (void)sendGetCantonData;
- (void)refreshAddressList:(_Bool)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)sendGetAddressList;
- (void)sendMessageFinishGetAddress:(_Bool)arg1 responseEntity:(id)arg2;
- (void)cleanGetAddressData;
- (void)unRegistGetAddressData:(CDUnknownBlockType)arg1;
- (void)registGetAddressData:(CDUnknownBlockType)arg1;
- (void)updateStatEnum:(int)arg1;
- (int)getStatEnum;
- (_Bool)isNeedSendService;
- (_Bool)isNeedGetAddressList;
- (void)doSignal;
- (void)downloadAddress:(_Bool)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)downloadAddressBeforeOrderPageBySenderTask:(id)arg1 index:(int)arg2;
- (void)clean;
- (void)userLoginSuccess:(id)arg1;
- (id)init;
@property(readonly, nonatomic) NSMutableArray *addressList;

@end

