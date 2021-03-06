//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FXBaseGetInput.h"

@class NSNumber, NSString;

@interface FXMobileLiveBasePostInput : FXBaseGetInput
{
    NSNumber *_appid;
    NSString *_token;
    NSString *_pid;
    NSString *_device;
    NSString *_uuid;
    NSNumber *_times;
    NSNumber *_channel;
    NSString *_sysVersion;
}

@property(copy, nonatomic) NSString *sysVersion; // @synthesize sysVersion=_sysVersion;
@property(retain, nonatomic) NSNumber *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSNumber *times; // @synthesize times=_times;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *device; // @synthesize device=_device;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSNumber *appid; // @synthesize appid=_appid;
- (void).cxx_destruct;
- (void)generateSignString;
- (void)setIsGetRequest;
- (id)init;

@end

