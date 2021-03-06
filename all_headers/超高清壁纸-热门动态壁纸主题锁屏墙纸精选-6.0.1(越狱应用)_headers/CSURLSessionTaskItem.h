//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSHTTPURLResponse, NSMutableData, NSURLRequest, NSURLSessionDataTask;
@protocol OS_dispatch_queue;

@interface CSURLSessionTaskItem : NSObject
{
    unsigned int _responseObjectType;
    NSURLSessionDataTask *_urlSessionTask;
    NSURLRequest *_request;
    NSHTTPURLResponse *_httpResponse;
    NSMutableData *_mdataCache;
    CDUnknownBlockType _progress;
    CDUnknownBlockType _result;
    NSDictionary *_param;
    NSObject<OS_dispatch_queue> *_completionQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(copy, nonatomic) CDUnknownBlockType result; // @synthesize result=_result;
@property(copy, nonatomic) CDUnknownBlockType progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSMutableData *mdataCache; // @synthesize mdataCache=_mdataCache;
@property(retain, nonatomic) NSHTTPURLResponse *httpResponse; // @synthesize httpResponse=_httpResponse;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSURLSessionDataTask *urlSessionTask; // @synthesize urlSessionTask=_urlSessionTask;
@property(nonatomic) unsigned int responseObjectType; // @synthesize responseObjectType=_responseObjectType;
- (void).cxx_destruct;
- (long long)totalBytes;
- (void)dealloc;
- (id)init;

@end

