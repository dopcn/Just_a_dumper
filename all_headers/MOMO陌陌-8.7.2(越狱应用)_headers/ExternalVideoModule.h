//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ExternalVideoProtocol-Protocol.h"

@class NSString;

@interface ExternalVideoModule : NSObject <ExternalVideoProtocol>
{
}

+ (id)sharedInstance;
- (struct VideoRecvLenStatistics *)getVideoRecvLenStatistics:(int *)arg1;
- (struct VideoStatistics *)getVideoStatistics:(int *)arg1;
- (int)getRecvDataErrorTimes;
- (int)getRTT;
- (int)getRenderFrameCount;
- (int)getDecodeFrameCount;
- (int)getCaptureFrameCount;
- (int)getEncodeFrameCount;
- (int)getEncodeDataSize;
- (void)getEncodeWidth:(int *)arg1 height:(int *)arg2;
- (int)getTotalRecvBytes;
- (int)getSentFrameCount;
- (int)getFlowCtrlFrameCount;
- (int)getFlowCtrlBytes;
- (int)getTotalSendBytes;
- (int)getBufferDuration;
- (void)setMaxBufferDuration:(int)arg1;
- (_Bool)pushEncodedVideoData:(id)arg1 isKeyFrame:(_Bool)arg2 videoWidth:(int)arg3 videoHeight:(int)arg4;
- (void)setExternalVideoModuleDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

