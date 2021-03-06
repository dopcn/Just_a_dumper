//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "aluJsonableObject.h"

@class NSDictionary, NSString;

@interface aluBaseInfo : aluJsonableObject
{
    NSString *_locale;
    NSString *_site;
    NSString *_appName;
    NSString *_appVersion;
    NSString *_deviceId;
    NSString *_ttid;
    NSString *_utdid;
    NSString *_t;
    NSString *_useDeviceToken;
    NSString *_deviceTokenKey;
    NSString *_deviceTokenSign;
    NSString *_deviceName;
    NSString *_itemId;
    NSString *_token;
    NSDictionary *_ext;
}

@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *deviceTokenSign; // @synthesize deviceTokenSign=_deviceTokenSign;
@property(copy, nonatomic) NSString *deviceTokenKey; // @synthesize deviceTokenKey=_deviceTokenKey;
@property(copy, nonatomic) NSString *useDeviceToken; // @synthesize useDeviceToken=_useDeviceToken;
@property(copy, nonatomic) NSString *t; // @synthesize t=_t;
@property(copy, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(copy, nonatomic) NSString *ttid; // @synthesize ttid=_ttid;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *site; // @synthesize site=_site;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *sdkVersion;

@end

