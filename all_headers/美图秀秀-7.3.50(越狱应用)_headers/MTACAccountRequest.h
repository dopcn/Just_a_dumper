//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTACAccountRequest : NSObject
{
}

+ (void)sendRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)globalParams;
+ (id)domainString;
+ (void)requestGrantByAccessToken:(id)arg1 hostClientId:(id)arg2 hostClientSecret:(id)arg3 toGrantClientId:(id)arg4 toGrantClientSecret:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
+ (void)requestBlurAccessToken:(CDUnknownBlockType)arg1;
+ (void)requestDeviceCredibility:(CDUnknownBlockType)arg1;
+ (void)refreshAccessToken:(CDUnknownBlockType)arg1;
+ (void)statisticsAccountActive;
+ (void)requestIsAgeVerifide:(CDUnknownBlockType)arg1;
+ (void)requestAuthList:(CDUnknownBlockType)arg1;

@end

