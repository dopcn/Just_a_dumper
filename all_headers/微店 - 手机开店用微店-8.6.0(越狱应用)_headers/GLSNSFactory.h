//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GLSNSFactory : NSObject
{
}

+ (void)shareVideoLinkToWeChat:(id)arg1 description:(id)arg2 image:(id)arg3 video:(id)arg4 scene:(_Bool)arg5 delegate:(id)arg6;
+ (void)shareImageToQQ:(id)arg1 previewImageData:(id)arg2 delegate:(id)arg3;
+ (void)shareImageToQQ:(id)arg1 previewImageData:(id)arg2;
+ (void)shareLinkToQQ:(id)arg1 title:(id)arg2 description:(id)arg3 image:(id)arg4 isToQZone:(_Bool)arg5 delegate:(id)arg6;
+ (void)shareLinkToQQ:(id)arg1 title:(id)arg2 description:(id)arg3 image:(id)arg4 isToQZone:(_Bool)arg5;
+ (void)shareLinkToSina:(id)arg1 title:(id)arg2 description:(id)arg3 image:(id)arg4 delegate:(id)arg5;
+ (void)shareLinkToSina:(id)arg1 title:(id)arg2 description:(id)arg3 image:(id)arg4;
+ (void)shareImageToWeChat:(id)arg1 scene:(_Bool)arg2 delegate:(id)arg3;
+ (void)shareImageToWeChat:(id)arg1 scene:(_Bool)arg2;
+ (_Bool)shareToMiniProgramWebpageUrl:(id)arg1 userName:(id)arg2 path:(id)arg3 title:(id)arg4 Description:(id)arg5 ThumbImage:(id)arg6 hdImageData:(id)arg7 withShareTicket:(_Bool)arg8 miniProgramType:(unsigned long long)arg9 InScene:(unsigned long long)arg10 delegate:(id)arg11;
+ (void)shareLinkToWeChat:(id)arg1 title:(id)arg2 description:(id)arg3 thumbImage:(id)arg4 scene:(_Bool)arg5 delegate:(id)arg6;
+ (void)shareLinkToWeChat:(id)arg1 title:(id)arg2 description:(id)arg3 thumbImage:(id)arg4 scene:(_Bool)arg5;
+ (_Bool)isClientInstalledForPlatform:(int)arg1;
+ (_Bool)handleOpenUrl:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
+ (id)getSNSPlatformByType:(int)arg1;

@end

