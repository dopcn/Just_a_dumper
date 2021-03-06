//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExploreArticleCellView.h"

@class CAShapeLayer, TTImageView, UIView;

@interface ExploreArticleHotNewsCellView : ExploreArticleCellView
{
    CAShapeLayer *_circleLayer;
    CAShapeLayer *_greyLayer;
    TTImageView *_sourceIconImageView;
    UIView *_circleView;
    UIView *_greyView;
}

+ (double)heightForData:(id)arg1 cellWidth:(double)arg2 listType:(unsigned long long)arg3;
@property(retain, nonatomic) UIView *greyView; // @synthesize greyView=_greyView;
@property(retain, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) TTImageView *sourceIconImageView; // @synthesize sourceIconImageView=_sourceIconImageView;
- (void).cxx_destruct;
- (void)themeChanged:(id)arg1;
- (void)updateGreyView;
- (void)updateCircleView;
- (double)labelHeightForOneRowWithContainerWidth:(double)arg1;
- (void)refreshUI;
- (void)refreshWithData:(id)arg1;
- (id)avatarSourceWithArticle:(id)arg1;
- (id)greyLayer;
- (id)circleLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

