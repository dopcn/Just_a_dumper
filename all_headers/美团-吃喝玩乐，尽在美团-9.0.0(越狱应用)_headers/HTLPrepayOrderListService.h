//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTLPrepayOrderService.h"

#import "METMineEntryServiceProtocol-Protocol.h"
#import "METMyCouponServiceProtocol-Protocol.h"

@class HTLPrepayOrderlistModel, NSString;

@interface HTLPrepayOrderListService : HTLPrepayOrderService <METMineEntryServiceProtocol, METMyCouponServiceProtocol>
{
    long long _total;
    long long _listType;
    HTLPrepayOrderlistModel *_listModel;
}

@property(retain, nonatomic) HTLPrepayOrderlistModel *listModel; // @synthesize listModel=_listModel;
@property(nonatomic) long long listType; // @synthesize listType=_listType;
@property(nonatomic) long long total; // @synthesize total=_total;
- (void).cxx_destruct;
- (void)respondToSAKTransactionNotification:(id)arg1;
- (void)loadCachedOrderListWithListType:(long long)arg1 onFinished:(CDUnknownBlockType)arg2;
- (void)requestOrderListWithListType:(long long)arg1 onFinished:(CDUnknownBlockType)arg2;
- (void)loadMoreWithListType:(long long)arg1 onFinished:(CDUnknownBlockType)arg2;
- (void)loadCouponsByOrderID:(long long)arg1 channel:(unsigned long long)arg2 finished:(CDUnknownBlockType)arg3;
- (void)loadOrderByID:(long long)arg1 finished:(CDUnknownBlockType)arg2;
- (void)saveOrUpdateOrder:(id)arg1;
- (void)fetchCoupons:(CDUnknownBlockType)arg1;
- (void)requestOrderList:(CDUnknownBlockType)arg1;
- (void)loadCachedOrderList:(CDUnknownBlockType)arg1;
- (void)resetDataList;
- (_Bool)hasMore;
- (void)refreshData:(CDUnknownBlockType)arg1;
- (void)loadMore:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

