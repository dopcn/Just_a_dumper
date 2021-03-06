//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSInputStream, NSMutableArray, NSMutableData, NSMutableDictionary, NSRunLoop, NSString, NSURL, NSURLRequest;
@protocol NALHttpBodySendDelegate, SPDYRequestDataDelegate;

@interface NWSPDYRequest : NSObject
{
    id <NALHttpBodySendDelegate> _httpBodySendDelegate;
    NSInputStream *_httpBodyStream;
    NSRunLoop *_httpBodyStreamReadingRunloop;
    NSMutableDictionary *_spdyHeaders;
    NSMutableArray *_areaArray;
    NSMutableData *_stringArena;
    long long _capacity;
    char **_nameValues;
    NSURL *_hostURL;
    NSURL *_orginURL;
    _Bool _cancel;
    unsigned short _port;
    id <SPDYRequestDataDelegate> _delegete;
    id _connection;
    id _hostSessionMgr;
    NSURLRequest *_originRequest;
    struct NAL_request_t *_nalRequest;
    NSString *_ip;
}

+ (id)readStreamThread;
+ (void)readStreamRun:(id)arg1;
+ (void)initialize;
@property _Bool cancel; // @synthesize cancel=_cancel;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(nonatomic) struct NAL_request_t *nalRequest; // @synthesize nalRequest=_nalRequest;
@property(nonatomic) __weak NSURLRequest *originRequest; // @synthesize originRequest=_originRequest;
@property(nonatomic) __weak id hostSessionMgr; // @synthesize hostSessionMgr=_hostSessionMgr;
@property(nonatomic) __weak id connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <SPDYRequestDataDelegate> delegete; // @synthesize delegete=_delegete;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)setHttpBodySendCallback:(id)arg1;
- (void)dataCollect:(struct NAL_request_count_t *)arg1;
- (void)didLoadWithError:(id)arg1 call:(_Bool)arg2;
- (void)didLoadFinish;
- (void)didLoadData:(id)arg1;
- (void)didReceiveResponse:(id)arg1 withStatusCode:(long long)arg2;
- (void)cancelRequest;
- (void)_unscheduleNSInputStream;
- (void)_scheduleNSInputStream;
- (id)initWithURLRequest:(id)arg1 URLConnection:(id)arg2 hostSessionMgr:(id)arg3 delegate:(id)arg4;
- (id)allSPDYHeaderFields:(id)arg1;
- (_Bool)hasSuffix:(id)arg1;
- (char *)copyStringToBuffer:(id)arg1;
- (void)fixArena:(long long)arg1;
- (struct NAL_request_t *)nalRequestCreate:(id)arg1;

@end

