//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NVSAudioUnitHelper : NSObject
{
}

+ (void)notifyDeviceError:(id)arg1;
+ (void)checkResult:(_Bool)arg1 funDesc:(id)arg2 errorLevel:(int)arg3;
+ (void)checkStatus:(int)arg1 funDesc:(id)arg2 errorLevel:(int)arg3 category:(int)arg4;
+ (_Bool)isStart;
+ (_Bool)setSpeake:(int)arg1;
+ (_Bool)setMute:(int)arg1;
+ (void)stopAudio;
+ (void)startAudio;
+ (void)disposeAudioUnit;
+ (struct OpaqueAudioComponentInstance *)getAudioUnit;
+ (struct OpaqueAudioComponentInstance *)initAudioUnit;

@end

