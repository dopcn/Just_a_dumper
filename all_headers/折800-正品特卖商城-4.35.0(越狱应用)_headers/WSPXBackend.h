//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WSPXBackend : NSObject
{
    _Bool _regexNegate;
    _Bool _forceWzip;
    _Bool _useWebp;
    long long _port;
    long long _protocol;
    long long _genericDomainProto;
    long long _regexMatchType;
    long long _backendType;
    long long _compressionType;
    long long _connectTimeout;
    NSString *_regex;
    NSString *_host;
    NSString *_backupHostIP;
    NSString *_genericDomainPrefix;
}

@property(copy, nonatomic) NSString *genericDomainPrefix; // @synthesize genericDomainPrefix=_genericDomainPrefix;
@property(copy, nonatomic) NSString *backupHostIP; // @synthesize backupHostIP=_backupHostIP;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(copy, nonatomic) NSString *regex; // @synthesize regex=_regex;
@property(nonatomic) _Bool useWebp; // @synthesize useWebp=_useWebp;
@property(nonatomic) _Bool forceWzip; // @synthesize forceWzip=_forceWzip;
@property(nonatomic) long long connectTimeout; // @synthesize connectTimeout=_connectTimeout;
@property(nonatomic) long long compressionType; // @synthesize compressionType=_compressionType;
@property(nonatomic) long long backendType; // @synthesize backendType=_backendType;
@property(nonatomic) long long regexMatchType; // @synthesize regexMatchType=_regexMatchType;
@property(nonatomic) _Bool regexNegate; // @synthesize regexNegate=_regexNegate;
@property(nonatomic) long long genericDomainProto; // @synthesize genericDomainProto=_genericDomainProto;
@property(nonatomic) long long protocol; // @synthesize protocol=_protocol;
@property(nonatomic) long long port; // @synthesize port=_port;
- (void).cxx_destruct;
- (_Bool)hasNilContent;
- (id)description;
- (id)init;

@end

