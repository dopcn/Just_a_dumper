//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSMutableArray, NSString, NVLocalDnsTask;

@interface NVLocalDNS : NSObject <NSURLSessionDataDelegate, NSURLSessionTaskDelegate>
{
    NSString *name;
    NSMutableArray *tasks;
    double startTime;
    double resetTime;
    NVLocalDnsTask *_httpsTask;
    double _httpsStartTime;
}

+ (id)wifiDns;
+ (id)mobileDns;
@property(nonatomic) double httpsStartTime; // @synthesize httpsStartTime=_httpsStartTime;
@property(retain, nonatomic) NVLocalDnsTask *httpsTask; // @synthesize httpsTask=_httpsTask;
@property(nonatomic) double resetTime; // @synthesize resetTime;
@property(nonatomic) double startTime; // @synthesize startTime;
@property(retain, nonatomic) NSMutableArray *tasks; // @synthesize tasks;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (void)dealloc;
- (void)httpresponse:(id)arg1 task:(id)arg2 data:(id)arg3 didCompleteWithError:(id)arg4;
- (void)httpsconn:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)sendIpTxtHttps;
- (void)taskStatusChanged;
- (void)resetDns;
- (void)start;
- (id)getDomainIps;
- (void)writeIps:(id)arg1;
@property(readonly, nonatomic) NSString *host; // @dynamic host;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

