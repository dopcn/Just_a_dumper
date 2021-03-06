//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ShortCommentListItem, ShortFeedVideoItem;
@protocol ShortWriteCommentViewDelegate;

@interface ShortCommentDetailBaseCell : UITableViewCell
{
    ShortFeedVideoItem *_videoItem;
    ShortCommentListItem *_commentItem;
    id <ShortWriteCommentViewDelegate> _delegate;
}

@property(nonatomic) __weak id <ShortWriteCommentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ShortCommentListItem *commentItem; // @synthesize commentItem=_commentItem;
@property(retain, nonatomic) ShortFeedVideoItem *videoItem; // @synthesize videoItem=_videoItem;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

