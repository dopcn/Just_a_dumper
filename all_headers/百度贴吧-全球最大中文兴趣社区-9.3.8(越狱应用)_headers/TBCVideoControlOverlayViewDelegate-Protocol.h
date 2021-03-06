//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TBCVideoControlOverlayView;

@protocol TBCVideoControlOverlayViewDelegate <NSObject>
- (void)videoControlOverlayView:(TBCVideoControlOverlayView *)arg1 controlEvents:(unsigned long long)arg2;

@optional
- (void)resizeVideoScreenFromControlOverlayView:(TBCVideoControlOverlayView *)arg1;
- (long long)fullScreenPlaySourceType;
- (void)fullScreenPlayNextVideoWithVideoControOverLayView:(TBCVideoControlOverlayView *)arg1;
- (void)videoControlOverlayView:(TBCVideoControlOverlayView *)arg1 fullScreenActionWithState:(_Bool)arg2 smallTapType:(unsigned long long)arg3;
- (void)videoControlOverlayView:(TBCVideoControlOverlayView *)arg1 viewEvents:(unsigned long long)arg2;
@end

