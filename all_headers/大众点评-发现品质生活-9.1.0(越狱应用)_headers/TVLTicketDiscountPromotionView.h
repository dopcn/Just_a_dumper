//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TVLTicketPurchasePromotion, TVLTicketSubmitOrderViewModel, UIButton, UILabel;

@interface TVLTicketDiscountPromotionView : UIView
{
    UILabel *_iconLabel;
    UILabel *_contentLabel;
    UILabel *_hintLabel;
    UIButton *_actionButton;
    TVLTicketSubmitOrderViewModel *_viewModel;
    TVLTicketPurchasePromotion *_promotion;
}

@property(retain, nonatomic) TVLTicketPurchasePromotion *promotion; // @synthesize promotion=_promotion;
@property(retain, nonatomic) TVLTicketSubmitOrderViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithPurchasePromotion:(id)arg1 andViewModel:(id)arg2;

@end

