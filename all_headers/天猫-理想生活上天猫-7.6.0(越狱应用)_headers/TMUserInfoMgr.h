//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TMUserInfoMgr : NSObject
{
}

+ (id)lastLoginUserName;
+ (void)restoreUserInfoToTOPByUserNick:(id)arg1;
+ (void)removeLastLoginUserName;
+ (void)saveLastLoginUserName:(id)arg1;
+ (id)lastLoginUserId;
+ (void)saveLastLoginUserId:(id)arg1;
+ (id)userToken;

@end

