//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UIImageView, UILabel;

@interface FALiveMVComposeProgressView : UIView
{
    double _progress;
    CDUnknownBlockType _progressNodeHandler;
    CDUnknownBlockType _progressEndHandler;
    long long _progressType;
    UIImageView *_circleView;
    UILabel *_progressLab;
    NSTimer *_progressTimer;
}

@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic) UILabel *progressLab; // @synthesize progressLab=_progressLab;
@property(retain, nonatomic) UIImageView *circleView; // @synthesize circleView=_circleView;
@property(nonatomic) long long progressType; // @synthesize progressType=_progressType;
@property(copy, nonatomic) CDUnknownBlockType progressEndHandler; // @synthesize progressEndHandler=_progressEndHandler;
@property(copy, nonatomic) CDUnknownBlockType progressNodeHandler; // @synthesize progressNodeHandler=_progressNodeHandler;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)startAnimation;
- (void)endAnimation;
- (void)updateProgress:(double)arg1;
- (void)endProgress:(_Bool)arg1;
- (void)stopProgress;
- (void)startProgress;
- (void)configSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

