//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MusicGestureView, UIPanGestureRecognizer, UISwipeGestureRecognizer;

@protocol MusicGestureViewDelegate <NSObject>

@optional
- (void)dragOnView:(MusicGestureView *)arg1 gestureDidEnd:(UIPanGestureRecognizer *)arg2;
- (void)dragOnView:(MusicGestureView *)arg1 gestureIsDragging:(UIPanGestureRecognizer *)arg2;
- (void)dragOnView:(MusicGestureView *)arg1 gestureDidBegin:(UIPanGestureRecognizer *)arg2;
- (void)swipOnView:(MusicGestureView *)arg1 direction:(unsigned long long)arg2;
- (void)doubleTapOnView:(MusicGestureView *)arg1;
- (void)singleTapOnView:(MusicGestureView *)arg1 gesture:(UISwipeGestureRecognizer *)arg2;
@end

