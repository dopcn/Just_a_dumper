//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HWRxObserver;

@interface UIView (RxObserver)
- (void)addGestureObserver:(id)arg1;
- (void)addRxObserver:(id)arg1;
- (id)rx_gesture;
- (void)setRx_gesture:(id)arg1;
- (double)rx_tapAlpha;
- (void)setRx_tapAlpha:(double)arg1;
@property(readonly, nonatomic) CDUnknownBlockType rx_dynamicTapToAlpha;
@property(readonly, nonatomic) HWRxObserver *rx_dynamicTap;
@property(readonly, nonatomic) HWRxObserver *rx_tap;
@end

