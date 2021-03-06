//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASIFormDataRequest;

@interface BFSNetManager : NSObject
{
    CDUnknownBlockType completeBlock_;
    CDUnknownBlockType errorBlock_;
    ASIFormDataRequest *request_;
}

+ (void)clearCache;
+ (id)requestWithURL:(id)arg1 parameters:(id)arg2 httpMethod:(long long)arg3 receiveDataType:(long long)arg4 completeBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6 cachePolicy:(long long)arg7;
+ (id)requestWithURL:(id)arg1 parameters:(id)arg2 httpMethod:(long long)arg3 receiveDataType:(long long)arg4 completeBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
@property(retain, nonatomic) ASIFormDataRequest *request_; // @synthesize request_;
- (void).cxx_destruct;
- (void)startSynchronous;
- (void)startAsynchronous;
- (void)shouldCompressRequestBody:(_Bool)arg1;
- (void)addData:(id)arg1 forKey:(id)arg2 withFileName:(id)arg3 contentType:(id)arg4;
- (void)addData:(id)arg1 forKey:(id)arg2;
- (void)addFile:(id)arg1 forKey:(id)arg2;
- (void)addRequestBody:(id)arg1;
- (void)addRequestHeader:(id)arg1 value:(id)arg2;
- (id)getHTTPRequestData:(id)arg1 dataType:(long long)arg2 error:(id *)arg3;
- (id)escape:(id)arg1;
- (id)getHTTPRequestWithURL:(id)arg1 httpMethod:(long long)arg2 parameters:(id)arg3 cachePolicy:(long long)arg4;
- (id)initWithRequest:(id)arg1 parameters:(id)arg2 httpMethod:(long long)arg3 receiveDataType:(long long)arg4 completeBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6 cachePolicy:(long long)arg7;

@end

