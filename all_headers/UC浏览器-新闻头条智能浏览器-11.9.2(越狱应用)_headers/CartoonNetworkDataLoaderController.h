//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CartoonNetworkServiceProtocol-Protocol.h"
#import "URLConnectionTaskManagerDelegate-Protocol.h"

@class NSMutableArray, NSString, URLConnectionTaskManager;

@interface CartoonNetworkDataLoaderController : NSObject <URLConnectionTaskManagerDelegate, CartoonNetworkServiceProtocol>
{
    URLConnectionTaskManager *_connectionQueue;
    NSMutableArray *_requestObjArray;
}

+ (id)parseJSONData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *requestObjArray; // @synthesize requestObjArray=_requestObjArray;
@property(retain, nonatomic) URLConnectionTaskManager *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
- (void)onFailedRequestOnMainThread:(id)arg1;
- (void)onFinishedDataAnalyzedOnMainThread:(id)arg1;
- (void)onRequestFinish:(id)arg1;
- (void)onThreadAnalyzeNBSMNetworkData:(id)arg1;
- (void)didFailWithError:(id)arg1 withRequest:(id)arg2;
- (void)didReceiveData:(id)arg1 withRequest:(id)arg2;
- (id)findDataRequestObject:(id)arg1;
- (_Bool)hasDataRequestObject:(id)arg1;
- (void)removeConnectionTaskRequest:(id)arg1;
- (void)eraseRequest:(id)arg1;
- (_Bool)cancelRequest:(id)arg1;
- (_Bool)submitRequest:(id)arg1;
- (id)sendRequest:(id)arg1 withType:(long long)arg2 withDelegate:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

