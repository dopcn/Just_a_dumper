//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "IFlyPcmRecorderDelegate-Protocol.h"
#import "ISVEngineDelegate-Protocol.h"

@class IFlyISVParam, IFlyPcmRecorder, ISVEngine, NSMutableArray, NSString;
@protocol IFlyISVOperationDelegate;

@interface IFlyISVMSCHandler : NSOperation <ISVEngineDelegate, IFlyPcmRecorderDelegate>
{
    ISVEngine *_isvEngine;
    int _state;
    IFlyPcmRecorder *_isrRecorder;
    NSString *_params;
    NSString *_grammar;
    NSMutableArray *_queue;
    int _error;
    int _index;
    id <IFlyISVOperationDelegate> _delegate;
    IFlyISVParam *_sessionConfig;
}

- (void)stopEngine;
- (void)writeFile:(id)arg1;
- (void)onIFlyRecorderError:(id)arg1 theError:(int)arg2;
- (void)onIFlyRecorderBuffer:(const void *)arg1 bufferSize:(int)arg2;
- (void)onEnd;
- (id)getValue:(id)arg1 inResult:(id)arg2;
- (void)onResult:(id)arg1;
- (void)onStop;
- (void)end;
- (void)onStopRecord;
- (void)onRecording;
- (void)onWaitting;
- (void)onStart;
- (void)setState:(int)arg1;
- (void)dealloc;
- (void)main;
- (int)state;
- (void)cancel;
- (_Bool)stopRecord;
- (void)startListening;
- (id)init:(id)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

