//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CTIMAIViewManager : NSObject
{
}

+ (_Bool)needShowVoipForConfig:(long long)arg1;
+ (_Bool)needAIChat:(long long)arg1;
+ (void)sendConselScoreWithId:(id)arg1 score:(int)arg2 suggestion:(id)arg3 result:(CDUnknownBlockType)arg4;
+ (void)sendAIChatMessageWithMessage:(id)arg1 buType:(id)arg2 result:(CDUnknownBlockType)arg3;
+ (void)finishAIChatWithConvsation:(id)arg1 conselUid:(id)arg2 result:(CDUnknownBlockType)arg3;
+ (void)startAIWithController:(id)arg1 PartnerJid:(id)arg2 buType:(id)arg3 bizType:(id)arg4 result:(CDUnknownBlockType)arg5;
+ (void)startAIWithPartnerJid:(id)arg1 buType:(id)arg2 page:(id)arg3 bizType:(id)arg4 result:(CDUnknownBlockType)arg5;
+ (void)startAIForBuWithController:(id)arg1 buType:(id)arg2 page:(id)arg3 bizType:(id)arg4 extInfo:(id)arg5 result:(CDUnknownBlockType)arg6;
+ (id)shareManager;
- (id)aiBaseURL;
- (void)sendConselScoreWithId:(id)arg1 score:(int)arg2 suggestion:(id)arg3 result:(CDUnknownBlockType)arg4;
- (void)pushtoChatViewController:(id)arg1 conversation:(id)arg2 threadId:(id)arg3;
- (void)pushtoChatViewController:(id)arg1 conversation:(id)arg2 threadId:(id)arg3 needAIChat:(_Bool)arg4 extInfo:(id)arg5;
- (void)startCounselWithController:(id)arg1 partnerJid:(id)arg2 buType:(id)arg3 page:(id)arg4 bizType:(id)arg5 extInfo:(id)arg6 referer:(id)arg7 result:(CDUnknownBlockType)arg8;
- (void)startAIChatWithController:(id)arg1 conversationId:(id)arg2 bizType:(id)arg3 buType:(id)arg4 page:(id)arg5 referer:(id)arg6 extInfo:(id)arg7 result:(CDUnknownBlockType)arg8;

@end

