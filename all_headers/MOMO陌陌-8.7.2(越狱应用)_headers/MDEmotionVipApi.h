//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDApiBase.h"

@interface MDEmotionVipApi : MDApiBase
{
}

- (void)shareDecorationWithProductId:(id)arg1 forTarget:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)saveDecorationWithProductId:(id)arg1 forTarget:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)buyDecorationWithProductId:(id)arg1 tradeId:(id)arg2 forTarget:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)getTradeIdWithProductId:(id)arg1 forTarget:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)getDecorationProfileWithProductId:(id)arg1 forTarget:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)chatBubbleSetWithBubble:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)chatBubbleGetBubbleListWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)deleteCloudMessageWithPassword:(id)arg1 remoteIDs:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)emotionsInCategory:(id)arg1 index:(unsigned long long)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)emotionCategoryWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)searchEmotionWithWording:(id)arg1 andIndex:(unsigned long long)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)statisticsEmotionStoreEntranceWithType:(long long)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)inviteRenren:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)inviteTencentWb:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)inviteFriendAndShareToSNS:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)vipSignInWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)vipIntroInfoWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)vipCenterInfoWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)vipCenter:(int)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)feedbackAccountIAPLog:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)cloudInusedEmotionsWithString:(id)arg1 delegate:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)finishOneEmotionTask:(id)arg1 delegate:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)getEmotionTaskListWithTaskId:(id)arg1 delegate:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)getEmotionTaskInviteListWithTaskId:(id)arg1 delegate:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)getTradeno:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)getCloudMessage:(id)arg1 count:(int)arg2 password:(id)arg3 target:(id)arg4 okSelector:(SEL)arg5 errSelector:(SEL)arg6 failSelector:(SEL)arg7;
- (void)myEmotionPackets:(long long)arg1 pageStep:(long long)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)loadEmotionShopDataWithType:(int)arg1 index:(long long)arg2 pageStep:(long long)arg3 target:(id)arg4 okSelector:(SEL)arg5 errSelector:(SEL)arg6 failSelector:(SEL)arg7;
- (void)giftVip:(id)arg1 remoteid:(id)arg2 transactionid:(id)arg3 paymentTransactionid:(id)arg4 target:(id)arg5 okSelector:(SEL)arg6 errSelector:(SEL)arg7 failSelector:(SEL)arg8;
- (void)giftVip:(id)arg1 transactionid:(id)arg2 remoteid:(id)arg3 target:(id)arg4 okSelector:(SEL)arg5 errSelector:(SEL)arg6 failSelector:(SEL)arg7;
- (void)buyVip:(id)arg1 transactionid:(id)arg2 paymentTransactionid:(id)arg3 target:(id)arg4 okSelector:(SEL)arg5 errSelector:(SEL)arg6 failSelector:(SEL)arg7;
- (void)buyVip:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)svipList:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)vipList:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)autoContinueSetting:(_Bool)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)buyGold:(unsigned long long)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)goldList:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)canGiftFriendList:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)myBill:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)giftEmotionPacketWithPid:(id)arg1 uniqueTradeId:(id)arg2 remoteid:(id)arg3 target:(id)arg4 okSelector:(SEL)arg5 errSelector:(SEL)arg6 failSelector:(SEL)arg7;
- (void)downloadEmotionPacket:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)buyEmotionPacketWithPid:(id)arg1 uniqueTradeId:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)getAllEmotionPacket:(id)arg1 versions:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)customEmotionRemoveWithIds:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)customEmotionCollect:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)customEmotionPacket:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)emotionPacket:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)circleVerify:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)circleVerifyVip:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)payProduct:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)checkProduct:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)productList:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)checkTransactionId:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;

@end

