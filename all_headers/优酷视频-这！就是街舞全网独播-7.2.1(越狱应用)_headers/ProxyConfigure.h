//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ProxyConfigure : NSObject
{
    NSString *_hostDomain;
    NSString *_hostIP;
    NSString *_hostPort;
    NSString *_userName;
    NSString *_password;
    NSString *_proxyType;
}

+ (id)notUseProxyConfig;
@property(retain, nonatomic) NSString *proxyType; // @synthesize proxyType=_proxyType;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *hostPort; // @synthesize hostPort=_hostPort;
@property(retain, nonatomic) NSString *hostIP; // @synthesize hostIP=_hostIP;
@property(retain, nonatomic) NSString *hostDomain; // @synthesize hostDomain=_hostDomain;
- (void).cxx_destruct;

@end

