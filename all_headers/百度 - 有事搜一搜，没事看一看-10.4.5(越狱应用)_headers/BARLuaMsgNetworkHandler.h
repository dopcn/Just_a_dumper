//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BARMsgBaseHandler.h"

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface BARLuaMsgNetworkHandler : BARMsgBaseHandler
{
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSMutableArray *_requests;
}

@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
- (void).cxx_destruct;
- (void)requestDidFinished:(id)arg1 response:(id)arg2;
- (void)requestDidFailed:(id)arg1 error:(unsigned long long)arg2;
- (void)sendRequest:(id)arg1;
- (_Bool)checkNetwork:(id)arg1;
- (void)handleMessage:(id)arg1;
- (id)init;

@end

