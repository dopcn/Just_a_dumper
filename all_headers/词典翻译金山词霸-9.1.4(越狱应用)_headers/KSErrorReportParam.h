//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KSErrorReportParam : NSObject
{
    NSString *_uid;
    NSString *_error_log;
    NSString *_uuid;
    NSString *_nickName;
    NSString *_mobileNumber;
    NSString *_osVersion;
    NSString *_appVersion;
    long long _httpCode;
    NSString *_idfa;
    NSString *_client;
    NSString *_v;
    NSString *_sv;
    NSString *_timestamp;
    NSString *_failureUrl;
}

@property(copy, nonatomic) NSString *failureUrl; // @synthesize failureUrl=_failureUrl;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *sv; // @synthesize sv=_sv;
@property(copy, nonatomic) NSString *v; // @synthesize v=_v;
@property(copy, nonatomic) NSString *client; // @synthesize client=_client;
@property(copy, nonatomic) NSString *idfa; // @synthesize idfa=_idfa;
@property(nonatomic) long long httpCode; // @synthesize httpCode=_httpCode;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *mobileNumber; // @synthesize mobileNumber=_mobileNumber;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *error_log; // @synthesize error_log=_error_log;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;

@end

