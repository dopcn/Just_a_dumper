//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MLFM, MLFMHandout, NSString, ZDUniverseFmDetail;

@protocol MLFMPlayerManagerDelegate

@optional
- (void)managerFinishLoadingFM:(MLFM *)arg1;
- (void)managerStartLoadingFM:(MLFM *)arg1;
- (void)managerDidLoadFMDetail:(MLFM *)arg1;
- (void)managerDidRefreshFMSeries:(ZDUniverseFmDetail *)arg1 withErrString:(NSString *)arg2;
- (void)managerStartRefreshingFMSeries:(_Bool)arg1;
- (void)managerPlayingDidChangeHandout:(MLFMHandout *)arg1 type:(unsigned long long)arg2;
- (void)managerPlayingDidTrackAtTime:(long long)arg1 totalTime:(long long)arg2;
- (void)managerLoadingDidTrackProgress:(double)arg1;
- (void)managerPlayingStatusDidChange:(_Bool)arg1;
- (void)managerDidSwitchToFM:(MLFM *)arg1;
@end

