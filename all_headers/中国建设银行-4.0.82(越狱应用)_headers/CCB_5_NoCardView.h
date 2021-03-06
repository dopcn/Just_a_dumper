//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBView.h"

@class CCBImageView, CCBLabel, CCBRoundButton, NSString, UIImage;

@interface CCB_5_NoCardView : CCBView
{
    unsigned long long _state;
    NSString *_tip;
    UIImage *_image;
    CCBImageView *_leadImg;
    CCBLabel *_leadLabel;
    CCBRoundButton *_applyBtn;
}

+ (double)getHeight;
@property(retain, nonatomic) CCBRoundButton *applyBtn; // @synthesize applyBtn=_applyBtn;
@property(retain, nonatomic) CCBLabel *leadLabel; // @synthesize leadLabel=_leadLabel;
@property(retain, nonatomic) CCBImageView *leadImg; // @synthesize leadImg=_leadImg;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)goToApply;
- (id)init;
- (id)initWithTip:(id)arg1;
- (id)initWithTip:(id)arg1 andImage:(id)arg2;

@end

