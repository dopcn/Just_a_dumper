//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItem, IMIASNativeVideoViewability, IMVastCompanion, NSArray, NSString;

@interface IMVideoAssetMetaData : NSObject
{
    _Bool _impressionFired;
    _Bool _startFired;
    _Bool _handoff;
    NSArray *_ads;
    AVPlayerItem *_playerItem;
    NSString *_clickThroughUrl;
    double _duration;
    IMVastCompanion *_selectedCompanion;
    NSString *_assetPath;
    NSString *_videoUrl;
    NSString *_videoCachePath;
    double _currentTime;
    IMIASNativeVideoViewability *_iasViewability;
}

@property(retain, nonatomic) IMIASNativeVideoViewability *iasViewability; // @synthesize iasViewability=_iasViewability;
@property _Bool handoff; // @synthesize handoff=_handoff;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) NSString *videoCachePath; // @synthesize videoCachePath=_videoCachePath;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSString *assetPath; // @synthesize assetPath=_assetPath;
@property(retain, nonatomic) IMVastCompanion *selectedCompanion; // @synthesize selectedCompanion=_selectedCompanion;
@property _Bool startFired; // @synthesize startFired=_startFired;
@property _Bool impressionFired; // @synthesize impressionFired=_impressionFired;
@property double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *clickThroughUrl; // @synthesize clickThroughUrl=_clickThroughUrl;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) NSArray *ads; // @synthesize ads=_ads;
- (void).cxx_destruct;

@end

