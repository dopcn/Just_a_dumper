//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MapViewDelegate-Protocol.h"
#import "TapDetectingViewDelegate-Protocol.h"

@class NSString;

@interface BCBaseMapViewDelegate : NSObject <TapDetectingViewDelegate, MapViewDelegate>
{
}

- (void)handleClickEvent:(struct CGPoint)arg1;
- (void)onClickMapMark:(id)arg1;
- (void)onTouchMapMoved;
- (void)onTouchMapBegan;
- (void)onClickCompass;
- (int)dealWithItem:(id)arg1 tapPoint:(struct CGPoint)arg2;
- (void)runDraw;
- (void)tapDetectingView:(id)arg1 scale:(long long)arg2;
- (void)tapDetectingView:(id)arg1 roate:(long long)arg2;
- (void)tapDetectingView:(id)arg1 overlook:(long long)arg2;
- (int)changedToParamFromPoint:(struct CGPoint)arg1;
- (void)tapDetectingView:(id)arg1 flying:(struct CGPoint)arg2 withSpeed:(long long)arg3;
- (void)tapDetectingView:(id)arg1 endTouchPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(id)arg1 moveTouchPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(id)arg1 beginTouchPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(id)arg1 gotLongPress:(struct CGPoint)arg2;
- (void)tapDetectingView:(id)arg1 gotNormalPress:(struct CGPoint)arg2;
- (void)tapDetectingView:(id)arg1 gotTwoFingerTapAtPoint:(struct CGPoint)arg2;
- (void)tapDetectingView:(id)arg1 gotDoubleTapAtPoint:(struct CGPoint)arg2;
- (void)dealWithPoint:(struct CGPoint)arg1;
- (long long)tapDetectingView:(id)arg1 gotSingleTapAtPoint:(struct CGPoint)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

