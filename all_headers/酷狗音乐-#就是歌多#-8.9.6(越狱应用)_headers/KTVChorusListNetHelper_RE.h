//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KTVBaseNetHelper.h"

@interface KTVChorusListNetHelper_RE : KTVBaseNetHelper
{
}

- (void)AsyncQueryOpusExist:(long long)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
- (void)getIfIsDeleteWithOpusID:(long long)arg1 block:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
- (void)asyncGetNewChorusOpusCountWithPlayerId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)asyncPostCollectedOpusWithPlayerId:(long long)arg1 opusId:(long long)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)transformationResponseDic:(id)arg1 succeed:(CDUnknownBlockType)arg2;
- (void)asyncGetChorusOpusListWithPlayerId:(long long)arg1 page:(long long)arg2 pageSize:(long long)arg3 isPassive:(_Bool)arg4 succeed:(CDUnknownBlockType)arg5 failed:(CDUnknownBlockType)arg6;
- (void)asyncGetHotRecommendListWithPage:(long long)arg1 pageSize:(long long)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)asyncGetFriendRecommendListWithPlayerId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;

@end

