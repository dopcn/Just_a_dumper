//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IGCommentModel, NSURL;
@protocol IGCommentBaseSectionController;

@protocol IGCommentSectionDelegate
- (void)commentController:(id <IGCommentBaseSectionController>)arg1 didRetryPostingComment:(IGCommentModel *)arg2;
- (void)commentController:(id <IGCommentBaseSectionController>)arg1 didReportComment:(IGCommentModel *)arg2;
- (void)commentController:(id <IGCommentBaseSectionController>)arg1 didDeleteComment:(IGCommentModel *)arg2;
- (void)commentController:(id <IGCommentBaseSectionController>)arg1 didTapURL:(NSURL *)arg2;
- (void)commentController:(id <IGCommentBaseSectionController>)arg1 didTapReplyForComment:(IGCommentModel *)arg2;
- (void)commentController:(id <IGCommentBaseSectionController>)arg1 didTapLikeCountForComment:(IGCommentModel *)arg2;
- (void)commentController:(id <IGCommentBaseSectionController>)arg1 didTapLikeForComment:(IGCommentModel *)arg2;
@end

