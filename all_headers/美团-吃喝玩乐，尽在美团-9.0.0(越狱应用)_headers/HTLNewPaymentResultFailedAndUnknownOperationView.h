//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HTLCouponOrder, UIButton, UILabel;

@interface HTLNewPaymentResultFailedAndUnknownOperationView : UIView
{
    CDUnknownBlockType _refreshOrReSubmitOrder;
    HTLCouponOrder *_order;
    UILabel *_roomNameInfoLabel;
    UIButton *_refreshOrShowBalanceButton;
}

@property(retain, nonatomic) UIButton *refreshOrShowBalanceButton; // @synthesize refreshOrShowBalanceButton=_refreshOrShowBalanceButton;
@property(retain, nonatomic) UILabel *roomNameInfoLabel; // @synthesize roomNameInfoLabel=_roomNameInfoLabel;
@property(retain, nonatomic) HTLCouponOrder *order; // @synthesize order=_order;
@property(copy, nonatomic) CDUnknownBlockType refreshOrReSubmitOrder; // @synthesize refreshOrReSubmitOrder=_refreshOrReSubmitOrder;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithOrder:(id)arg1;

@end

