//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ShenMaSpeechAudioEncodingTransDelegate-Protocol.h"

@class NSMutableArray, NSString, ShenMaSpeechAudioEncodingTrans;
@protocol OS_dispatch_queue, ShenMaSpeechAudioEncoderDelegate;

@interface ShenMaSpeechAudioEncoder : NSObject <ShenMaSpeechAudioEncodingTransDelegate>
{
    struct ShenMaSpeechEncodeManager *_encodeM;
    NSObject<OS_dispatch_queue> *_encodeQueue;
    _Bool _enableLog;
    _Bool _encoderReady;
    id <ShenMaSpeechAudioEncoderDelegate> _delegate;
    ShenMaSpeechAudioEncodingTrans *_currentEncodingTrans;
    NSMutableArray *_sourcePool;
    unsigned long long _frameByteSize;
}

@property(nonatomic) _Bool encoderReady; // @synthesize encoderReady=_encoderReady;
@property(nonatomic) unsigned long long frameByteSize; // @synthesize frameByteSize=_frameByteSize;
@property(retain, nonatomic) NSMutableArray *sourcePool; // @synthesize sourcePool=_sourcePool;
@property(retain, nonatomic) ShenMaSpeechAudioEncodingTrans *currentEncodingTrans; // @synthesize currentEncodingTrans=_currentEncodingTrans;
@property(nonatomic) _Bool enableLog; // @synthesize enableLog=_enableLog;
@property(nonatomic) __weak id <ShenMaSpeechAudioEncoderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleSuccessed;
- (void)handleError;
- (void)handleEncoder;
- (void)ShenMaSpeechAudioEncodingTrans:(id)arg1 statusChanged:(long long)arg2;
- (void)cancel;
- (void)encodeBuf:(id)arg1 isLastOne:(_Bool)arg2 requestId:(id)arg3;
- (void)startEncoding;
- (_Bool)prepareToEncoding;
- (void)dealloc;
- (id)initEnableLog:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

