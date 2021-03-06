//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSNumber, NSString, NVModelBaseHbtActivity, NVModelBasePostSkuOrderResult, NVPostTaskM, ODCartContext, ODExtraFeeManager, ODTogetherSynchronizer, RACDisposable;

@interface ODTogetherDataManager : NSObject
{
    _Bool _isStop;
    _Bool _failedTooMany;
    _Bool _isRequesting;
    NSNumber *_shopID;
    NSMutableArray *_selfCartInfosArr;
    NSMutableArray *_othersCartInfosArr;
    NSMutableArray *_selfCartActivityInfosArr;
    NVModelBaseHbtActivity *_originalRecommendInfo;
    unsigned long long _selectNum;
    unsigned long long _selectDishesNum;
    double _totalPrice;
    NSArray *_spuMenuListArr;
    NSString *_totalExtraFeeFromOwner;
    NSString *_extraFeeNameFromOwner;
    ODTogetherSynchronizer *_togetherSynchronizer;
    ODExtraFeeManager *_extraFeeManager;
    ODCartContext *_cartContext;
    NVPostTaskM *_postTask;
    RACDisposable *_submitOrderRequest;
    RACDisposable *_quitRoomRequest;
    NVModelBasePostSkuOrderResult *_submitOrderResult;
    NSMutableArray *_deltaBeforeRequestArr;
    NSMutableArray *_deltaAfterRequestArr;
    long long _failedTimes;
}

@property(nonatomic) long long failedTimes; // @synthesize failedTimes=_failedTimes;
@property(retain, nonatomic) NSMutableArray *deltaAfterRequestArr; // @synthesize deltaAfterRequestArr=_deltaAfterRequestArr;
@property(retain, nonatomic) NSMutableArray *deltaBeforeRequestArr; // @synthesize deltaBeforeRequestArr=_deltaBeforeRequestArr;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(retain, nonatomic) NVModelBasePostSkuOrderResult *submitOrderResult; // @synthesize submitOrderResult=_submitOrderResult;
@property(retain, nonatomic) RACDisposable *quitRoomRequest; // @synthesize quitRoomRequest=_quitRoomRequest;
@property(retain, nonatomic) RACDisposable *submitOrderRequest; // @synthesize submitOrderRequest=_submitOrderRequest;
@property(retain, nonatomic) NVPostTaskM *postTask; // @synthesize postTask=_postTask;
@property(retain, nonatomic) ODCartContext *cartContext; // @synthesize cartContext=_cartContext;
@property(nonatomic) _Bool failedTooMany; // @synthesize failedTooMany=_failedTooMany;
@property(retain, nonatomic) ODExtraFeeManager *extraFeeManager; // @synthesize extraFeeManager=_extraFeeManager;
@property(retain, nonatomic) ODTogetherSynchronizer *togetherSynchronizer; // @synthesize togetherSynchronizer=_togetherSynchronizer;
@property(copy, nonatomic) NSString *extraFeeNameFromOwner; // @synthesize extraFeeNameFromOwner=_extraFeeNameFromOwner;
@property(copy, nonatomic) NSString *totalExtraFeeFromOwner; // @synthesize totalExtraFeeFromOwner=_totalExtraFeeFromOwner;
@property(copy, nonatomic) NSArray *spuMenuListArr; // @synthesize spuMenuListArr=_spuMenuListArr;
@property(nonatomic) _Bool isStop; // @synthesize isStop=_isStop;
@property(nonatomic) double totalPrice; // @synthesize totalPrice=_totalPrice;
@property(nonatomic) unsigned long long selectDishesNum; // @synthesize selectDishesNum=_selectDishesNum;
@property(nonatomic) unsigned long long selectNum; // @synthesize selectNum=_selectNum;
@property(retain, nonatomic) NVModelBaseHbtActivity *originalRecommendInfo; // @synthesize originalRecommendInfo=_originalRecommendInfo;
@property(retain, nonatomic) NSMutableArray *selfCartActivityInfosArr; // @synthesize selfCartActivityInfosArr=_selfCartActivityInfosArr;
@property(retain, nonatomic) NSMutableArray *othersCartInfosArr; // @synthesize othersCartInfosArr=_othersCartInfosArr;
@property(retain, nonatomic) NSMutableArray *selfCartInfosArr; // @synthesize selfCartInfosArr=_selfCartInfosArr;
@property(retain, nonatomic) NSNumber *shopID; // @synthesize shopID=_shopID;
- (void).cxx_destruct;
- (_Bool)needToShowCart;
- (void)p_reportPostOrderReturnedUnknownCodeWithParams:(id)arg1 result:(id)arg2;
- (void)p_reportIfUploadSkuInfoReturnedUnknownCodeWithGroupCartInfos:(id)arg1;
- (_Bool)p_removeInvalidActivityDishOrders;
- (void)refreshTogetherDishCartDishData;
- (_Bool)dishHasChanged:(id)arg1;
- (id)specAttrWithSkuMenuItem:(id)arg1;
- (void)deleteNotInSaleTimeDish:(unsigned long long)arg1;
- (_Bool)isSetMealArray:(id)arg1 containsID:(unsigned long long)arg2;
- (_Bool)isNormalSetMealContainsDishId:(unsigned long long)arg1;
- (void)dishNumChanged;
- (long long)spuSelectedSkuCountWithSpuMenuItem:(id)arg1;
- (unsigned long long)getSelectedNum:(unsigned long long)arg1;
- (long long)skuCountWithSkuId:(long long)arg1;
- (id)totalDish;
- (_Bool)isOthersSelectDish:(unsigned long long)arg1;
- (_Bool)isCurrentSelectedQuantityOfSkusAlreadyBeneathLowerLimitInSpu:(id)arg1;
- (_Bool)isCurrentSelectedQuantityOfSkusAlreadyExceedsUpperLimitInSpu:(id)arg1;
- (void)addOrRemoveSkuItemsToSatisfyQuantityLimiationInCart;
- (id)skuItemsThatDoesNotSatisfyQuantityLimitatinInCart;
- (_Bool)isSpuMenuItemNeedDisplayPurchasedCountWithSpuMenuItem:(id)arg1;
- (id)searchSpuItemInSpuArray:(id)arg1 withSpuId:(long long)arg2;
- (id)skuSelectedCountDicWithSpuMenuItem:(id)arg1;
- (id)spuSelectedSkuWithSpuMenuItem:(id)arg1;
- (id)spuMenuItemWithSpuId:(long long)arg1;
- (void)addCartDishToSelf:(id)arg1;
- (void)removeSkus:(id)arg1 withCount:(id)arg2;
- (void)p_removeOptionalDish:(id)arg1 withCount:(long long)arg2;
- (void)p_removeFixedDish:(id)arg1 withCount:(long long)arg2;
- (void)removeDish:(id)arg1 withCount:(long long)arg2;
- (void)removeDishFromSelf:(unsigned long long)arg1 wihtCount:(long long)arg2;
- (void)addMenuItemToSelfCartInfosArr:(id)arg1 withCount:(unsigned long long)arg2;
- (unsigned long long)p_addOptionalDishToSelf:(id)arg1 withNumber:(long long)arg2;
- (unsigned long long)p_addFixedDishToSelf:(id)arg1 withNumber:(long long)arg2;
- (unsigned long long)addDishToSelf:(id)arg1 withNumber:(long long)arg2;
- (_Bool)isOnlySpecialRecommendDishInCart;
- (id)cartInfoForCartActivity;
- (id)activityDishInfoWithSkuId:(long long)arg1 actId:(id)arg2;
- (void)decreaseActivityDish:(id)arg1 withActId:(id)arg2;
- (void)increaseActivityDish:(id)arg1 withActId:(id)arg2;
- (id)genusInfoString;
- (void)reset;
- (void)resetWithoutNumberChange;
- (void)recordSubtractDelta:(id)arg1 withCount:(long long)arg2;
- (void)recordClearAllDish;
- (void)recordAddDeltaWithCartDish:(id)arg1;
- (void)recordAddDelta:(id)arg1 withNumber:(long long)arg2;
- (id)search:(unsigned long long)arg1 inDeltaArray:(id)arg2;
- (_Bool)is2GNetWork;
- (id)getPackageDishInfosWithSkuMenuItem:(id)arg1;
- (id)dishInfoJSONDictionaryWithSkuMenuItem:(id)arg1;
- (id)getDishJson;
- (id)activityDishOrderInfo;
- (id)searchSkuItemInSpuArray:(id)arg1 withSkuId:(long long)arg2;
- (id)searchSkuItemInSpuMenuSet:(id)arg1 withSkuId:(long long)arg2;
- (id)skuMenuItemWithSkuId:(long long)arg1;
- (double)totalPriceWithoutPromo;
- (void)substractDeltaForOwner:(id)arg1;
- (id)search:(unsigned long long)arg1 inCartInfo:(id)arg2;
- (_Bool)applyDeltaAfterRequest;
- (_Bool)dishArray:(id)arg1 isEqualToDishArray:(id)arg2;
- (id)getBeforeRequestDelta;
- (void)mergeDelta;
- (void)quitTogetherOrderRoomRequestNeedBroadCast:(_Bool)arg1;
- (void)submitOrderWithOrderStatus:(long long)arg1;
- (void)submitOrder;
- (void)uploadCartInfo;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (void)addNotification;
- (id)init;

@end

