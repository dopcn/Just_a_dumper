//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AvatarHelper : NSObject
{
}

+ (void)updateYixinImage:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)updateLocalBKURL:(id)arg1 timetag:(int)arg2;
+ (void)updateLocalPhotoURL:(id)arg1 timetag:(int)arg2;
+ (id)teamMemberForTeamPhoto:(id)arg1;
+ (id)allTeamMemberForTeamPhoto:(id)arg1;
+ (void)setCachedPhotoName:(id)arg1 forTeamID:(id)arg2;
+ (id)cachedPhotoPathForTeam:(id)arg1;
+ (id)filepathForAvatarURL:(id)arg1;
+ (id)avatarURLForGamePlayer:(id)arg1;
+ (id)gameIconURL:(id)arg1;
+ (id)thumbAvatarURL:(id)arg1;
+ (id)avatarURLForTeam:(id)arg1;
+ (id)avatarURLForPAIdentifyIcon:(id)arg1 iconScale:(id)arg2;
+ (id)avatarURLForPublicAccount:(id)arg1;
+ (void)getBlurAvatarWithUserID:(id)arg1 radius:(double)arg2 iterations:(unsigned long long)arg3 image:(CDUnknownBlockType)arg4;
+ (void)getBlurAvatarWithUserID:(id)arg1 image:(CDUnknownBlockType)arg2;
+ (void)getAvatarWithUserID:(id)arg1 image:(CDUnknownBlockType)arg2;
+ (void)getBlurAvatarWithURL:(id)arg1 radius:(double)arg2 iterations:(unsigned long long)arg3 image:(CDUnknownBlockType)arg4;
+ (void)getBlurAvatarWithURL:(id)arg1 image:(CDUnknownBlockType)arg2;
+ (void)getAvatarWithURL:(id)arg1 image:(CDUnknownBlockType)arg2;
+ (id)getBlurAvatarCacheWithURL:(id)arg1 radius:(double)arg2 iterations:(unsigned long long)arg3;
+ (id)getBlurAvatarCacheWithURL:(id)arg1;
+ (id)getBlurAvatarCacheWithUserID:(id)arg1;
+ (id)defaultIconUrl:(long long)arg1;
+ (id)defaultIconFromUid:(id)arg1;
+ (id)getAvatarCacheWithUserID:(id)arg1;
+ (id)randomVideoTrackDefaultIcon:(long long)arg1;
+ (id)defaultIcon:(long long)arg1;
+ (id)avatarURLForUserID:(id)arg1;

@end

