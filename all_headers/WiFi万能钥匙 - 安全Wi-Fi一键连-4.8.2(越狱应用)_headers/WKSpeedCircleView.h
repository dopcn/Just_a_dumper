//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor, UIImage, UIImageView;

@interface WKSpeedCircleView : UIView
{
    double circleRadius;
    double progressRadius;
    double _progress;
    double _startAngle;
    double _endAngle;
    double lastProgress;
    _Bool _capRound;
    UIColor *_bgColor;
    UIColor *_fillColor;
    double _bottomWidth;
    double _progressWidth;
    UIImage *_dotImage;
    double _dotDiameter;
    double _edgespace;
    double _progressSpace;
    UIImageView *_dotImageView;
    CAShapeLayer *_bottomLayer;
    CAShapeLayer *_progressLayer;
}

@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) CAShapeLayer *bottomLayer; // @synthesize bottomLayer=_bottomLayer;
@property(retain, nonatomic) UIImageView *dotImageView; // @synthesize dotImageView=_dotImageView;
@property(nonatomic) _Bool capRound; // @synthesize capRound=_capRound;
@property(nonatomic) double progressSpace; // @synthesize progressSpace=_progressSpace;
@property(nonatomic) double edgespace; // @synthesize edgespace=_edgespace;
@property(nonatomic) double dotDiameter; // @synthesize dotDiameter=_dotDiameter;
@property(retain, nonatomic) UIImage *dotImage; // @synthesize dotImage=_dotImage;
@property(nonatomic) double progressWidth; // @synthesize progressWidth=_progressWidth;
@property(nonatomic) double bottomWidth; // @synthesize bottomWidth=_bottomWidth;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
- (void).cxx_destruct;
- (void)bottomNearProgress:(_Bool)arg1;
@property(readonly, nonatomic) double freeWidth;
- (void)dotHidden:(_Bool)arg1;
- (void)circleAnimation;
- (void)setProgressAnimation:(_Bool)arg1;
- (void)setProgress:(double)arg1;
- (void)createAnimation;
- (void)drowProgress;
- (void)drowBottom;
- (void)drowLayer;
- (void)drawProgress;
- (void)dotCenter;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1 startAngle:(double)arg2 endAngle:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

