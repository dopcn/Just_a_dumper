//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAudioCorePlayerDataSource-Protocol.h"
#import "FBAudioPreviewPlaying-Protocol.h"

@class FBAudioCorePlayer, NSString;

@interface FBAudioPreviewPlayer : NSObject <FBAudioPreviewPlaying, FBAudioCorePlayerDataSource>
{
    FBAudioCorePlayer *_player;
    struct shared_ptr<facebook::audiofiltercore::AudioInputMixer<short>> _mixer;
    struct shared_ptr<facebook::audiofiltercore::VolumeLevelAudioTransform<short>> _volumeTransform;
    _Bool _playing;
    _Bool _overrideMute;
    _Bool _shouldResetMuteOverrideOnReset;
    float _volume;
}

@property(readonly, nonatomic) _Bool shouldResetMuteOverrideOnReset; // @synthesize shouldResetMuteOverrideOnReset=_shouldResetMuteOverrideOnReset;
@property(readonly, nonatomic) _Bool overrideMute; // @synthesize overrideMute=_overrideMute;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)readSamples:(short *)arg1 sampleCount:(unsigned long long)arg2;
- (void)_setupPlayer:(id)arg1;
@property(readonly, nonatomic) unsigned long long desiredSamplingRate;
- (float)progressForAudioInput:(shared_ptr_dbdec512)arg1;
- (void)stop;
- (void)play;
- (void)dealloc;
- (void)removeAudioInput:(shared_ptr_7cd5474a)arg1;
- (void)addAudioInput:(shared_ptr_7cd5474a)arg1 playbackCompletion:(CDUnknownBlockType)arg2;
- (id)initWithMockAudioUnit:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

