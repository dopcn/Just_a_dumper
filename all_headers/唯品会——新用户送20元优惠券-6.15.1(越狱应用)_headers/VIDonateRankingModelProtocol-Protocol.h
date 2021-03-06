//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, VIRunDonateRankUserHistoryInfo, VIRunDonateRankUserInfo;

@protocol VIDonateRankingModelProtocol <NSObject>
@property(readonly, nonatomic) _Bool noMore;
@property(readonly, nonatomic) NSArray *data;
@property(readonly, nonatomic) VIRunDonateRankUserHistoryInfo *history;
@property(readonly, nonatomic) VIRunDonateRankUserInfo *user;
- (void)loadNextWithCompletion:(void (^)(VIRunGetDonateRankRespData *, NSError *))arg1;
- (void)reloadDataWithCompletion:(void (^)(VIRunGetDonateRankRespData *, NSError *))arg1;
@end

