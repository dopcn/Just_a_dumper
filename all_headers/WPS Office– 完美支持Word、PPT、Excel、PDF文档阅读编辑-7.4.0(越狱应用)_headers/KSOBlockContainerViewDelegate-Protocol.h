//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KSOBlockContainerView;

@protocol KSOBlockContainerViewDelegate <NSObject>
- (void)blockContainerViewMultiFingerReleased;
- (void)blockContainerViewMultiFingerPressed;
- (void)blockContainerViewLongPress:(KSOBlockContainerView *)arg1 withState:(long long)arg2 tapPoint:(struct CGPoint)arg3;
- (void)blockContainerViewDoubleTap:(KSOBlockContainerView *)arg1 withTapPoint:(struct CGPoint)arg2 inRect:(_Bool)arg3;
- (void)blockContainerViewSingleTap:(KSOBlockContainerView *)arg1 withTapPoint:(struct CGPoint)arg2 inRect:(_Bool)arg3;
- (void)blockContainerViewRotation:(KSOBlockContainerView *)arg1 withState:(long long)arg2 currentAngle:(double)arg3;
- (void)blockContainerViewMove:(KSOBlockContainerView *)arg1 withState:(long long)arg2 dragPoint:(struct CGPoint)arg3;
- (void)blockContainerViewZoom:(KSOBlockContainerView *)arg1 withState:(long long)arg2 dragPoint:(struct CGPoint)arg3;
@end

