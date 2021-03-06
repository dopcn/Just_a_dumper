//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDApiBase.h"

@interface MDSettingApi : MDApiBase
{
}

- (void)setCircleCommentPushState:(_Bool)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)updateMomoLivePushSettingState:(_Bool)arg1 taget:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)setLikePushDisableState:(_Bool)arg1 withTarget:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)setFeedVideoSharePushDisableState:(_Bool)arg1 withTarget:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)queryBetaConfig;
- (void)queryHongbaoNotificationInSingleChat:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)uploadTrusyWifiInfo:(id)arg1 infoArray:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)uploadWifiInfo:(id)arg1 infoArray:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)rateFeedReply:(id)arg1 ticket:(id)arg2 opNum:(id)arg3 satisfied:(_Bool)arg4 okSelector:(SEL)arg5 errSelector:(SEL)arg6 failSelector:(SEL)arg7;
- (void)uploadNewEmail:(id)arg1 email:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)verifyCheckCodeAndPwd:(id)arg1 verifyCode:(id)arg2 password:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)queryVerifyCodeForChangeEmail:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)checkBindPhone:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)canChangePhone:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)autoCheckCp:(id)arg1 phone:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)changeBindPhone:(id)arg1 param:(id)arg2 cookies:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)feedBackAddition:(id)arg1 ticketID:(id)arg2 desc:(id)arg3 photo:(id)arg4 okSelector:(SEL)arg5 errSelector:(SEL)arg6 failSelector:(SEL)arg7;
- (void)feedBackList:(id)arg1 index:(unsigned long long)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)setHelloPushDisabled:(_Bool)arg1 taget:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)noticeActionRequestWithActionUrlString:(id)arg1 appendPostValue:(id)arg2 appendPostValueKey:(id)arg3 target:(id)arg4 okSelector:(SEL)arg5 errSelector:(SEL)arg6 failSelector:(SEL)arg7;
- (void)setPushPartyNoticeDisabled:(_Bool)arg1 taget:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)setPushGroupFeedDisabled:(_Bool)arg1 taget:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)setPushFriendFeedDisabled:(_Bool)arg1 taget:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)setHiddenMode:(int)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)setDistanceUnitMode:(int)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)setPushSoundEnable:(_Bool)arg1 taget:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)setPushDetailDisabled:(_Bool)arg1 taget:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)pushControl:(_Bool)arg1 taget:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)statisPushNotifyStatus:(long long)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)resetPasswordForWeixinLoginUser:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)resetPassword:(id)arg1 newpwd:(id)arg2 token:(id)arg3 target:(id)arg4 okSelector:(SEL)arg5 errSelector:(SEL)arg6 failSelector:(SEL)arg7;
- (void)setMuteTimeFrom:(long long)arg1 to:(long long)arg2 status:(long long)arg3 target:(id)arg4 okSelector:(SEL)arg5 errSelector:(SEL)arg6 failSelector:(SEL)arg7;

@end

