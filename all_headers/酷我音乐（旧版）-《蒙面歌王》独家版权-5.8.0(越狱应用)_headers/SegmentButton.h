//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UILabel;

@interface SegmentButton : UIButton
{
    UILabel *_subTitleLabel;
    UIColor *_subTitleColor;
    UIColor *_subTitleColorSelected;
    UIColor *_subTitleShadowColor;
    UIColor *_subTitleShadowColorSelected;
    _Bool _showSubTitleWhenHighlight;
}

+ (id)buttonWithTitle:(id)arg1 subTitle:(id)arg2 imageNormal:(id)arg3 imageHighlighted:(id)arg4 target:(id)arg5 action:(SEL)arg6;
@property(nonatomic) _Bool showSubTitleWhenHighlight; // @synthesize showSubTitleWhenHighlight=_showSubTitleWhenHighlight;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
- (void)layoutSubviews;
- (void)setSubTitleShawdowColorSelected:(id)arg1;
- (void)setSubTitleShawdowColor:(id)arg1;
- (void)setSubTitleColorSelected:(id)arg1;
- (void)setSubTitleColor:(id)arg1;
- (void)setSubTitleFont:(id)arg1;
- (void)setSubTitleText:(id)arg1;
- (void)dealloc;

@end

