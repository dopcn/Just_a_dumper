//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YWBaseBubbleChatView.h"

@class ShopCouponsBubbleViewModel, UIButton, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface ShopCouponsCacheBubbleChatView : YWBaseBubbleChatView
{
    UIView *_containShopCouponsView;
    UILabel *_lbTipInfo;
    UIButton *_btnUseShopCoupons;
}

@property(retain, nonatomic) UIButton *btnUseShopCoupons; // @synthesize btnUseShopCoupons=_btnUseShopCoupons;
@property(retain, nonatomic) UILabel *lbTipInfo; // @synthesize lbTipInfo=_lbTipInfo;
@property(retain, nonatomic) UIView *containShopCouponsView; // @synthesize containShopCouponsView=_containShopCouponsView;
- (void).cxx_destruct;
- (void)updateBubbleView;
- (struct CGSize)getBubbleContentSize;
- (void)pressUseShopCoupons:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) ShopCouponsBubbleViewModel *viewModel; // @dynamic viewModel;

@end

