//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface YDUserStatus : NSObject <RCTBridgeModule>
{
    CDUnknownBlockType _isLoginBlock;
    CDUnknownBlockType _getUserIdBlock;
    CDUnknownBlockType _getUserImageURLBlock;
    CDUnknownBlockType _getNickNameBlock;
    CDUnknownBlockType _getLoginCookieBlock;
    CDUnknownBlockType _getSessionCookieBlock;
    CDUnknownBlockType _getCommonInfoBlock;
    CDUnknownBlockType _getCookieStringBlock;
    CDUnknownBlockType _getClientInfoBlock;
}

+ (id)__rct_export__1679;
+ (id)__rct_export__1128;
+ (id)__rct_export__1037;
+ (id)__rct_export__946;
+ (id)__rct_export__855;
+ (id)__rct_export__764;
+ (id)__rct_export__673;
+ (id)__rct_export__582;
+ (id)__rct_export__491;
+ (id)__rct_export__400;
+ (void)load;
+ (id)moduleName;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType getClientInfoBlock; // @synthesize getClientInfoBlock=_getClientInfoBlock;
@property(copy, nonatomic) CDUnknownBlockType getCookieStringBlock; // @synthesize getCookieStringBlock=_getCookieStringBlock;
@property(copy, nonatomic) CDUnknownBlockType getCommonInfoBlock; // @synthesize getCommonInfoBlock=_getCommonInfoBlock;
@property(copy, nonatomic) CDUnknownBlockType getSessionCookieBlock; // @synthesize getSessionCookieBlock=_getSessionCookieBlock;
@property(copy, nonatomic) CDUnknownBlockType getLoginCookieBlock; // @synthesize getLoginCookieBlock=_getLoginCookieBlock;
@property(copy, nonatomic) CDUnknownBlockType getNickNameBlock; // @synthesize getNickNameBlock=_getNickNameBlock;
@property(copy, nonatomic) CDUnknownBlockType getUserImageURLBlock; // @synthesize getUserImageURLBlock=_getUserImageURLBlock;
@property(copy, nonatomic) CDUnknownBlockType getUserIdBlock; // @synthesize getUserIdBlock=_getUserIdBlock;
@property(copy, nonatomic) CDUnknownBlockType isLoginBlock; // @synthesize isLoginBlock=_isLoginBlock;
- (void).cxx_destruct;
- (void)getClientInfo:(CDUnknownBlockType)arg1;
- (void)getFullUserStatus:(CDUnknownBlockType)arg1;
- (void)getCookieString:(CDUnknownBlockType)arg1;
- (void)getCommonInfo:(CDUnknownBlockType)arg1;
- (void)getSessionCookie:(CDUnknownBlockType)arg1;
- (void)getLoginCookie:(CDUnknownBlockType)arg1;
- (void)getNickName:(CDUnknownBlockType)arg1;
- (void)getUserImageUrl:(CDUnknownBlockType)arg1;
- (void)getUserID:(CDUnknownBlockType)arg1;
- (void)isLogin:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

