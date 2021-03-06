//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HttpDNSTCPSpeedTester, JDJRHttpDNSCache, JDJRHttpDNSManager, JDJRHttpDNSTool, NSArray, NSMutableDictionary, NSOperationQueue, NSString;

@interface JDJRHttpDNSClient : NSObject
{
    JDJRHttpDNSManager *_httpDnsManager;
    JDJRHttpDNSCache *_httpDnsCache;
    NSArray *_httpDnsPack;
    JDJRHttpDNSTool *_httpDnsTool;
    NSMutableDictionary *_runningTask;
    NSOperationQueue *_taskQueue;
    NSString *_serverIP;
    NSString *_serverIP_0;
    int serverIPIndex;
    HttpDNSTCPSpeedTester *_speedTester;
    NSString *http_dns_server;
}

- (void).cxx_destruct;
- (void)dealloc;
- (char *)getServerIPFileName;
- (id)getDefaultServerIP;
- (id)retryUpdateHttpDNSServerIP;
- (void)updateHttpDNSServerIP:(CDUnknownBlockType)arg1;
- (void)cacheIPsbyDomain:(id)arg1;
- (id)getIPbyDomain:(id)arg1;
- (void)getIpByDomain:(id)arg1 timeoutInterval:(double)arg2 complete:(CDUnknownBlockType)arg3;
- (void)cancelTimer:(id)arg1;
- (id)init;

@end

