//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HBMapView, HBNearDriverInfo;

@protocol HBMapViewDelegate <NSObject>
- (void)didNearDriverDetailClicked:(HBNearDriverInfo *)arg1;
- (void)mapViewPanGestureStateEnded:(HBMapView *)arg1 changeCenter:(_Bool)arg2;
- (void)mapViewCenterCharged:(struct CLLocationCoordinate2D)arg1;
- (void)didWakeupClicked;
- (void)didDispatchClicked;
- (void)didTianyanOpened;
- (void)didMapViewRegress;
@end

