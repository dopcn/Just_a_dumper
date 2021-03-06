//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface LineMusicScheme : NSObject
{
}

+ (void)beforeExecuteWithOption:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (Class)ringtoneViewControllerClass;
+ (void)executeSchemeForRingbacktoneAvailable:(id)arg1;
+ (void)executeSchemeForRingtoneAvailable:(id)arg1;
+ (void)executeSchemeForRingbacktone:(id)arg1 decryptionKey:(id)arg2 salt:(id)arg3 musicInfo:(id)arg4;
+ (void)executeSchemeForRingtone:(id)arg1 decryptionKey:(id)arg2 salt:(id)arg3 musicInfo:(id)arg4;
+ (void)executeSchemeForProfile:(id)arg1;
+ (void)executeSchemeForTimeline:(id)arg1;
+ (void)executeWithURI:(id)arg1 sourceApplication:(id)arg2 options:(long long)arg3;
+ (long long)scheme;
+ (id)lineMusicForShop;
+ (id)lineMusicForRingbacktoneWithTrackId:(id)arg1;
+ (id)lineMusicForRingtoneWithTrackId:(id)arg1;
+ (id)lineMusicForRingbacktone;
+ (id)lineMusicForRingtone;
+ (id)lineMusicURLShareForChat:(id)arg1;
+ (id)lineMusicURLShareForTimeline;
+ (id)lineMusicURLShareForProfilePopup;
+ (_Bool)needInstallLineMusicWithAfterMoveToStoreBlock:(CDUnknownBlockType)arg1;
+ (_Bool)needInstallLineMusic;
+ (void)openLineMusicShop;
+ (void)openLineMusicForRingbacktoneWithTrackId:(id)arg1;
+ (void)openLineMusicForRingtoneWithTrackId:(id)arg1;
+ (void)openLineMusicForRingbacktone;
+ (void)openLineMusicForRingtone;
+ (void)openLineMusicForTimeline;
+ (void)openLineMusicForProfilePopup;
+ (_Bool)canBeHandledResourcePath:(id)arg1;
+ (id)lineMusicScheme;

@end

