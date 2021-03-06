//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TCAPIRequestDelegate-Protocol.h"
#import "TencentApiInterfaceDelegate-Protocol.h"
#import "TencentSessionDelegate-Protocol.h"

@class NSString, TencentOAuth;

@interface QQCallAuth : NSObject <TencentSessionDelegate, TCAPIRequestDelegate, TencentApiInterfaceDelegate>
{
    TencentOAuth *_tencentAuth;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)defaultQQCallAuth;
@property(retain, nonatomic) TencentOAuth *tencentAuth; // @synthesize tencentAuth=_tencentAuth;
- (void).cxx_destruct;
- (id)imageToData:(id)arg1;
- (id)reSizeImage:(id)arg1 toSize:(struct CGSize)arg2;
- (id)WXGetScaleImage:(id)arg1;
- (void)tencentDidNotNetWork;
- (void)tencentDidNotLogin:(_Bool)arg1;
- (void)tencentDidLogin;
- (void)handleSendResult:(int)arg1;
- (void)sendQQZoneMediaInfo:(id)arg1 Title:(id)arg2 Desc:(id)arg3 Url:(id)arg4;
- (void)sendQQMediaInfo:(id)arg1 Title:(id)arg2 Desc:(id)arg3 Url:(id)arg4;
- (void)sendQQZoneOnePhoto:(id)arg1;
- (void)sendQQOnePhoto:(id)arg1;
- (_Bool)isQQZoneSetUp;
- (_Bool)isQQSetUp;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

