//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYPPFeaturesView, QYPPStarFeedData, UIImageView;

@interface QYPPThumbnailView : UIView
{
    _Bool _isAutoReplay;
    QYPPStarFeedData *_feed;
    UIImageView *_thumbnailImage;
    QYPPFeaturesView *_featuresView;
}

@property(retain, nonatomic) QYPPFeaturesView *featuresView; // @synthesize featuresView=_featuresView;
@property(retain, nonatomic) UIImageView *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(nonatomic) _Bool isAutoReplay; // @synthesize isAutoReplay=_isAutoReplay;
@property(retain, nonatomic) QYPPStarFeedData *feed; // @synthesize feed=_feed;
- (void).cxx_destruct;
- (void)addPlayerView;
- (void)tapAction:(id)arg1;
- (void)addBlurView;
- (void)setThumbImage:(id)arg1;
- (void)updateViewWithModel:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

