//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMBaseService.h"

@interface FMReviewService : FMBaseService
{
}

+ (void)deleteCacheForSourceId:(id)arg1;
+ (id)impressionTagsOfSourceId:(id)arg1;
+ (void)cacheImpressionTags:(id)arg1 forSourceId:(id)arg2;
+ (void)creatImpressWithSourceId:(id)arg1 bizCode:(id)arg2 labels:(id)arg3 result:(CDUnknownBlockType)arg4;
+ (void)getImpressDetailWithSourceId:(id)arg1 bizCode:(id)arg2 result:(CDUnknownBlockType)arg3;
+ (void)getReviewListWithPageNo:(long long)arg1 pageSize:(long long)arg2 ratedUid:(id)arg3 raterType:(id)arg4 result:(CDUnknownBlockType)arg5;
+ (void)getReviewDetail:(id)arg1 ratedUid:(id)arg2 bizCode:(id)arg3 pageNumber:(long long)arg4 result:(CDUnknownBlockType)arg5;
+ (void)postReview:(id)arg1 result:(CDUnknownBlockType)arg2;

@end

