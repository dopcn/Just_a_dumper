//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QXShenCePingback : NSObject
{
}

+ (void)quizWithEventId:(id)arg1 questionId:(id)arg2 order:(id)arg3 step:(id)arg4 subStep:(id)arg5 statusBit:(id)arg6 content:(id)arg7;
+ (void)quizWithEventId:(id)arg1 questionId:(id)arg2 order:(id)arg3 step:(id)arg4 subStep:(id)arg5 statusBit:(id)arg6;
+ (void)playSuccessPingback:(id)arg1 subStep:(id)arg2 errorCode:(id)arg3 stream_name:(id)arg4 room_id:(id)arg5;
+ (void)pingBackStartApp;
+ (void)paopaoSDKQosPingback:(id)arg1;
+ (void)paopaoSDKStatPingback:(id)arg1;
+ (id)getPlayerVersionNumber;
+ (void)sendDataToUrl:(id)arg1 params:(id)arg2;
+ (void)pingBackPlayWithTm:(long long)arg1 liveId:(id)arg2 roomId:(id)arg3 anchorId:(id)arg4 live_mode:(id)arg5 tagEnd:(id)arg6 vfrm:(id)arg7 xc_erf:(id)arg8 xc_dlfs:(id)arg9;
+ (void)chatromInitTime:(double)arg1:(double)arg2:(double)arg3:(double)arg4:(double)arg5 getUrlFromWeb:(_Bool)arg6;
+ (id)dicWithBase;

@end

