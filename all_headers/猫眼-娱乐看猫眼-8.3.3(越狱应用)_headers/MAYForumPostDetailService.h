//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAYForumBaseService.h"

@interface MAYForumPostDetailService : MAYForumBaseService
{
}

- (void)addMovieDeepComment:(long long)arg1 score:(float)arg2 title:(id)arg3 content:(id)arg4 imageIDs:(id)arg5 locationCoordinate2D:(struct CLLocationCoordinate2D)arg6 finished:(CDUnknownBlockType)arg7;
- (void)loadPostShareInfoWithId:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reportObjectionableContentType:(unsigned long long)arg1 targetId:(long long)arg2 finished:(CDUnknownBlockType)arg3;
- (void)removeCollect:(long long)arg1 finished:(CDUnknownBlockType)arg2;
- (void)addCollect:(long long)arg1 finished:(CDUnknownBlockType)arg2;
- (void)removeForumPost:(long long)arg1 finished:(CDUnknownBlockType)arg2;
- (void)addPostWithGroupId:(long long)arg1 title:(id)arg2 content:(id)arg3 imageIDs:(id)arg4 locationCoordinate2D:(struct CLLocationCoordinate2D)arg5 finished:(CDUnknownBlockType)arg6;
- (id)signalOfFetchPostDetailAndMediaRelatedInfo:(_Bool)arg1 postId:(long long)arg2;
- (void)loadPostDetailAndMediaRelatedInfo:(_Bool)arg1 postId:(long long)arg2 finished:(CDUnknownBlockType)arg3;
- (id)init;

@end

