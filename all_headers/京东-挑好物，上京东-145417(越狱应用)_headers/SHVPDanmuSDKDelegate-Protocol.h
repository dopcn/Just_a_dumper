//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSMutableArray, NSString, SHVPDanmuSDK;

@protocol SHVPDanmuSDKDelegate <NSObject>
- (void)sdk:(SHVPDanmuSDK *)arg1 liveBroadCastEndAtTime:(double)arg2;
- (void)sdk:(SHVPDanmuSDK *)arg1 bringViewerNum:(NSString *)arg2 nickName:(NSString *)arg3;
- (void)sdk:(SHVPDanmuSDK *)arg1 AnchorSendGiftGiftId:(NSString *)arg2 giftName:(NSString *)arg3 giftGif:(NSString *)arg4 nickName:(NSString *)arg5 type:(NSString *)arg6 userHeadImg:(NSString *)arg7;
- (void)sdk:(SHVPDanmuSDK *)arg1 AnchorStickProductId:(NSString *)arg2 ProductName:(NSString *)arg3 ProductPrice:(NSString *)arg4 ProductUrl:(NSString *)arg5 Sort:(NSString *)arg6 LiveOnly:(_Bool)arg7;
- (void)sdk:(SHVPDanmuSDK *)arg1 AnchorExplainProductId:(NSString *)arg2 ProductName:(NSString *)arg3 ProductPrice:(NSString *)arg4 ProductUrl:(NSString *)arg5 Sort:(NSString *)arg6 LiveOnly:(_Bool)arg7;
- (void)sdk:(SHVPDanmuSDK *)arg1 AnchorAskShare:(unsigned char)arg2;
- (void)sdk:(SHVPDanmuSDK *)arg1 NotifyContent:(NSString *)arg2;
- (void)sdk:(SHVPDanmuSDK *)arg1 ProductList:(NSMutableArray *)arg2;
- (void)sdk:(SHVPDanmuSDK *)arg1 AnchorResumeLiveWithNickName:(NSString *)arg2;
- (void)sdk:(SHVPDanmuSDK *)arg1 AnchorSuspendLiveWithNickName:(NSString *)arg2;
- (void)sdk:(SHVPDanmuSDK *)arg1 ViewerDrawViewerWithNickname0:(NSString *)arg2 nickname1:(NSString *)arg3;
- (void)sdk:(SHVPDanmuSDK *)arg1 ViewerGetCouponWithNickName:(NSString *)arg2 Content:(NSString *)arg3;
- (void)sdk:(SHVPDanmuSDK *)arg1 ViewerShareLiveWithNickName:(NSString *)arg2 shareBone:(NSString *)arg3;
- (void)sdk:(SHVPDanmuSDK *)arg1 JoinShopViewerNickName:(NSString *)arg2;
- (void)sdk:(SHVPDanmuSDK *)arg1 FollowShopViewerNickName:(NSString *)arg2;
- (void)sdk:(SHVPDanmuSDK *)arg1 FollowAnchorViewerNickName:(NSString *)arg2;
- (void)sdk:(SHVPDanmuSDK *)arg1 ViewerWinPrizeDrawType:(NSString *)arg2 Drawcode:(NSString *)arg3 ProductId:(NSString *)arg4 ProductName:(NSString *)arg5 ProductUrl:(NSString *)arg6 Nickname:(NSString *)arg7;
- (void)sdk:(SHVPDanmuSDK *)arg1 AnchorBeginPrizeDrawType:(NSString *)arg2 Drawcode:(NSString *)arg3;
- (void)sdk:(SHVPDanmuSDK *)arg1 ThumbsUpStraightWithNickname:(NSString *)arg2 Number:(int)arg3;
- (void)sdk:(SHVPDanmuSDK *)arg1 BuyProductMessage:(NSString *)arg2 Nickname:(NSString *)arg3 Sort:(NSString *)arg4;
- (void)sdk:(SHVPDanmuSDK *)arg1 AskExplainProductId:(NSString *)arg2 Nickname:(NSString *)arg3 PromotionId:(NSString *)arg4 Sort:(NSString *)arg5 IsPlus:(_Bool)arg6 extraTag:(NSString *)arg7;
- (void)sdk:(SHVPDanmuSDK *)arg1 ShopcartMessage:(NSString *)arg2 Nickname:(NSString *)arg3 ProductId:(NSString *)arg4 Sort:(NSString *)arg5;
- (void)sdk:(SHVPDanmuSDK *)arg1 AnchorMessage:(NSString *)arg2 Nickname:(NSString *)arg3;
- (void)sdk:(SHVPDanmuSDK *)arg1 UserMessage:(NSString *)arg2 Nickname:(NSString *)arg3 IsPlus:(_Bool)arg4 extraTag:(NSString *)arg5;
- (void)sdk:(SHVPDanmuSDK *)arg1 HeadPicArray:(NSArray *)arg2;
- (void)sdk:(SHVPDanmuSDK *)arg1 TotalCartNum:(int)arg2;
- (void)sdk:(SHVPDanmuSDK *)arg1 TotalThumbUpNum:(long long)arg2;
- (void)sdk:(SHVPDanmuSDK *)arg1 LiveBroadcastSummaryContent:(NSString *)arg2;
- (void)sdk:(SHVPDanmuSDK *)arg1 TotalViewerNum:(long long)arg2;
- (void)sdk:(SHVPDanmuSDK *)arg1 LeaveLiveBroadcastWithNickName:(NSString *)arg2;
- (void)sdk:(SHVPDanmuSDK *)arg1 JoinLiveBroadcastWithNickName:(NSString *)arg2;
- (void)sdk:(SHVPDanmuSDK *)arg1 AuthSuccessWithNickName:(NSString *)arg2;
- (void)sdk:(SHVPDanmuSDK *)arg1 ClosedWithAddress:(NSString *)arg2 Error:(NSError *)arg3 Retrying:(_Bool)arg4;
@end

