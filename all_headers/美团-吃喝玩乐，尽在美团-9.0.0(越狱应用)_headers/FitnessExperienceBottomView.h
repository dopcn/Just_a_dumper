//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NVJsonLabel, UIButton;

@interface FitnessExperienceBottomView : UIView
{
    NVJsonLabel *_priceLabel;
    NVJsonLabel *_rawPriceLabel;
    UIButton *_payBtn;
}

@property(retain, nonatomic) UIButton *payBtn; // @synthesize payBtn=_payBtn;
@property(retain, nonatomic) NVJsonLabel *rawPriceLabel; // @synthesize rawPriceLabel=_rawPriceLabel;
@property(retain, nonatomic) NVJsonLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

