//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "JsonParseAdapterDelegate-Protocol.h"

@class ASIHTTPRequest, JsonParseAdapter, NSString;
@protocol RequestCallBackDelegate;

@interface RequestHelper : NSObject <JsonParseAdapterDelegate>
{
    long long _requestKey;
    int _reqMethod;
    id <RequestCallBackDelegate> _delegate;
    ASIHTTPRequest *_httpRequest;
    JsonParseAdapter *_jsonParseAdapter;
    _Bool _isCancelled;
    _Bool _isFinished;
}

@property(nonatomic) long long requestKey; // @synthesize requestKey=_requestKey;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) __weak id <RequestCallBackDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) JsonParseAdapter *jsonParseAdapter; // @synthesize jsonParseAdapter=_jsonParseAdapter;
@property(retain, nonatomic) ASIHTTPRequest *httpRequest; // @synthesize httpRequest=_httpRequest;
@property(nonatomic) int reqMethod; // @synthesize reqMethod=_reqMethod;
- (void).cxx_destruct;
- (void)jsonParseFinished:(id)arg1;
- (void)dealloc;
- (void)requestWentWrong;
- (void)requestDone;
- (void)requestCancel;
- (void)requestFail:(id)arg1;
- (void)requestSuccess:(id)arg1;
- (void)startRequest:(id)arg1;
- (void)requestWithParam:(id)arg1;
- (id)normalizedRequestParameters:(id)arg1;
- (id)smartURLForString:(id)arg1;
- (id)initWithKey:(long long)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

