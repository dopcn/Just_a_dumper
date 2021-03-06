//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, QBDNSCache, QBDNSHTTPDESResolver, QBDNSUDPResolver;
@protocol OS_dispatch_queue;

@interface QBDNSManager : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _dnsEnabled;
    long long actualErrorDNSCount;
    NSDate *actualErrorDNSDate;
    NSDate *_detectServerDate;
    _Bool _dnsServerEnabled;
    QBDNSCache *_cache;
    QBDNSUDPResolver *_defaultResolver;
    QBDNSHTTPDESResolver *_httpDNSResolver;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (long long)isNetworkChanged:(_Bool)arg1;
- (void)loadData;
- (_Bool)isHTTPDNSEnabled;
- (long long)badDateInterVal;
- (void)IBSDNSSettingChanged:(id)arg1;
- (id)init;
- (id)queryInternalWithDomain:(id)arg1 resolver:(id)arg2 detect:(_Bool)arg3;
- (id)query:(id)arg1 status:(long long)arg2;
- (id)currentSystemDNSServer;
- (id)currentSystemDNSAddress:(id)arg1 err:(id *)arg2;
- (void)handleBadRequest:(id)arg1 status:(long long)arg2;
- (void)handleResponse:(id)arg1;
- (void)detectDNSStatus;
- (void)handleActualErrorDNS:(long long)arg1;
- (id)newQBDNSRequest:(id)arg1;
- (void)storeCache;
- (id)qbDNSRequest:(id)arg1 cached:(_Bool)arg2;

@end

