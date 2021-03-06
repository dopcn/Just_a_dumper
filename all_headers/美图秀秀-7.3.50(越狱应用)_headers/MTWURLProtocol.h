//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLProtocol.h>

@class NSMutableData, NSString, NSThread, NSURLSession;

@interface MTWURLProtocol : NSURLProtocol
{
    NSURLSession *_session;
    NSMutableData *_data;
    NSThread *_clientThread;
    NSString *_clientModel;
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
@property(retain) NSString *clientModel; // @synthesize clientModel=_clientModel;
@property(retain) NSThread *clientThread; // @synthesize clientThread=_clientThread;
@property(retain) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)callBackMethodBlock:(CDUnknownBlockType)arg1;
- (void)callBackClientInTheSameThreadAndModelWithBlocl:(CDUnknownBlockType)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)stopLoading;
- (void)startLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

