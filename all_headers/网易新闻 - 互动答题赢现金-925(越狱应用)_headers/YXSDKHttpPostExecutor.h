//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSMutableData, NSString, NSURLConnection;

@interface YXSDKHttpPostExecutor : NSObject <NSURLConnectionDataDelegate>
{
    _Bool _isImageGetRequest;
    _Bool _useImageDataCache;
    NSMutableData *resultData;
    CDUnknownBlockType finishCallbackBlock;
    long long responseCode;
    CDUnknownBlockType errorCallBack;
    NSURLConnection *_connection;
    long long _timeTag;
}

+ (void)clearAllConnections;
+ (void)setHeaders:(id)arg1 forRequest:(id)arg2;
+ (long long)postAndAcceptJsonWithUrlStr:(id)arg1 paramsData:(id)arg2 headers:(id)arg3 finishCallbackBlock:(CDUnknownBlockType)arg4 errorCallBack:(CDUnknownBlockType)arg5;
+ (long long)postAndAcceptJsonWithUrlStr:(id)arg1 params:(id)arg2 headers:(id)arg3 finishCallbackBlock:(CDUnknownBlockType)arg4 errorCallBack:(CDUnknownBlockType)arg5;
+ (long long)getImageData:(id)arg1 finishCallbackBlock:(CDUnknownBlockType)arg2 errorCallBack:(CDUnknownBlockType)arg3;
+ (long long)postExecuteWithUrlStr:(id)arg1 method:(id)arg2 params:(id)arg3 headers:(id)arg4 finishCallbackBlock:(CDUnknownBlockType)arg5 errorCallBack:(CDUnknownBlockType)arg6;
+ (long long)postExecuteWithUrlStr:(id)arg1 formData:(id)arg2 filedata:(id)arg3 fileName:(id)arg4 fileContentType:(id)arg5 headers:(id)arg6 finishCallbackBlock:(CDUnknownBlockType)arg7 errorCallBack:(CDUnknownBlockType)arg8;
+ (void)abort:(long long)arg1;
@property(nonatomic) _Bool useImageDataCache; // @synthesize useImageDataCache=_useImageDataCache;
@property(nonatomic) _Bool isImageGetRequest; // @synthesize isImageGetRequest=_isImageGetRequest;
@property(nonatomic) long long timeTag; // @synthesize timeTag=_timeTag;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) CDUnknownBlockType errorCallBack; // @synthesize errorCallBack;
@property(nonatomic) long long responseCode; // @synthesize responseCode;
@property(copy, nonatomic) CDUnknownBlockType finishCallbackBlock; // @synthesize finishCallbackBlock;
@property(retain, nonatomic) NSMutableData *resultData; // @synthesize resultData;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)addToQueen;
- (void)cancelRequest;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

