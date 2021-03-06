//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SLAPIManager : NSObject
{
}

+ (id)getTagAncchorsWithPage:(long long)arg1 tagId:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)getLiveRoomBubbleConfigWithRoomid:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)getVideoInfoWithVid:(id)arg1 uid:(id)arg2 type:(int)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)getUserCarListWithPage:(long long)arg1 rows:(long long)arg2 type:(long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)getSmallVideoListWithPage:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)liveHotspotWithUnion:(id)arg1 count:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)recommendAnchorsWithPage:(long long)arg1 uid:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)userFocusListWithPage:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)isFocusAnchor:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)unFocusAnchor:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)focusAnchor:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)urlWithPath:(id)arg1;
+ (id)updateProgress:(id)arg1 token:(id)arg2 gid:(id)arg3 appid:(id)arg4 poid:(id)arg5 plat:(id)arg6 deviceId:(id)arg7 uid:(id)arg8 progress:(long long)arg9 rechargeno:(id)arg10 result:(CDUnknownBlockType)arg11;
+ (id)taskProgress:(id)arg1 token:(id)arg2 gid:(id)arg3 appid:(id)arg4 poid:(id)arg5 plat:(id)arg6 deviceId:(id)arg7 uid:(id)arg8 result:(CDUnknownBlockType)arg9;
+ (id)channelPackageData:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (id)getBanners:(id)arg1 bannerSize:(long long)arg2 type:(long long)arg3 from:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)getBanners:(id)arg1 bannerSize:(long long)arg2 type:(long long)arg3 completion:(CDUnknownBlockType)arg4;

@end

