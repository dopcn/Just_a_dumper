//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TDPlayerDetailInjectionProtocol-Protocol.h"

@class NSDictionary, NSString, TDPlayerDetailDataManager, TDPlayerDetailDataManagerContext, TDPlayerDetailInfo, TDPlayerDetailVideoModel, TDPlayerDetailView, TDPlayerView;

@interface TDPlayerDetailInjection : NSObject <TDPlayerDetailInjectionProtocol>
{
    CDUnknownBlockType _fetchDetailInfoBlock;
    CDUnknownBlockType _fetchDetailViewBlock;
    CDUnknownBlockType _fetchDataManagerBlock;
    CDUnknownBlockType _fetchPlayerViewBlock;
    CDUnknownBlockType _fetchVideoEntityBlock;
    CDUnknownBlockType _fetchDataManagerContext;
    CDUnknownBlockType _fetchVidBlock;
    CDUnknownBlockType _fetchSidBlock;
    CDUnknownBlockType _fetchAidBlock;
    CDUnknownBlockType _fetchIsNextFlagBlcok;
    CDUnknownBlockType _fetchShowCommentFlagBlock;
    CDUnknownBlockType _fetchItemIdBlock;
    CDUnknownBlockType _fetchRecordIdBlock;
    CDUnknownBlockType _fetchAutoPlayFlagBlock;
    CDUnknownBlockType _fetchPushFlagBlock;
    CDUnknownBlockType _fetchUt_argsBlock;
    CDUnknownBlockType _fetchThemeIdBlock;
    CDUnknownBlockType _fetchVideoTypeBlock;
    CDUnknownBlockType _syncVidBlock;
    CDUnknownBlockType _syncSidBlock;
    CDUnknownBlockType _syncAidBlock;
    CDUnknownBlockType _syncIsNextBlock;
    CDUnknownBlockType _syncShowCommentBlock;
    CDUnknownBlockType _syncUserMemberInfoUpdateFlagBlock;
    CDUnknownBlockType _syncAutoPlayBlock;
    CDUnknownBlockType _syncItemIdBlock;
    CDUnknownBlockType _syncRecordIdBlock;
    CDUnknownBlockType _syncThemeIdBlock;
    CDUnknownBlockType _syncVideoTypeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType syncVideoTypeBlock; // @synthesize syncVideoTypeBlock=_syncVideoTypeBlock;
@property(copy, nonatomic) CDUnknownBlockType syncThemeIdBlock; // @synthesize syncThemeIdBlock=_syncThemeIdBlock;
@property(copy, nonatomic) CDUnknownBlockType syncRecordIdBlock; // @synthesize syncRecordIdBlock=_syncRecordIdBlock;
@property(copy, nonatomic) CDUnknownBlockType syncItemIdBlock; // @synthesize syncItemIdBlock=_syncItemIdBlock;
@property(copy, nonatomic) CDUnknownBlockType syncAutoPlayBlock; // @synthesize syncAutoPlayBlock=_syncAutoPlayBlock;
@property(copy, nonatomic) CDUnknownBlockType syncUserMemberInfoUpdateFlagBlock; // @synthesize syncUserMemberInfoUpdateFlagBlock=_syncUserMemberInfoUpdateFlagBlock;
@property(copy, nonatomic) CDUnknownBlockType syncShowCommentBlock; // @synthesize syncShowCommentBlock=_syncShowCommentBlock;
@property(copy, nonatomic) CDUnknownBlockType syncIsNextBlock; // @synthesize syncIsNextBlock=_syncIsNextBlock;
@property(copy, nonatomic) CDUnknownBlockType syncAidBlock; // @synthesize syncAidBlock=_syncAidBlock;
@property(copy, nonatomic) CDUnknownBlockType syncSidBlock; // @synthesize syncSidBlock=_syncSidBlock;
@property(copy, nonatomic) CDUnknownBlockType syncVidBlock; // @synthesize syncVidBlock=_syncVidBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchVideoTypeBlock; // @synthesize fetchVideoTypeBlock=_fetchVideoTypeBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchThemeIdBlock; // @synthesize fetchThemeIdBlock=_fetchThemeIdBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchUt_argsBlock; // @synthesize fetchUt_argsBlock=_fetchUt_argsBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchPushFlagBlock; // @synthesize fetchPushFlagBlock=_fetchPushFlagBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchAutoPlayFlagBlock; // @synthesize fetchAutoPlayFlagBlock=_fetchAutoPlayFlagBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchRecordIdBlock; // @synthesize fetchRecordIdBlock=_fetchRecordIdBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchItemIdBlock; // @synthesize fetchItemIdBlock=_fetchItemIdBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchShowCommentFlagBlock; // @synthesize fetchShowCommentFlagBlock=_fetchShowCommentFlagBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchIsNextFlagBlcok; // @synthesize fetchIsNextFlagBlcok=_fetchIsNextFlagBlcok;
@property(copy, nonatomic) CDUnknownBlockType fetchAidBlock; // @synthesize fetchAidBlock=_fetchAidBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchSidBlock; // @synthesize fetchSidBlock=_fetchSidBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchVidBlock; // @synthesize fetchVidBlock=_fetchVidBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchDataManagerContext; // @synthesize fetchDataManagerContext=_fetchDataManagerContext;
@property(copy, nonatomic) CDUnknownBlockType fetchVideoEntityBlock; // @synthesize fetchVideoEntityBlock=_fetchVideoEntityBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchPlayerViewBlock; // @synthesize fetchPlayerViewBlock=_fetchPlayerViewBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchDataManagerBlock; // @synthesize fetchDataManagerBlock=_fetchDataManagerBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchDetailViewBlock; // @synthesize fetchDetailViewBlock=_fetchDetailViewBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchDetailInfoBlock; // @synthesize fetchDetailInfoBlock=_fetchDetailInfoBlock;
- (void).cxx_destruct;
@property(nonatomic) long long videoType; // @dynamic videoType;
@property(retain, nonatomic) NSString *themeId; // @dynamic themeId;
@property(retain, nonatomic) NSDictionary *ut_args; // @dynamic ut_args;
@property(retain, nonatomic) NSString *push; // @dynamic push;
@property(nonatomic) _Bool autoPlay; // @dynamic autoPlay;
@property(retain, nonatomic) NSString *recordId; // @dynamic recordId;
@property(retain, nonatomic) NSString *itemId; // @dynamic itemId;
@property(nonatomic) _Bool showComment; // @dynamic showComment;
@property(nonatomic) _Bool isNext; // @dynamic isNext;
@property(retain, nonatomic) NSString *aid; // @dynamic aid;
@property(retain, nonatomic) NSString *sid; // @dynamic sid;
@property(retain, nonatomic) NSString *vid; // @dynamic vid;
@property(retain, nonatomic) TDPlayerView *playerView; // @dynamic playerView;
@property(retain, nonatomic) TDPlayerDetailDataManager *dataManager; // @dynamic dataManager;
@property(retain, nonatomic) TDPlayerDetailView *detailView; // @dynamic detailView;
@property(retain, nonatomic) TDPlayerDetailInfo *detailInfo; // @dynamic detailInfo;
@property(retain, nonatomic) TDPlayerDetailDataManagerContext *dataManagerContext; // @dynamic dataManagerContext;
@property(retain, nonatomic) TDPlayerDetailVideoModel *videoEntity; // @dynamic videoEntity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

