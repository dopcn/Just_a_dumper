//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TapDetectingView, UITouch;

@protocol TapDetectingViewDelegate <NSObject>

@optional
- (void)tapDetectingView:(TapDetectingView *)arg1 scale:(int)arg2;
- (void)tapDetectingView:(TapDetectingView *)arg1 roate:(int)arg2;
- (void)tapDetectingView:(TapDetectingView *)arg1 overlook:(int)arg2;
- (void)tapDetectingView:(TapDetectingView *)arg1 flying:(struct CGPoint)arg2 withSpeed:(int)arg3;
- (void)tapDetectingView:(TapDetectingView *)arg1 doubleEndTouchPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(TapDetectingView *)arg1 doubleMoveTouchPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(TapDetectingView *)arg1 doubleBeginTouchPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(TapDetectingView *)arg1 endTouchPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(TapDetectingView *)arg1 moveTouchPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(TapDetectingView *)arg1 beginTouchPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(TapDetectingView *)arg1 gotLongPress:(struct CGPoint)arg2;
- (void)tapDetectingView:(TapDetectingView *)arg1 gotNormalPress:(struct CGPoint)arg2;
- (void)tapDetectingView:(TapDetectingView *)arg1 forceTouch:(UITouch *)arg2;
- (void)tapDetectingView:(TapDetectingView *)arg1 gotTwoFingerTapAtPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(TapDetectingView *)arg1 gotDoubleTapAtPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(TapDetectingView *)arg1 gotSingleTapAtPoint:(struct CGPoint)arg2;
@end

