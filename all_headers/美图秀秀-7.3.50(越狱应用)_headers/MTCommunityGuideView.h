//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UIImageView, UILabel;

@interface MTCommunityGuideView : UIView
{
    UIView *_gradientBackgroundView;
    CAGradientLayer *_gradientLayer;
    UIImageView *_arrowView;
    UIImageView *_fingerView;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *fingerView; // @synthesize fingerView=_fingerView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *gradientBackgroundView; // @synthesize gradientBackgroundView=_gradientBackgroundView;
- (void).cxx_destruct;
- (void)hide;
- (void)showInView:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

