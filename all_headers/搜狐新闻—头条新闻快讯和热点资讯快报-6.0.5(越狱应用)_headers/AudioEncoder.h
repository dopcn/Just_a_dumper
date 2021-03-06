//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AudioEncoder : NSObject
{
    void *_enc_handle;
    CDUnknownBlockType _outputBlock;
    int m_channels;
    long long count;
    double first_pts;
    double duration;
    double sys_pts;
    double sys_duration;
    _Bool m_pause;
    _Bool m_stop;
    struct _opaque_pthread_mutex_t faac_lock;
    CDUnknownFunctionPointerType callback;
    int nInputSamples;
    int nMaxOutputBytes;
    int max_in_buf_len;
    int max_cache_buf_len;
    char *oputbuffer;
    char *cachebuf;
    char *cachebuf2;
    int cachebuf_len;
    char *inbuf;
    int inbuf_len;
    _Bool needRenderAudio;
    _Bool _m_pause;
    CDUnknownBlockType __outputBlock;
}

@property(nonatomic) _Bool m_pause; // @synthesize m_pause=_m_pause;
@property(copy, nonatomic) CDUnknownBlockType _outputBlock; // @synthesize _outputBlock=__outputBlock;
@property(nonatomic) _Bool needRenderAudio; // @synthesize needRenderAudio;
- (void)audioRenderStop;
- (void)audioRenderStart;
- (_Bool)isHeadsetPluggedIn;
- (void)stop;
- (_Bool)encodeFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)pause;
- (void)encodeWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)initWithSampleRate:(long long)arg1 Channels:(int)arg2 andBitrate:(long long)arg3 callback:(CDUnknownFunctionPointerType)arg4;

@end

