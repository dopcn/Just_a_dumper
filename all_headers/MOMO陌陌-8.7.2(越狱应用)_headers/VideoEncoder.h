//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSString;

@interface VideoEncoder : NSObject
{
    AVAssetWriter *_writer;
    AVAssetWriterInput *_writerInput;
    NSString *_path;
    unsigned long long _bitrate;
    AVAssetWriterInputPixelBufferAdaptor *_writerPixelBufferInput;
}

+ (id)encoderForPath:(id)arg1 Height:(int)arg2 andWidth:(int)arg3 bitrate:(int)arg4;
@property(readonly, nonatomic) AVAssetWriterInputPixelBufferAdaptor *writerPixelBufferInput; // @synthesize writerPixelBufferInput=_writerPixelBufferInput;
@property(readonly, nonatomic) unsigned long long bitrate; // @synthesize bitrate=_bitrate;
@property(retain) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)stopProcess:(id *)arg1;
- (void)prepareForEncode;
@property(readonly, nonatomic) struct __CVPixelBufferPool *pixelBufferPool;
- (_Bool)encodePixelFrame:(struct __CVBuffer *)arg1 prestime:(CDStruct_1b6d18a9)arg2;
- (_Bool)encodeFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)finishWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)initPath:(id)arg1 Height:(int)arg2 andWidth:(int)arg3 bitrate:(int)arg4;

@end

