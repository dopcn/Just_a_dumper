//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UserAgent;

@interface ONESocketConfig : NSObject <NSCopying>
{
    _Bool _isKeepConnect;
    int _userRole;
    unsigned int _connectTimeout;
    unsigned int _loginTimeout;
    unsigned int _readTimeout;
    unsigned int _writeTimeout;
    NSString *_host;
    NSString *_port;
    NSString *_phone;
    NSString *_token;
    UserAgent *_userAgent;
}

+ (id)debugConfig;
+ (id)onenet_userAgent;
@property(retain, nonatomic) UserAgent *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) unsigned int writeTimeout; // @synthesize writeTimeout=_writeTimeout;
@property(nonatomic) unsigned int readTimeout; // @synthesize readTimeout=_readTimeout;
@property(nonatomic) unsigned int loginTimeout; // @synthesize loginTimeout=_loginTimeout;
@property(nonatomic) unsigned int connectTimeout; // @synthesize connectTimeout=_connectTimeout;
@property(nonatomic) _Bool isKeepConnect; // @synthesize isKeepConnect=_isKeepConnect;
@property(nonatomic) int userRole; // @synthesize userRole=_userRole;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)checkValid;
- (id)init;

@end

