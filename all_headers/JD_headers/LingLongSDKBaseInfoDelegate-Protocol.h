//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol LingLongSDKBaseInfoDelegate <NSObject>
@property(readonly, nonatomic) NSString *firmwareVersion;
@property(readonly, nonatomic) NSString *bizid;
@property(readonly, nonatomic) NSString *appid;
@property(readonly, nonatomic) NSString *sn;
@property(readonly, nonatomic) NSString *vboxid;
@property(readonly, nonatomic) NSString *openid;
@property(readonly, nonatomic) NSString *nickname;
@property(readonly, nonatomic) NSString *userid;
@property(retain, nonatomic) NSString *version;
@property(retain, nonatomic) NSString *UDID;
@property(retain, nonatomic) NSString *baseurl;
- (_Bool)isInTheWifiOfBSSID:(NSString *)arg1;
@end

