//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IOMTool : NSObject
{
}

+ (struct CGRect)safeAreaFrame;
+ (double)safeAreaBottomHeight;
+ (double)tabBarHeight;
+ (double)statusBarHeight;
+ (_Bool)isFirstShowMyOrderGuide;
+ (id)getMyOrderAppVersion;
+ (void)saveMyOrderAppVersion:(id)arg1;
+ (_Bool)isFirstOpenApp;
+ (id)getAppVersion;
+ (void)saveAppVersion:(id)arg1;
+ (_Bool)isSeckillUrl:(id)arg1;
+ (void)executeCallback:(CDUnknownBlockType)arg1 status:(long long)arg2;
+ (void)requestMicAuthorization:(CDUnknownBlockType)arg1;
+ (void)requestCameraAuthorization:(CDUnknownBlockType)arg1;

@end

