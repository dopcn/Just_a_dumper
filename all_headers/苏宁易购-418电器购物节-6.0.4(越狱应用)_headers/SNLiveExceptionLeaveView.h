//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNLiveExceptionView.h"

@class CABasicAnimation, UIImageView;

@interface SNLiveExceptionLeaveView : SNLiveExceptionView
{
    UIImageView *_eyeImgView;
    UIImageView *_ballImgView;
    CABasicAnimation *_eyeAnimation;
    CABasicAnimation *_ballMoveAnimation;
    CABasicAnimation *_ballRotationAnimation;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) CABasicAnimation *ballRotationAnimation; // @synthesize ballRotationAnimation=_ballRotationAnimation;
@property(retain, nonatomic) CABasicAnimation *ballMoveAnimation; // @synthesize ballMoveAnimation=_ballMoveAnimation;
@property(retain, nonatomic) CABasicAnimation *eyeAnimation; // @synthesize eyeAnimation=_eyeAnimation;
@property(retain, nonatomic) UIImageView *ballImgView; // @synthesize ballImgView=_ballImgView;
@property(retain, nonatomic) UIImageView *eyeImgView; // @synthesize eyeImgView=_eyeImgView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)show;
- (id)initWithFrame:(struct CGRect)arg1;

@end

