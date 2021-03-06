//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "VSCartRecommendCouponViewDelegate-Protocol.h"

@class NSArray, NSString, VSCartRecommendCouponView, VSPreferentialDisplayView, VSUseCouponEntranceView;

@interface VSCartNativeBottomInfoView : UIView <VSCartRecommendCouponViewDelegate>
{
    CDUnknownBlockType _actionCallback;
    VSCartRecommendCouponView *_recommondCouponView;
    VSUseCouponEntranceView *_useCouponView;
    VSUseCouponEntranceView *_preferentialPasswordEntranceView;
    VSPreferentialDisplayView *_preferentialDisplayView;
    NSArray *_selCoupons;
    NSArray *_preferentialArray;
}

@property(retain, nonatomic) NSArray *preferentialArray; // @synthesize preferentialArray=_preferentialArray;
@property(retain, nonatomic) NSArray *selCoupons; // @synthesize selCoupons=_selCoupons;
@property(retain, nonatomic) VSPreferentialDisplayView *preferentialDisplayView; // @synthesize preferentialDisplayView=_preferentialDisplayView;
@property(retain, nonatomic) VSUseCouponEntranceView *preferentialPasswordEntranceView; // @synthesize preferentialPasswordEntranceView=_preferentialPasswordEntranceView;
@property(retain, nonatomic) VSUseCouponEntranceView *useCouponView; // @synthesize useCouponView=_useCouponView;
@property(retain, nonatomic) VSCartRecommendCouponView *recommondCouponView; // @synthesize recommondCouponView=_recommondCouponView;
@property(copy, nonatomic) CDUnknownBlockType actionCallback; // @synthesize actionCallback=_actionCallback;
- (void).cxx_destruct;
- (void)changRecommondCoupon;
- (void)useCouponAction;
- (void)usePreferentialPassword;
- (void)loginBtnAction;
- (void)usePreferentialPasswordAction;
- (id)configuraSubViewWithData:(id)arg1 preferentialArray:(id)arg2 cartNativeDataHandle:(id)arg3;
- (void)addViews:(id)arg1;
- (void)updateBottomInfoWithData:(id)arg1 preferentialArray:(id)arg2 cartNativeDataHandle:(id)arg3;
- (_Bool)withCoupon;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

