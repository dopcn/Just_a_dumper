//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMUserTrackViewControl.h"

@class AMAPRideRunLayer, LTMRideRunTrack;

@interface LTMRideRunTrackViewControl : LTMUserTrackViewControl
{
    AMAPRideRunLayer *_trackLayer;
    LTMRideRunTrack *_trackInfo;
}

@property(retain, nonatomic) LTMRideRunTrack *trackInfo; // @synthesize trackInfo=_trackInfo;
- (void).cxx_destruct;
- (id)shareSinaContent;
- (struct CGRect)bottomViewFrameForShare:(_Bool)arg1;
- (void)beginShareAction:(id)arg1;
- (void)adjustUIAfterShareScreenshot;
- (void)adjustUIBeforeShareScreenshot;
- (void)reloadData;
- (void)setParams:(id)arg1;
- (void)loadView;
- (void)dismissAnimated:(_Bool)arg1;
- (void)stopTTS;
- (void)hideAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1;

@end

