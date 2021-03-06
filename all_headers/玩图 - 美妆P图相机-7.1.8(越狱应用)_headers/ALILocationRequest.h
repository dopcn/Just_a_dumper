//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSTimer;
@protocol ALILocationRequestDelegate;

@interface ALILocationRequest : NSObject
{
    _Bool _hasTimedOut;
    id <ALILocationRequestDelegate> _delegate;
    long long _requestID;
    long long _accuracy;
    double _timeout;
    CDUnknownBlockType _callback;
    NSDate *_requestStartTime;
    NSTimer *_timeoutTimer;
}

+ (long long)getUniqueRequestID;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) NSDate *requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) _Bool hasTimedOut; // @synthesize hasTimedOut=_hasTimedOut;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) long long accuracy; // @synthesize accuracy=_accuracy;
@property(readonly, nonatomic) long long requestID; // @synthesize requestID=_requestID;
@property(nonatomic) __weak id <ALILocationRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)timeoutTimerFired:(id)arg1;
@property(readonly, nonatomic) double timeAlive;
- (void)cancelLocationRequest;
- (void)completeLocationRequest;
- (double)horizontalAccuracyThreshold;
- (double)updateTimeStaleThreshold;
- (id)initWithRequestID:(long long)arg1;
- (id)init;

@end

