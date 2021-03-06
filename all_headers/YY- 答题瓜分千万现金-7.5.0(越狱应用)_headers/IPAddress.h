//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface IPAddress : NSObject
{
    long long _failedRetryCount;
    long long _length;
    NSArray *_ips;
    NSString *_host;
}

@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSArray *ips; // @synthesize ips=_ips;
@property(nonatomic) long long length; // @synthesize length=_length;
@property(nonatomic) long long failedRetryCount; // @synthesize failedRetryCount=_failedRetryCount;
- (void).cxx_destruct;
- (id)getIP;
- (void)initData:(id)arg1 IPArray:(id)arg2;
- (void)recordConnectFail;

@end

