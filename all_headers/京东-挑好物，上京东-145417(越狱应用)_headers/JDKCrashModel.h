//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface JDKCrashModel : NSObject <NSCoding>
{
    NSString *_filePath;
    NSString *_clientVersion;
    NSString *_clientBuild;
    NSString *_osVersion;
    NSString *_osBuild;
    NSString *_dsymUUID;
    NSString *_arch;
    NSString *_process;
    NSString *_crashTime;
    NSString *_crashType;
    NSString *_crashReason;
    NSDictionary *_exceptionCodes;
    NSString *_exceptionType;
    NSString *_exceptionName;
    NSString *_exceptionReason;
    NSArray *_exceptionBacktrace;
    NSArray *_threadInfo;
    NSArray *_registerInfo;
    NSString *_pageInfo;
}

+ (id)model;
@property(copy, nonatomic) NSString *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(copy, nonatomic) NSArray *registerInfo; // @synthesize registerInfo=_registerInfo;
@property(copy, nonatomic) NSArray *threadInfo; // @synthesize threadInfo=_threadInfo;
@property(copy, nonatomic) NSArray *exceptionBacktrace; // @synthesize exceptionBacktrace=_exceptionBacktrace;
@property(copy, nonatomic) NSString *exceptionReason; // @synthesize exceptionReason=_exceptionReason;
@property(copy, nonatomic) NSString *exceptionName; // @synthesize exceptionName=_exceptionName;
@property(copy, nonatomic) NSString *exceptionType; // @synthesize exceptionType=_exceptionType;
@property(copy, nonatomic) NSDictionary *exceptionCodes; // @synthesize exceptionCodes=_exceptionCodes;
@property(copy, nonatomic) NSString *crashReason; // @synthesize crashReason=_crashReason;
@property(copy, nonatomic) NSString *crashType; // @synthesize crashType=_crashType;
@property(copy, nonatomic) NSString *crashTime; // @synthesize crashTime=_crashTime;
@property(copy, nonatomic) NSString *process; // @synthesize process=_process;
@property(copy, nonatomic) NSString *arch; // @synthesize arch=_arch;
@property(copy, nonatomic) NSString *dsymUUID; // @synthesize dsymUUID=_dsymUUID;
@property(copy, nonatomic) NSString *osBuild; // @synthesize osBuild=_osBuild;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *clientBuild; // @synthesize clientBuild=_clientBuild;
@property(copy, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

