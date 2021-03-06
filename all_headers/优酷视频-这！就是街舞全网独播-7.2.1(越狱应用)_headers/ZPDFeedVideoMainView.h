//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, ZPDExpandLabel;

@interface ZPDFeedVideoMainView : UIView
{
    UIImageView *_topGradientImageView;
    UIImageView *_bottomGradientImageView;
    UIImageView *_videoImageView;
    UIImageView *_playIconImageView;
    UILabel *_videoTitleLabel;
    UILabel *_videoDurationLabel;
    ZPDExpandLabel *_titleLabel;
}

@property(retain, nonatomic) ZPDExpandLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *videoDurationLabel; // @synthesize videoDurationLabel=_videoDurationLabel;
@property(retain, nonatomic) UILabel *videoTitleLabel; // @synthesize videoTitleLabel=_videoTitleLabel;
@property(retain, nonatomic) UIImageView *playIconImageView; // @synthesize playIconImageView=_playIconImageView;
@property(retain, nonatomic) UIImageView *videoImageView; // @synthesize videoImageView=_videoImageView;
@property(retain, nonatomic) UIImageView *bottomGradientImageView; // @synthesize bottomGradientImageView=_bottomGradientImageView;
@property(retain, nonatomic) UIImageView *topGradientImageView; // @synthesize topGradientImageView=_topGradientImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)p_addSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

