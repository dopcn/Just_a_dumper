//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface TBCTopTipView : UIView
{
    NSString *_title;
    UIImageView *_bgImageView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)dealloc;
- (void)hideView;
- (void)showForTime:(double)arg1;
- (void)setUpTitleLabel;
- (void)setUpBgImageView;
- (void)setUpSubViews;
- (id)initWithFrame:(struct CGRect)arg1 andTitle:(id)arg2;

@end

