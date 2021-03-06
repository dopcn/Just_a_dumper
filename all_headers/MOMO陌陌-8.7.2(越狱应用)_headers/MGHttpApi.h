//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MGHttpApi : NSObject
{
}

+ (void)checkHostNameWithName:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
+ (void)dataStaticWithSource:(id)arg1 enterGameType:(id)arg2 costTime:(id)arg3 loadStatus:(id)arg4 loadMsg:(id)arg5 target:(id)arg6 okSelector:(SEL)arg7 errSelector:(SEL)arg8 failSelector:(SEL)arg9;
+ (void)clickDataStaticWithlocationID:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
+ (void)getFollowWithRoomStatus:(long long)arg1 target:(id)arg2 remoteId:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
+ (void)buyDecoratorsWithMaskId:(id)arg1 productid:(id)arg2 momoneyTips:(long long)arg3 type:(id)arg4 roomStatus:(long long)arg5 token:(id)arg6 target:(id)arg7 okSelector:(SEL)arg8 errSelector:(SEL)arg9 failSelector:(SEL)arg10;
+ (void)getDecoratorsWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
+ (void)setGiftsWithTarget:(id)arg1 worthIndex:(long long)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
+ (void)sendIntoRoomGiftWithToMomoid:(id)arg1 selfMomoId:(id)arg2 productId:(id)arg3 momoneyTips:(long long)arg4 noFreeTips:(long long)arg5 pa:(id)arg6 type:(id)arg7 roomStatus:(long long)arg8 target:(id)arg9 okSelector:(SEL)arg10 errSelector:(SEL)arg11 failSelector:(SEL)arg12;
+ (void)getIntoRoomGiftsWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
+ (void)getVideoGiftsWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
+ (void)getGiftsListWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
+ (void)getGiftsWithTarget:(id)arg1 roomStatus:(long long)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
+ (void)sendGiftWithToMomoid:(id)arg1 productId:(id)arg2 momoneyTips:(long long)arg3 noFreeTips:(long long)arg4 pa:(id)arg5 type:(id)arg6 roomStatus:(long long)arg7 target:(id)arg8 okSelector:(SEL)arg9 errSelector:(SEL)arg10 failSelector:(SEL)arg11;
+ (void)shareRoom:(id)arg1 roomType:(long long)arg2 toFriend:(id)arg3 shareAction:(long long)arg4 type:(long long)arg5 target:(id)arg6 okSelector:(SEL)arg7 errSelector:(SEL)arg8 failSelector:(SEL)arg9;
+ (void)getGameServerWithRoomId:(id)arg1 orMomoId:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
+ (void)getRoomTypeStateWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
+ (void)getRemoteVersion:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
+ (void)getNearPlayersWithType:(long long)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
+ (void)getNearGameServerWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
+ (void)getOtherProfileWithTarget:(id)arg1 otherMomoId:(id)arg2 roomStatus:(long long)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
+ (void)getProfileWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
+ (void)loginWithRoomType:(id)arg1 version:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
+ (void)getCheckUrlWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
+ (void)postRequest:(id)arg1 requestIdentifier:(id)arg2 param:(id)arg3 target:(id)arg4 okSelector:(SEL)arg5 errSelector:(SEL)arg6 failSelector:(SEL)arg7;

@end

