//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSDate, NSLock, NSString, UILabel, UIScrollView;

@interface SNTwinsLoadingView : UIView <CAAnimationDelegate>
{
    NSLock *_statusLock;
    UIView *_animationView;
    UIView *_topCircle;
    UIView *_bottomCircle;
    UIScrollView *_observedScrollView;
    double _observedScrollViewOriginalContentInsetTop;
    UILabel *_statusLabel;
    NSDate *_lasteLoadDate;
    _Bool _finishedToLoad;
    long long _status;
}

+ (id)stringFromDate:(id)arg1 withFormat:(id)arg2;
+ (id)dragRefreshRelativelyDate:(id)arg1;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)setStatusLabel:(id)arg1;
- (void)setUpdateDate:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)createEndingScaleAnimation:(double)arg1 duration:(double)arg2;
- (id)createRotationAnimation:(double)arg1 duration:(double)arg2;
- (id)createRepeatedScaleAnimation:(double)arg1 duration:(double)arg2;
- (void)beginRepeatedScaleAnimation;
- (void)stopAnimations;
- (void)stopCurrentAnimations;
- (void)updateTableViewAndStatusLabel;
- (void)startAnimations;
- (void)scrollViewDidScroll:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateTheme:(id)arg1;
- (double)minDistanceCanReleaseToReload;
- (void)resetObservedScrollViewOriginalContentInsetTop:(double)arg1;
- (void)dealloc;
- (void)removeObserver;
- (id)initWithFrame:(struct CGRect)arg1 andObservedScrollView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

