//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMT_RecorderSource.h"

@interface NMT_StreamingFileRecorderSource : NMT_RecorderSource
{
    struct RecorderSource *_fileSource;
    struct RecorderSourceListener *_cppListener;
    struct BridgeAudioSink *_bridgeAudioSink;
}

- (void)stopRecording;
- (_Bool)startRecording:(id)arg1;
- (void)onSinkDisconnected:(id)arg1;
- (void)onSinkConnected:(id)arg1;
- (id)getAudioChunk;
- (long long)getChunksAvailable;
- (_Bool)isEmpty;
- (_Bool)isActive;
- (id)audioType;
- (void)dealloc;
- (id)initWithAudioType:(id)arg1 filename:(id)arg2 littleEndian:(_Bool)arg3;

@end

