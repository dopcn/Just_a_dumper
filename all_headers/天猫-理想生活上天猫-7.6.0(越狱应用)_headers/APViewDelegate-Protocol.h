//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APCamera, APHotspot, APView;

@protocol APViewDelegate <NSObject>

@optional
- (void)view:(APView *)arg1 didClickHotspot:(APHotspot *)arg2 screenPoint:(struct CGPoint)arg3 scene3DPoint:(struct APVertex)arg4;
- (_Bool)view:(APView *)arg1 didRotateCamera:(APCamera *)arg2 rotation:(struct APRotation)arg3;
- (void)view:(APView *)arg1 didEndZooming:(float)arg2 isZoomIn:(_Bool)arg3 isZoomOut:(_Bool)arg4;
- (void)view:(APView *)arg1 didRunZooming:(float)arg2 isZoomIn:(_Bool)arg3 isZoomOut:(_Bool)arg4;
- (_Bool)view:(APView *)arg1 shouldRunZooming:(float)arg2 isZoomIn:(_Bool)arg3 isZoomOut:(_Bool)arg4;
- (void)view:(APView *)arg1 didBeginZooming:(float)arg2;
@end

