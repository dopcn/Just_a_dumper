//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTHotelBaseCell.h"

@class CTHotelDetailCacheBean, CTHotelPromotionGroupView, UILabel;

@interface CTHotelDetailSellerInfoCell : CTHotelBaseCell
{
    CTHotelPromotionGroupView *_ptgroup;
    CTHotelPromotionGroupView *_facilitiesGroup;
    UILabel *_despLabel;
    UILabel *_openLabel;
    UILabel *_noInfoLabel;
    CTHotelDetailCacheBean *_mCacheBean;
}

+ (double)getCellHeight:(id)arg1;
+ (id)getOpenText:(id)arg1;
@property(nonatomic) __weak CTHotelDetailCacheBean *mCacheBean; // @synthesize mCacheBean=_mCacheBean;
@property(retain, nonatomic) UILabel *noInfoLabel; // @synthesize noInfoLabel=_noInfoLabel;
@property(retain, nonatomic) UILabel *openLabel; // @synthesize openLabel=_openLabel;
@property(retain, nonatomic) UILabel *despLabel; // @synthesize despLabel=_despLabel;
@property(retain, nonatomic) CTHotelPromotionGroupView *facilitiesGroup; // @synthesize facilitiesGroup=_facilitiesGroup;
@property(retain, nonatomic) CTHotelPromotionGroupView *ptgroup; // @synthesize ptgroup=_ptgroup;
- (void).cxx_destruct;
- (id)sellerTag:(id)arg1 fontColor:(id)arg2;
- (void)setData:(id)arg1;
- (void)initView;

@end

