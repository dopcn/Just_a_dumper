//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "aluDeviceTokenSignInfo.h"

@class NSDictionary, NSString;

@interface aluSsoBasedJumpLoginInfo : aluDeviceTokenSignInfo
{
    NSString *_slaveAppKey;
    NSString *_masterAppKey;
    NSString *_ssoToken;
    NSString *_ssoVersion;
    NSString *_sign;
    NSString *_uuid;
    NSString *_masterT;
    NSString *_hid;
    NSDictionary *_ext;
}

@property(copy, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *hid; // @synthesize hid=_hid;
@property(copy, nonatomic) NSString *masterT; // @synthesize masterT=_masterT;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(copy, nonatomic) NSString *ssoVersion; // @synthesize ssoVersion=_ssoVersion;
@property(copy, nonatomic) NSString *ssoToken; // @synthesize ssoToken=_ssoToken;
@property(copy, nonatomic) NSString *masterAppKey; // @synthesize masterAppKey=_masterAppKey;
@property(copy, nonatomic) NSString *slaveAppKey; // @synthesize slaveAppKey=_slaveAppKey;
- (void).cxx_destruct;

@end

