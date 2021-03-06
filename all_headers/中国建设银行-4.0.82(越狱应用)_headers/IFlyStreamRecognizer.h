//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ISREngineDelegate-Protocol.h"

@class AIPIFlyISRParam, ISREngine, NSDate, NSString;
@protocol AIPIFlySpeechRecognizerDelegate;

@interface IFlyStreamRecognizer : NSObject <ISREngineDelegate>
{
    ISREngine *_isrEngine;
    long long _audioCount;
    long long _resultCount;
    int _netTimeout;
    NSDate *_startDate;
    NSDate *_stopDate;
    int _state;
    int _error;
    NSString *_params;
    NSString *_grammar;
    NSString *_appid;
    id <AIPIFlySpeechRecognizerDelegate> _delegate;
    AIPIFlyISRParam *_sessionConfig;
}

@property(nonatomic) int error; // @synthesize error=_error;
@property(readonly, nonatomic) AIPIFlyISRParam *sessionConfig; // @synthesize sessionConfig=_sessionConfig;
@property id <AIPIFlySpeechRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *grammar; // @synthesize grammar=_grammar;
@property(copy, nonatomic) NSString *params; // @synthesize params=_params;
- (void)onEnd:(int)arg1;
- (void)onResult:(id)arg1 isLast:(_Bool)arg2;
- (void)onEventEx:(int)arg1 arg0Ex:(int)arg2 arg1Ex:(int)arg3 dataEx:(id)arg4;
- (void)onIFlyResults:(id)arg1 isLast:(_Bool)arg2;
- (void)onIFlyResults:(id)arg1;
- (void)onStop;
- (void)dealloc;
- (void)cancel;
- (_Bool)stopWrite;
- (_Bool)writeAudio:(id)arg1;
- (void)setState:(int)arg1;
- (_Bool)startListening:(id)arg1 grammar:(id)arg2;
- (id)init:(id)arg1 config:(id)arg2;

@end

