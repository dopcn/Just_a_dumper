//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IMNativeVideoViewController, NSData, NSDictionary;

@protocol IMNativeVideoViewControllerDelegate
- (void)imNativeVideoControllerVastTagFound:(NSData *)arg1;
- (void)imNativeVideoControllerUserWillLeaveApplication;
- (void)imNativeVideoControllerRewardActionComplete:(NSDictionary *)arg1;
- (void)imNativeVideoControllerDidCloseAd:(IMNativeVideoViewController *)arg1;
- (void)imNativeVideoControllerWillCloseAd:(IMNativeVideoViewController *)arg1;
- (void)imNativeVideoControllerFireAdFailed:(IMNativeVideoViewController *)arg1;
- (void)imNativeVideoControllerFireAdReady:(IMNativeVideoViewController *)arg1;
- (void)imNativeVideoControllerDidFailedToLoad:(IMNativeVideoViewController *)arg1;
- (void)imNativeVideoControllerDidFinishedLoad:(IMNativeVideoViewController *)arg1;
@end

