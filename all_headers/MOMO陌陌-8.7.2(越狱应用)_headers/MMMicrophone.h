//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MMAudioFloatConverter;
@protocol MMMicrophoneDelegate;

@interface MMMicrophone : NSObject
{
    _Bool _microphoneOn;
    id <MMMicrophoneDelegate> _delegate;
    MMAudioFloatConverter *_floatConverter;
    CDStruct_06de12b4 *_micInfo;
}

+ (id)sharedMicrophone;
@property(nonatomic) CDStruct_06de12b4 *micInfo; // @synthesize micInfo=_micInfo;
@property(retain, nonatomic) MMAudioFloatConverter *floatConverter; // @synthesize floatConverter=_floatConverter;
@property(nonatomic) _Bool microphoneOn; // @synthesize microphoneOn=_microphoneOn;
@property(nonatomic) __weak id <MMMicrophoneDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)stopFetchingAudio;
- (_Bool)startFetchingAudio;
@property(readonly) struct AudioStreamBasicDescription audioStreamBasicDescription;
- (unsigned int)maximumBufferFrames;
- (struct AudioStreamBasicDescription)defaultStreamFormat;
- (void)freeBuffers;
- (void)allocBuffers;
- (void)setAudioStreamBasicDescription:(struct AudioStreamBasicDescription)arg1;
- (void)setupAudioUnit;
- (void)microphoneRouteChanged:(id)arg1;
- (void)microphoneWasInterrupted:(id)arg1;
- (void)setupNotifications;
- (id)init;
- (void)dealloc;

@end

