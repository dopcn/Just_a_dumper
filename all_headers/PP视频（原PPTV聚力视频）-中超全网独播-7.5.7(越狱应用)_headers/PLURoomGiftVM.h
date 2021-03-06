//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSURLSessionDataTask, PLUGiftInfoModel, PLUIPAddressModel, PLUValidGiftInfoRootModel, PLUValidGiftTabModel;

@interface PLURoomGiftVM : NSObject
{
    PLUValidGiftInfoRootModel *_validGiftRootModel;
    PLUGiftInfoModel *_activeGift;
    unsigned long long _giftsStatus;
    NSString *_roomId;
    unsigned long long _inventoryGiftsState;
    long long _roomType;
    NSURLSessionDataTask *_validGiftTask;
    NSArray *_allValidGifts;
    PLUIPAddressModel *_ip;
    NSArray *_cryout;
    NSArray *_insertTempArr;
    PLUValidGiftTabModel *_stockTab;
    NSMutableArray *_stockGifts;
    NSArray *_ploymerGifts;
    long long _retrayCount;
}

@property(nonatomic) long long retrayCount; // @synthesize retrayCount=_retrayCount;
@property(copy, nonatomic) NSArray *ploymerGifts; // @synthesize ploymerGifts=_ploymerGifts;
@property(retain, nonatomic) NSMutableArray *stockGifts; // @synthesize stockGifts=_stockGifts;
@property(retain, nonatomic) PLUValidGiftTabModel *stockTab; // @synthesize stockTab=_stockTab;
@property(copy, nonatomic) NSArray *insertTempArr; // @synthesize insertTempArr=_insertTempArr;
@property(copy, nonatomic) NSArray *cryout; // @synthesize cryout=_cryout;
@property(retain, nonatomic) PLUIPAddressModel *ip; // @synthesize ip=_ip;
@property(copy, nonatomic) NSArray *allValidGifts; // @synthesize allValidGifts=_allValidGifts;
@property(nonatomic) __weak NSURLSessionDataTask *validGiftTask; // @synthesize validGiftTask=_validGiftTask;
@property(nonatomic) long long roomType; // @synthesize roomType=_roomType;
@property(nonatomic) unsigned long long inventoryGiftsState; // @synthesize inventoryGiftsState=_inventoryGiftsState;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(nonatomic) unsigned long long giftsStatus; // @synthesize giftsStatus=_giftsStatus;
@property(retain, nonatomic) PLUGiftInfoModel *activeGift; // @synthesize activeGift=_activeGift;
- (void).cxx_destruct;
- (void)refrestInventoryGifts;
- (void)getMyInventoryFailure:(id)arg1 retry:(long long)arg2;
- (void)getMyInventory:(long long)arg1;
- (void)updatePloymerGiftInfo;
- (void)insertGifts:(id)arg1;
- (void)action:(id)arg1 item:(id)arg2 count:(id)arg3 idx:(id)arg4 roomType:(long long)arg5 listIcon:(_Bool)arg6;
- (void)clickGiftIcon;
- (void)sendItem:(id)arg1 count:(id)arg2 idx:(id)arg3 targetUserId:(id)arg4;
- (void)sendItem:(id)arg1 count:(id)arg2 targetUserId:(id)arg3;
- (void)sendItem:(id)arg1 count:(id)arg2 idx:(id)arg3;
- (void)clickItem:(id)arg1 idx:(id)arg2;
- (void)sendItem:(id)arg1 count:(id)arg2;
- (void)clickItem:(id)arg1;
- (long long)filtrateSpecialCharacter:(id)arg1;
- (void)refresh;
- (void)clear;
@property(copy, nonatomic) PLUValidGiftInfoRootModel *validGiftRootModel; // @synthesize validGiftRootModel=_validGiftRootModel;
- (void)completeValidGiftsInfo:(id)arg1;
- (void)checkOutCurrentGifts;
- (long long)retrySpaceCount:(long long)arg1;
- (void)getVlidGiftFailure:(id)arg1 retry:(long long)arg2;
- (void)getValidGiftSuccess:(id)arg1;
- (void)getValidGift:(id)arg1;
- (void)refreshItemStock:(id)arg1 success:(id)arg2;
- (void)refreshItemStock:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)getStockTab;
- (void)cryoutStock;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeKVO;
- (void)addKVO;
- (void)leaveRoom;
- (void)getValidGiftRetryCount:(long long)arg1;
- (void)enterNewRoom:(id)arg1;
- (void)removeStockTab;
- (void)addStockTab;
- (void)dealloc;
- (id)init;

@end

