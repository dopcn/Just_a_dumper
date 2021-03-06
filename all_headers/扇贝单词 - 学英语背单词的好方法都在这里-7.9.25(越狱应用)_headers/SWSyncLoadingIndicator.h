//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface SWSyncLoadingIndicator : UIView
{
    _Bool _isAnimating;
    NSTimer *_timer;
    _Bool _hidesWhenStopped;
    long long _currentStep;
    long long _dotCount;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long dotCount; // @synthesize dotCount=_dotCount;
@property(nonatomic) _Bool hidesWhenStopped; // @synthesize hidesWhenStopped=_hidesWhenStopped;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)repeatAnimation;
- (struct CGRect)currentRect:(long long)arg1;
- (id)currentInnerColor:(long long)arg1;
- (_Bool)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setDefaultProperty;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

