//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BusinessEngine.h"

@interface BusinessEngine_NewFeed : BusinessEngine
{
}

+ (id)sharedInstance;
- (id)generateQzoneAdbannerBatch:(struct QueryADBannerRsp)arg1;
- (id)generateFloatItemInfo:(struct FloatItem)arg1;
- (id)generateAvatarDecoInfo:(struct AvatarItem)arg1;
- (id)generateQzoneActPresentInfo:(struct GetActCommonPresentRsp)arg1;
- (id)generateQZJFeedsCover:(struct feeds_cover)arg1;
- (_Bool)isShowOperateButton:(long long)arg1;
- (_Bool)handleFeedsMsgResponseInternal:(id)arg1 withNonTlvData:(id)arg2 forCmd:(id)arg3;
- (void)handleFeedsPieceListResponseInternal:(id)arg1 buffer:(char *)arg2 bufferLen:(int)arg3 forCmd:(id)arg4 withTlvData:(id)arg5;
- (_Bool)handleFeedsMsgResponseInternal:(id)arg1 withTlvData:(id)arg2 forCmd:(id)arg3;
- (_Bool)handleFeedsMsgResponse:(id)arg1 withData:(id)arg2 forCmd:(id)arg3;
- (id)generateAppInfoModelArray:(vector_fb4d03ef)arg1;
- (_Bool)getDetailActShuoShuo:(id)arg1 responed:(id)arg2;
- (void)mergeRedCountInfo:(id)arg1 toTabCfgs:(id)arg2;
- (_Bool)getUndealCount:(id)arg1 responed:(id)arg2;
- (id)convertRedCountTypeToString:(long long)arg1;
- (id)fileNameInThemeForTabId:(long long)arg1;
- (_Bool)getNewFeedDetail:(id)arg1 responed:(id)arg2;
- (_Bool)getUgcSecarchFeed:(id)arg1 responed:(id)arg2;
- (_Bool)getSecretMsgList:(id)arg1 responed:(id)arg2;
- (_Bool)getSecretPavFeeds:(id)arg1 responed:(id)arg2;
- (_Bool)getSecretActFeeds:(id)arg1 responed:(id)arg2;
- (_Bool)getTodayInHistoryFeeds:(id)arg1 responed:(id)arg2;
- (_Bool)getSecretFeeds:(id)arg1 responed:(id)arg2;
- (_Bool)getRelationFeeds:(id)arg1 responed:(id)arg2;
- (_Bool)getHotFeeds:(id)arg1 responed:(id)arg2;
- (_Bool)getProfileFeeds:(id)arg1 responed:(id)arg2;
- (_Bool)getTagEventFeed:(id)arg1 responed:(id)arg2;
- (_Bool)getEventFeed:(id)arg1 responed:(id)arg2;
- (_Bool)getNewPassiveFeed:(id)arg1 responed:(id)arg2;
- (_Bool)getPrePassiveFeed:(id)arg1 responed:(id)arg2;
- (_Bool)getNewFriendFeed:(id)arg1 responed:(id)arg2;
- (struct s_comm_data)commDataWithOpListInfo:(id)arg1;
- (struct s_comm_data)commDataWithSyncTailInfo:(id)arg1;
- (struct s_comm_data)commDataWithTailInfo:(id)arg1;
- (struct s_comm_data)commDataWithThemeInfo:(id)arg1;
- (map_4f07c88f)mapBufWithDataRequstDic:(id)arg1;
- (_Bool)getDetailActShuoShuo:(id)arg1;
- (_Bool)getUndealCount:(id)arg1;
- (_Bool)getUgcSearchFeeds:(id)arg1;
- (_Bool)getSecretMsgList:(id)arg1;
- (_Bool)getSecretPavFeeds:(id)arg1;
- (_Bool)getSecretActFeeds:(id)arg1;
- (_Bool)getNewFeedDetail:(id)arg1;
- (_Bool)getTodayInHistoryFeeds:(id)arg1;
- (_Bool)getSecretFeeds:(id)arg1;
- (_Bool)getHotFeeds:(id)arg1;
- (_Bool)getProfileFeeds:(id)arg1;
- (_Bool)clearPassiveFeedCount:(id)arg1;
- (_Bool)getNewPassiveFeed:(id)arg1 isPre:(_Bool)arg2;
- (_Bool)getNewPassiveFeed:(id)arg1;
- (_Bool)getTagEventFeed:(id)arg1;
- (_Bool)getEventFeed:(id)arg1;
- (_Bool)processResponseSucceed:(id)arg1 withData:(id)arg2;
- (_Bool)processRequest:(id)arg1;
- (void)dealloc;
- (id)init;

@end

