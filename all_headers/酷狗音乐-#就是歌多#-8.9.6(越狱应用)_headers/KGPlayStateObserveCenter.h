//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KGPlayStateObserveCenter : NSObject
{
    _Bool _isActive;
    _Bool _isPlaying;
    double _appUsedTime;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) double appUsedTime; // @synthesize appUsedTime=_appUsedTime;
@property(nonatomic, setter=setIsActive:) _Bool isActive; // @synthesize isActive=_isActive;
- (void)stateChange:(int)arg1;
- (void)liveStateChange:(id)arg1;
- (void)ktvAudioStateChange:(id)arg1;
- (void)tingStateChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

