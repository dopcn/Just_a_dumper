//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VSRequestDelegate-Protocol.h"

@class NSArray, NSDictionary, NSError, NSMutableArray, NSMutableSet, NSString, VSProductSkuStockRequest, VSReservationDetailRequest;

@interface VSGoodsHistoryViewModel : NSObject <VSRequestDelegate>
{
    _Bool _fetching;
    _Bool _isFirstPage;
    _Bool _isLastPage;
    _Bool _hasResult;
    _Bool _haveLookLike;
    _Bool _isOnsale;
    _Bool _showOnsaleFilter;
    _Bool _isViewWillAppear;
    NSMutableArray *_cellViewModels;
    unsigned long long _loadDataStatus;
    unsigned long long _deleteDataStatus;
    NSError *_error;
    CDUnknownBlockType _reloadDataAction;
    double _lastBrowseTime;
    long long _pageSize;
    long long _showStockThreshold;
    NSString *_message;
    NSArray *_productSkus;
    NSArray *_goodsShowEntities;
    NSArray *_merchandises;
    NSMutableSet *_preheatProductIds;
    VSReservationDetailRequest *_prepayDetailRequest;
    NSDictionary *_reservationInfo;
    NSDictionary *_iconURLDic;
    CDUnknownBlockType _skuCallBack;
    VSProductSkuStockRequest *_skuStockRequest;
}

@property(retain, nonatomic) VSProductSkuStockRequest *skuStockRequest; // @synthesize skuStockRequest=_skuStockRequest;
@property(copy, nonatomic) CDUnknownBlockType skuCallBack; // @synthesize skuCallBack=_skuCallBack;
@property(retain, nonatomic) NSDictionary *iconURLDic; // @synthesize iconURLDic=_iconURLDic;
@property(retain, nonatomic) NSDictionary *reservationInfo; // @synthesize reservationInfo=_reservationInfo;
@property(retain, nonatomic) VSReservationDetailRequest *prepayDetailRequest; // @synthesize prepayDetailRequest=_prepayDetailRequest;
@property(retain, nonatomic) NSMutableSet *preheatProductIds; // @synthesize preheatProductIds=_preheatProductIds;
@property(retain, nonatomic) NSArray *merchandises; // @synthesize merchandises=_merchandises;
@property(retain, nonatomic) NSArray *goodsShowEntities; // @synthesize goodsShowEntities=_goodsShowEntities;
@property(retain, nonatomic) NSArray *productSkus; // @synthesize productSkus=_productSkus;
@property(nonatomic) _Bool isViewWillAppear; // @synthesize isViewWillAppear=_isViewWillAppear;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long showStockThreshold; // @synthesize showStockThreshold=_showStockThreshold;
@property(readonly, nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) _Bool showOnsaleFilter; // @synthesize showOnsaleFilter=_showOnsaleFilter;
@property(nonatomic) _Bool isOnsale; // @synthesize isOnsale=_isOnsale;
@property(nonatomic) _Bool haveLookLike; // @synthesize haveLookLike=_haveLookLike;
@property(nonatomic) _Bool hasResult; // @synthesize hasResult=_hasResult;
@property(nonatomic) _Bool isLastPage; // @synthesize isLastPage=_isLastPage;
@property(nonatomic) _Bool isFirstPage; // @synthesize isFirstPage=_isFirstPage;
@property(nonatomic) double lastBrowseTime; // @synthesize lastBrowseTime=_lastBrowseTime;
@property(copy, nonatomic) CDUnknownBlockType reloadDataAction; // @synthesize reloadDataAction=_reloadDataAction;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long deleteDataStatus; // @synthesize deleteDataStatus=_deleteDataStatus;
@property(nonatomic) unsigned long long loadDataStatus; // @synthesize loadDataStatus=_loadDataStatus;
@property(retain, nonatomic) NSMutableArray *cellViewModels; // @synthesize cellViewModels=_cellViewModels;
@property(getter=isFetching) _Bool fetching; // @synthesize fetching=_fetching;
- (void).cxx_destruct;
- (void)skuCallBack:(_Bool)arg1;
- (void)requestError:(id)arg1 error:(id)arg2;
- (void)requestCompleted:(id)arg1 response:(id)arg2;
@property(readonly, nonatomic) _Bool couldAddOperationalView;
- (void)updateMultiBrandCouponStatusWithCoupons:(id)arg1 numberOfItems:(long long)arg2;
- (void)fetchCollectState;
- (void)requestSkuInfoWithIndex:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)changeHistoryListCollectedState:(_Bool)arg1 merchandiseId:(id)arg2;
- (void)fetchMultiBrandCouponStatusBrandIds:(id)arg1;
- (id)brandIDSWtihProducts:(id)arg1;
- (void)updatePrepayDetailsWtihData:(id)arg1 numberOfItems:(long long)arg2;
- (void)fetchPrepayDetailWtihProducts:(id)arg1;
- (id)prepayGoodsIdsWtihProducts:(id)arg1;
- (void)initCellViewModels:(id)arg1;
- (void)removeRemotedataWithCellModel:(id)arg1;
- (void)removeAllRemotedata;
- (id)currentAllMids;
- (void)clearCurrentAllData:(id)arg1;
- (void)removeHistoryMerchandises:(id)arg1;
- (void)loadRemoteData;
- (void)fetchHistoryMerchandises;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

