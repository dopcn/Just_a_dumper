//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface aluGetRetrievePwdH5UrlInfo : NSObject
{
    NSString *_wirelessEnvm;
    NSString *_umidToken;
    NSString *_deviceTokenKey;
    NSString *_hid;
    NSString *_appVersion;
    NSString *_appKey;
    NSString *_timestamp;
    NSString *_loginSign;
    NSString *_sdkVersion;
}

@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *loginSign; // @synthesize loginSign=_loginSign;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *hid; // @synthesize hid=_hid;
@property(copy, nonatomic) NSString *deviceTokenKey; // @synthesize deviceTokenKey=_deviceTokenKey;
@property(copy, nonatomic) NSString *umidToken; // @synthesize umidToken=_umidToken;
@property(copy, nonatomic) NSString *wirelessEnvm; // @synthesize wirelessEnvm=_wirelessEnvm;
- (void).cxx_destruct;

@end

