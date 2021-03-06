//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RTCPeerConnectionFactory : NSObject
{
    struct unique_ptr<rtc::Thread, std::__1::default_delete<rtc::Thread>> _networkThread;
    struct unique_ptr<rtc::Thread, std::__1::default_delete<rtc::Thread>> _workerThread;
    struct unique_ptr<rtc::Thread, std::__1::default_delete<rtc::Thread>> _signalingThread;
    _Bool _hasStartedAecDump;
    scoped_refptr_1eaeeec2 _nativeFactory;
}

@property(readonly, nonatomic) scoped_refptr_1eaeeec2 nativeFactory; // @synthesize nativeFactory=_nativeFactory;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stopAecDump;
- (_Bool)startAecDumpWithFilePath:(id)arg1 maxSizeInBytes:(long long)arg2;
- (id)peerConnectionWithConfiguration:(id)arg1 constraints:(id)arg2 delegate:(id)arg3;
- (id)mediaStreamWithStreamId:(id)arg1;
- (id)videoTrackWithSource:(id)arg1 trackId:(id)arg2;
- (id)avFoundationVideoSourceWithConstraints:(id)arg1 quality:(int)arg2;
- (id)audioTrackWithSource:(id)arg1 trackId:(id)arg2;
- (id)audioTrackWithTrackId:(id)arg1;
- (id)audioSourceWithConstraints:(id)arg1;
- (id)init;

@end

