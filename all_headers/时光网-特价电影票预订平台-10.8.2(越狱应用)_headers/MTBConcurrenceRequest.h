//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MTDRequestDelegate-Protocol.h"
#import "MTDRequestProtocol-Protocol.h"

@class NSArray, NSString;
@protocol MTDConcurrenceRequestDelegate;

@interface MTBConcurrenceRequest : NSObject <MTDRequestDelegate, MTDRequestProtocol>
{
    id _idOwner;
    NSArray *_arrayRequest;
    id <MTDConcurrenceRequestDelegate> _delegate;
    CDUnknownBlockType _baseBlockRequestSuccess;
    CDUnknownBlockType _baseBlockRequestFailed;
    long long _baseEnumSuccessMode;
    long long _intFinishedCount;
    long long _intFailedCount;
}

@property(nonatomic) long long intFailedCount; // @synthesize intFailedCount=_intFailedCount;
@property(nonatomic) long long intFinishedCount; // @synthesize intFinishedCount=_intFinishedCount;
@property(nonatomic) long long baseEnumSuccessMode; // @synthesize baseEnumSuccessMode=_baseEnumSuccessMode;
@property(copy, nonatomic) CDUnknownBlockType baseBlockRequestFailed; // @synthesize baseBlockRequestFailed=_baseBlockRequestFailed;
@property(copy, nonatomic) CDUnknownBlockType baseBlockRequestSuccess; // @synthesize baseBlockRequestSuccess=_baseBlockRequestSuccess;
@property(nonatomic) __weak id <MTDConcurrenceRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *arrayRequest; // @synthesize arrayRequest=_arrayRequest;
@property(nonatomic) __weak id idOwner; // @synthesize idOwner=_idOwner;
- (void).cxx_destruct;
- (_Bool)dataFromCache;
- (void)clearCompletionBlock;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (_Bool)isExecuting;
- (void)stop;
- (void)startWithCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (void)start;
- (void)concurrenceRequestFailed;
- (void)concurrenceRequestSuccess;
- (void)concurrenceRequestFinish;
- (void)clearRequest;
- (void)mtdOptionalRequestFailed:(id)arg1 error:(id)arg2;
- (void)mtdOptionalRequestSuccess:(id)arg1;
- (void)dealloc;
- (id)initWithRequestArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

