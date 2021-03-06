//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTKRequestDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, YTKRequest;
@protocol YTKBatchRequestDelegate;

@interface YTKBatchRequest : NSObject <YTKRequestDelegate>
{
    NSArray *_requestArray;
    id <YTKBatchRequestDelegate> _delegate;
    CDUnknownBlockType _successCompletionBlock;
    CDUnknownBlockType _failureCompletionBlock;
    long long _tag;
    NSMutableArray *_requestAccessories;
    YTKRequest *_failedRequest;
    long long _finishedCount;
}

@property(nonatomic) long long finishedCount; // @synthesize finishedCount=_finishedCount;
@property(readonly, nonatomic) YTKRequest *failedRequest; // @synthesize failedRequest=_failedRequest;
@property(retain, nonatomic) NSMutableArray *requestAccessories; // @synthesize requestAccessories=_requestAccessories;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(copy, nonatomic) CDUnknownBlockType failureCompletionBlock; // @synthesize failureCompletionBlock=_failureCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType successCompletionBlock; // @synthesize successCompletionBlock=_successCompletionBlock;
@property(nonatomic) __weak id <YTKBatchRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *requestArray; // @synthesize requestArray=_requestArray;
- (void).cxx_destruct;
- (void)addAccessory:(id)arg1;
- (void)clearRequest;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)dealloc;
- (_Bool)isDataFromCache;
- (void)clearCompletionBlock;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)startWithCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)start;
- (id)initWithRequestArray:(id)arg1;
- (void)toggleAccessoriesDidStopCallBack;
- (void)toggleAccessoriesWillStopCallBack;
- (void)toggleAccessoriesWillStartCallBack;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

