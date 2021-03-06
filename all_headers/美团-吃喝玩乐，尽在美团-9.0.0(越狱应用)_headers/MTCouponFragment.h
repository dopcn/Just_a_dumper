//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SAKOrder, UIButton;

@interface MTCouponFragment : UIView
{
    SAKOrder *_order;
    UIButton *_refundButton;
    UIButton *_cancelRefundButton;
}

@property(retain, nonatomic) UIButton *cancelRefundButton; // @synthesize cancelRefundButton=_cancelRefundButton;
@property(retain, nonatomic) UIButton *refundButton; // @synthesize refundButton=_refundButton;
@property(retain, nonatomic) SAKOrder *order; // @synthesize order=_order;
- (void).cxx_destruct;
- (void)didClickSendMMSButton;
- (void)didClickCallButton;
- (void)didTapRefundDetailCell:(id)arg1;
- (void)didClickCancelRefundButton;
- (void)didClickRefundButton;
- (id)setCodeLabelTextColorWithString:(id)arg1 andKeyString:(id)arg2;
- (void)updateConstraints;
- (id)initWithOrder:(id)arg1;
- (id)statusLabelForCoupon:(id)arg1;

@end

