//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AlbumComment, AlbumCommentList, AlbumCommentManager;

@protocol AlbumCommentDelegate <NSObject>

@optional
- (void)commentManagerSendCommentFail:(AlbumCommentList *)arg1;
- (void)commentManagerSendCommentSuccess:(AlbumComment *)arg1;
- (void)commentManagerPullCommentsFail:(AlbumCommentManager *)arg1;
- (void)commentManagerPullCommentsSuccess:(AlbumCommentManager *)arg1;
@end

