//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QZUploadRespPacket.h"

@class NSArray, NSString;

@interface QZUploadHandShakeResp : QZUploadRespPacket
{
    NSArray *ipList;
    NSArray *_ipList;
    NSString *clientIp;
    long long _serverTime;
}

@property(nonatomic) long long serverTime; // @synthesize serverTime=_serverTime;
@property(retain, nonatomic) NSString *clientIp; // @synthesize clientIp;
@property(retain, nonatomic) NSArray *ipList; // @synthesize ipList=_ipList;
- (void).cxx_destruct;
- (void)decodeBody:(void *)arg1;
- (void)dealloc;

@end

