//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SPKPaymentMethodLabelUIObject, UILabel;

@interface SPKBasePaymentMethodLabelView : UIView
{
    SPKPaymentMethodLabelUIObject *_paymentMethodlabelUIObject;
    UILabel *_label;
}

+ (double)labelWidthWithHead:(id)arg1 content:(id)arg2;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) SPKPaymentMethodLabelUIObject *paymentMethodlabelUIObject; // @synthesize paymentMethodlabelUIObject=_paymentMethodlabelUIObject;
- (void).cxx_destruct;
- (double)widthForShow;
- (id)initWithUIObject:(id)arg1;

@end

