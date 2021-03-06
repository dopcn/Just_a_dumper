//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseHttpDao.h"

@interface KGPublicDynamicHttpDao : BaseHttpDao
{
}

- (void)clearDynamicListCache;
- (void)saveCacheDynamicList:(id)arg1;
- (id)obtainCacheDynamicList;
- (id)neeFileCache;
- (id)obtainRecommendVideoWithType:(long long)arg1 withKey:(long long)arg2 withError:(id *)arg3;
- (id)obtainDynamicStaticCountListWithIdTypes:(id)arg1 withError:(id *)arg2;
- (id)requestDynamicDetailVideoPlayUrlWithFileName:(id)arg1 error:(id *)arg2;
- (long long)requestDynamicDetailFansWithUserId:(id)arg1 error:(id *)arg2;
- (id)requestOnePublicDynamicWithDynamicType:(long long)arg1 WithUniq_key:(id)arg2 error:(id *)arg3;
- (void)deleteDynamicDetailWith:(id)arg1 WithType:(long long)arg2 WithFdid:(id)arg3 WithUniq_key:(id)arg4 error:(id *)arg5;
- (_Bool)reportShareSuccessWithCommentId:(id)arg1 withError:(id *)arg2;
- (long long)likePublicDynamicCommentWithTID:(id)arg1 WithTKugouId:(id)arg2 WithChildrenid:(id)arg3 WithObject:(id)arg4 WithCommentType:(unsigned long long)arg5 WithExtData:(id)arg6 error:(id *)arg7;
- (id)getLikeNumsCommentWithTID:(id)arg1 kugouId:(id)arg2 commentType:(unsigned long long)arg3 error:(id *)arg4;
- (id)descWithErrorCode:(long long)arg1;
- (id)appendClientBasicParams:(id)arg1 withExtData:(id)arg2;
- (id)requestPublicDynamicCommentListWithDynamicid:(id)arg1 WithPage:(long long)arg2 WithPageSize:(long long)arg3 WithError:(id *)arg4;
- (void)handleBaseInfo:(id)arg1 withDynamicInfo:(id)arg2;
- (id)dicToImageText:(id)arg1;
- (id)dicToDynamicVideo:(id)arg1;
- (id)dicToDynamicArticle:(id)arg1;
- (id)dicToPublicMV:(id)arg1;
- (id)dicToDynamicSpecail:(id)arg1;
- (id)convertModelWithDic:(id)arg1;
- (id)dicToPublicDynamicList:(id)arg1;
- (long long)obtainNewRecordCountWithId:(long long)arg1 withError:(id *)arg2;
- (id)obtainDynamicListWithId:(long long)arg1 withIsNextPage:(_Bool)arg2 withMaxFdid:(long long *)arg3 withHaveNextPage:(_Bool *)arg4 withNextFdid:(long long *)arg5 withPageSize:(unsigned long long)arg6 withError:(id *)arg7;
- (id)RSAKeyWithClientTime:(id)arg1;
- (id)baseParamWithClientTime:(id)arg1;
- (id)clientTimeString;

@end

