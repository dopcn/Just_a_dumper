//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint;
@protocol KSStarRateViewDelegate;

@interface KSStarRateView : UIView
{
    _Bool _hasAnimation;
    _Bool _allowIncompleteStar;
    double _scorePercent;
    id <KSStarRateViewDelegate> _delegate;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    UIView *_foregroundStarView;
    UIView *_backgroundStarView;
    long long _numberOfStars;
}

@property(nonatomic) long long numberOfStars; // @synthesize numberOfStars=_numberOfStars;
@property(retain, nonatomic) UIView *backgroundStarView; // @synthesize backgroundStarView=_backgroundStarView;
@property(retain, nonatomic) UIView *foregroundStarView; // @synthesize foregroundStarView=_foregroundStarView;
@property(nonatomic) __weak NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(nonatomic) __weak id <KSStarRateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowIncompleteStar; // @synthesize allowIncompleteStar=_allowIncompleteStar;
@property(nonatomic) _Bool hasAnimation; // @synthesize hasAnimation=_hasAnimation;
@property(nonatomic) double scorePercent; // @synthesize scorePercent=_scorePercent;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)createStarViewWithImage:(id)arg1;
- (void)gesturePoint:(struct CGPoint)arg1;
- (void)panGesture:(id)arg1;
- (void)userTapRateView:(id)arg1;
- (void)buildDataAndUI;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1 numberOfStars:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

