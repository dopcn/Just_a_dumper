//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HttpdnsRequestScheduler, NSString;
@protocol HttpDNSDegradationDelegate;

@interface HttpDnsService : NSObject
{
    int _accountID;
    NSString *_secretKey;
    id <HttpDNSDegradationDelegate> _delegate;
    double _timeoutInterval;
    unsigned long long _authTimeoutInterval;
    HttpdnsRequestScheduler *_requestScheduler;
    unsigned long long _authTimeOffset;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)statIfNeeded;
+ (id)sharedInstance;
+ (void)initialize;
@property(nonatomic) unsigned long long authTimeOffset; // @synthesize authTimeOffset=_authTimeOffset;
@property(retain, nonatomic) HttpdnsRequestScheduler *requestScheduler; // @synthesize requestScheduler=_requestScheduler;
@property(nonatomic) unsigned long long authTimeoutInterval; // @synthesize authTimeoutInterval=_authTimeoutInterval;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic, setter=setDelegateForDegradationFilter:) __weak id <HttpDNSDegradationDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *secretKey; // @synthesize secretKey=_secretKey;
@property(nonatomic) int accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)setPreResolveAfterNetworkChanged:(_Bool)arg1;
- (void)setLogEnabled:(_Bool)arg1;
- (void)setExpiredIPEnabled:(_Bool)arg1;
- (void)setHTTPSRequestEnabled:(_Bool)arg1;
- (id)getIpByHostAsyncInURLFormat:(id)arg1;
- (id)getIpsByHostAsync:(id)arg1;
- (id)getIpByHostAsync:(id)arg1;
- (id)getIpByHostInURLFormat:(id)arg1;
- (id)getIpsByHost:(id)arg1;
- (id)getIpByHost:(id)arg1;
- (void)setPreResolveHosts:(id)arg1;
- (void)shareInit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setAuthCurrentTime:(unsigned long long)arg1;
- (id)initWithAccountID:(int)arg1 secretKey:(id)arg2;
- (id)initWithAccountID:(int)arg1;

@end

