//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QYVIPAuthorityManager : NSObject
{
}

+ (_Bool)isUserHasVIPAuthorityWithoutLOGINSILVERVIP;
+ (_Bool)isUserHasVIPAuthority:(int)arg1;
+ (_Bool)canUserSkipAD:(int)arg1;
+ (_Bool)canUserAccessToVIPDataRate:(int)arg1;
+ (_Bool)canUserAccessToDolby:(int)arg1;
+ (_Bool)canUserPlayVideo:(int)arg1;
+ (id)userUID;
+ (int)userStatusForAds;
+ (int)userStatus;
+ (id)userCookie;

@end

