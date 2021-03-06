//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFeedItem, NSMutableArray;
@protocol IGAPIClient, IGBulkCommentDeleteManagerDelegate;

@interface IGBulkCommentDeleteManager : NSObject
{
    _Bool _deletingComments;
    id <IGBulkCommentDeleteManagerDelegate> _commentDeleteManagerDelegate;
    IGFeedItem *_post;
    NSMutableArray *_commentsToDelete;
    id <IGAPIClient> _networker;
}

@property(retain, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(retain, nonatomic) NSMutableArray *commentsToDelete; // @synthesize commentsToDelete=_commentsToDelete;
@property(retain, nonatomic) IGFeedItem *post; // @synthesize post=_post;
@property(nonatomic, getter=isDeletingComments) _Bool deletingComments; // @synthesize deletingComments=_deletingComments;
@property(nonatomic) __weak id <IGBulkCommentDeleteManagerDelegate> commentDeleteManagerDelegate; // @synthesize commentDeleteManagerDelegate=_commentDeleteManagerDelegate;
- (void).cxx_destruct;
- (id)_loggingInfoForDeletedComments:(id)arg1;
- (void)logCommentDeletionFinishedWithSuccess:(_Bool)arg1 comments:(id)arg2;
- (void)commentDeletionFailed:(id)arg1 error:(id)arg2;
- (void)commentDeletionFinished:(id)arg1;
- (id)bulkCommentDeleteRequestForPostPk:(id)arg1 commentsToDelete:(id)arg2;
- (id)commaSeparatedListOfCommentsToDeleteFromArray:(id)arg1;
- (_Bool)validateCommentsBeingDeleted:(id)arg1;
- (void)bulkDeleteComments:(id)arg1;
- (void)deleteUnpostedComments:(id)arg1;
- (void)deletePostedComments:(id)arg1;
- (id)undoBulkCommentDeletion;
- (void)commitBulkCommentDeletion;
- (_Bool)addCommentToDelete:(id)arg1 feedItem:(id)arg2;
- (_Bool)canAddCommentToDelete;
- (id)initWithPost:(id)arg1 networker:(id)arg2;
- (void)dealloc;

@end

