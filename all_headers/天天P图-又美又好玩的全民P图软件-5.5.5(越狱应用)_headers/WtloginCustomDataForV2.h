//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WtloginCustomDataForV2 : NSObject
{
    unsigned int dwLoginAppid;
    unsigned int dwLoginOtherNum;
    unsigned int adwLoginOtherAppid[10];
    unsigned int dwLoginBitmap;
    id loginDelegate;
    _Bool isInProcoess_v2;
    NSString *loginUserAccount;
    NSMutableDictionary *quickLoginDict;
    unsigned char cSmsVerifyLoginFlag;
}

@property unsigned char cSmsVerifyLoginFlag; // @synthesize cSmsVerifyLoginFlag;
@property(retain) NSMutableDictionary *quickLoginDict; // @synthesize quickLoginDict;
@property(copy) NSString *loginUserAccount; // @synthesize loginUserAccount;
@property _Bool isInProcoess_v2; // @synthesize isInProcoess_v2;
@property(retain) id loginDelegate; // @synthesize loginDelegate;
@property unsigned int dwLoginBitmap; // @synthesize dwLoginBitmap;
@property unsigned int dwLoginOtherNum; // @synthesize dwLoginOtherNum;
@property unsigned int dwLoginAppid; // @synthesize dwLoginAppid;
- (id)description;
- (void)dealloc;
- (id)init;

@end

