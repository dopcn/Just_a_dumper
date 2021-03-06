//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class RACDisposable;

@interface NVActivityIndicatorView : UIImageView
{
    double _duration;
    _Bool _activityAnimating;
    _Bool _hidesWhenStopped;
    RACDisposable *_timeDisposable;
}

@property(retain, nonatomic) RACDisposable *timeDisposable; // @synthesize timeDisposable=_timeDisposable;
@property(nonatomic) _Bool hidesWhenStopped; // @synthesize hidesWhenStopped=_hidesWhenStopped;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isActivityAnimating;
- (void)stopActivityAnimating;
- (void)startActivityAnimating;
- (void)timerAction;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initValues;

@end

