//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BNHUDRequestMessage.h"

@class NSString;

@interface BNHUDAPIAuthorizeReq : BNHUDRequestMessage
{
    NSString *_appVersion;
    NSString *_hudSdkVersion;
    NSString *_packageName;
}

@property(retain, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(copy, nonatomic) NSString *hudSdkVersion; // @synthesize hudSdkVersion=_hudSdkVersion;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
- (void).cxx_destruct;
- (unsigned long long)messageType;

@end

