//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSString;

@interface txhw264decoder : NSObject
{
    void *phw264Dec;
    CDUnknownFunctionPointerType pDecCB;
    NSString *spsstring;
    NSString *ppsstring;
    char *headdata;
    char *pps;
    char *decBuf;
    NSMutableArray *pFrameIndex;
    NSLock *IndexLock;
    struct tag_frame_info frameInfoArry[300];
    struct tag_video_frame frameList;
    unsigned int frameListSize;
    NSLock *frameListLock;
    struct OpaqueVTDecompressionSession *_decompressionSession;
    struct opaqueCMFormatDescription *_formatDesc;
}

@property struct opaqueCMFormatDescription *formatDesc; // @synthesize formatDesc=_formatDesc;
@property struct OpaqueVTDecompressionSession *decompressionSession; // @synthesize decompressionSession=_decompressionSession;
- (void).cxx_destruct;
- (char *)getFrameHeader:(const char *)arg1 withDataLen:(long long)arg2 OutDataLen:(int *)arg3 OutHeaderlen:(int *)arg4;
- (int)remove_emulation_prevention_three_byte:(const char *)arg1 withDataLen:(int)arg2 OutByte:(char *)arg3 OutLen:(int *)arg4;
- (char *)getNalu:(const char *)arg1 withDataLen:(long long)arg2 OutDataLen:(int *)arg3 NaluType:(int)arg4;
- (int)getHeaderSize:(const char *)arg1;
- (int)IsIFrame:(const char *)arg1;
- (int)IsHeader:(const char *)arg1;
- (int)getDataSize:(const char *)arg1 withDataLen:(long long)arg2;
- (void)FillDecBuffer:(const char *)arg1 InputBufLen:(int)arg2 OutBuffer:(char *)arg3 OutDataLen:(int *)arg4 OutDataLen:(int *)arg5 FrameType:(int)arg6;
- (struct __CVBuffer *)sortAndQueryVideoData:(struct __CVBuffer *)arg1;
- (int)DoIndexFind;
- (void)DoDecCB:(char *)arg1 withU:(char *)arg2 withV:(char *)arg3 withDataLenw:(int)arg4 withDataLenh:(int)arg5 withStideY:(int)arg6 withStrideUV:(int)arg7 withFrameIndex:(int)arg8 withDataFormat:(int)arg9;
- (void)setDecCallback:(void *)arg1 withFunction:(CDUnknownFunctionPointerType)arg2;
- (int)releasedecoder;
- (int)dodecoder:(const char *)arg1 withDataLen:(int)arg2 withFrameIndex:(int)arg3 withSyncId:(int)arg4 withIFrame:(int)arg5 extraData:(void *)arg6;
- (int)createdecoder:(const char *)arg1 withDataLen:(int)arg2;
- (int)initdecoder;
- (void)clearFrameList;
- (struct __CVBuffer *)queryFrame;
- (void)sortFrame:(struct tag_video_frame *)arg1;
- (void)printfList;
- (void)releaseFrame:(struct tag_video_frame *)arg1;
- (struct tag_video_frame *)createFrame:(struct __CVBuffer *)arg1 withFrameInfo:(struct tag_frame_info *)arg2;

@end

