//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseListModule.h"

#import "NVBaseListModuleDelegate-Protocol.h"

@class NSArray, NSString, NVModelBaseGCDiscountPromoDeskState, NVModelBaseGCDiscountPromoTool, RACCommand;

@interface GCDiscountPickAvailableCouponModule : NVBaseListModule <NVBaseListModuleDelegate>
{
    _Bool _isHongbaoSelected;
    _Bool _isPromotionCodeSelected;
    _Bool _hasAvailableCells;
    NVModelBaseGCDiscountPromoTool *_initialSelectedCoupon;
    long long _shopId;
    long long _couponSelectedIndex;
    NSString *_promoProduct;
    NVModelBaseGCDiscountPromoDeskState *_deskState;
    unsigned long long _pickType;
    RACCommand *_selectCmd;
}

@property(nonatomic) _Bool hasAvailableCells; // @synthesize hasAvailableCells=_hasAvailableCells;
@property(nonatomic) _Bool isPromotionCodeSelected; // @synthesize isPromotionCodeSelected=_isPromotionCodeSelected;
@property(nonatomic) _Bool isHongbaoSelected; // @synthesize isHongbaoSelected=_isHongbaoSelected;
@property(retain, nonatomic) RACCommand *selectCmd; // @synthesize selectCmd=_selectCmd;
@property(nonatomic) unsigned long long pickType; // @synthesize pickType=_pickType;
@property(retain, nonatomic) NVModelBaseGCDiscountPromoDeskState *deskState; // @synthesize deskState=_deskState;
@property(copy, nonatomic) NSString *promoProduct; // @synthesize promoProduct=_promoProduct;
@property(nonatomic) long long couponSelectedIndex; // @synthesize couponSelectedIndex=_couponSelectedIndex;
@property(nonatomic) long long shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NVModelBaseGCDiscountPromoTool *initialSelectedCoupon; // @synthesize initialSelectedCoupon=_initialSelectedCoupon;
- (void).cxx_destruct;
- (id)selectEvent;
- (id)unselectEvent;
- (void)didSelectedSectionItem:(id)arg1 cellItem:(id)arg2 withIndexPath:(id)arg3;
- (void)getCell:(id)arg1 sectionItem:(id)arg2 cellItem:(id)arg3 withIndexPath:(id)arg4;
- (void)baseListModule:(id)arg1 refreshDataSuccess:(id)arg2;
- (void)baseListModule:(id)arg1 refreshDataFail:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
@property(readonly, nonatomic) NSArray *couponList;
- (void)setupModule;
- (_Bool)shouldShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

