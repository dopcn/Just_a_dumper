//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VSBaseCellModel.h"

@class VSCartSelectedCoupon;

@interface VSCartUseCouponCellModel : VSBaseCellModel
{
    VSCartSelectedCoupon *_userCoupon;
}

@property(retain, nonatomic) VSCartSelectedCoupon *userCoupon; // @synthesize userCoupon=_userCoupon;
- (void).cxx_destruct;
- (id)descriptionString;
- (id)favoutLabelString;
- (id)cellClsName;
- (id)initWithCoupon:(id)arg1;

@end

