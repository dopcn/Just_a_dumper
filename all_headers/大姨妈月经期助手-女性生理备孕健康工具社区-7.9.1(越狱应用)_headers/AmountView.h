//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface AmountView : UIView
{
    UIButton *_checkButton;
    UILabel *_goodsCountLabel;
    UILabel *_amountFeeLabel;
    UILabel *_subDetailLabel;
    UILabel *_amountLabel;
}

@property(nonatomic) __weak UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(nonatomic) __weak UILabel *subDetailLabel; // @synthesize subDetailLabel=_subDetailLabel;
@property(nonatomic) __weak UILabel *amountFeeLabel; // @synthesize amountFeeLabel=_amountFeeLabel;
@property(nonatomic) __weak UILabel *goodsCountLabel; // @synthesize goodsCountLabel=_goodsCountLabel;
@property(nonatomic) __weak UIButton *checkButton; // @synthesize checkButton=_checkButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

