//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, PPao_EnterCircleButton, UILabel;

@interface PPao_EnterCircleControl : UIControl
{
    PPao_EnterCircleButton *_button;
    NSString *_titleText;
    UILabel *_titleLabel;
}

+ (double)QYPPECRBButtonHeight;
+ (double)QYPPECRBTextFontsize;
+ (double)QYPPECRBTextHeight;
+ (double)QYPPECRBWidth;
+ (double)QYPPECRBTotalHeight;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) PPao_EnterCircleButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)buttonAction;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

