//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMNativeStrands, IMRequestStatus;

@protocol IMNativeStrandsDelegate <NSObject>
- (void)nativeStrandsAdClicked:(IMNativeStrands *)arg1;
- (void)nativeStrandsAdImpressed:(IMNativeStrands *)arg1;
- (void)userWillLeaveApplicationFromNativeStrands:(IMNativeStrands *)arg1;
- (void)nativeStrandsDidDismissScreen:(IMNativeStrands *)arg1;
- (void)nativeStrandsWillDismissScreen:(IMNativeStrands *)arg1;
- (void)nativeStrandsDidPresentScreen:(IMNativeStrands *)arg1;
- (void)nativeStrandsWillPresentScreen:(IMNativeStrands *)arg1;
- (void)nativeStrands:(IMNativeStrands *)arg1 didFailToLoadWithError:(IMRequestStatus *)arg2;
- (void)nativeStrandsDidFinishLoading:(IMNativeStrands *)arg1;
@end

