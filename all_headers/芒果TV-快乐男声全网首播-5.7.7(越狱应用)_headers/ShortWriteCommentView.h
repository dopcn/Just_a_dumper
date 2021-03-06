//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MGTVScaleButton, ShortCommentListItem, ShortFeedVideoItem, UIButton;
@protocol ShortWriteCommentViewDelegate;

@interface ShortWriteCommentView : UIView
{
    ShortFeedVideoItem *_item;
    ShortCommentListItem *_commentItem;
    id <ShortWriteCommentViewDelegate> _delegate;
    MGTVScaleButton *_admireButton;
    UIButton *_commentButton;
    UIButton *_writeButton;
    UIButton *_shareButton;
}

@property(nonatomic) __weak UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(nonatomic) __weak UIButton *writeButton; // @synthesize writeButton=_writeButton;
@property(nonatomic) __weak UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(nonatomic) __weak MGTVScaleButton *admireButton; // @synthesize admireButton=_admireButton;
@property(nonatomic) __weak id <ShortWriteCommentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ShortCommentListItem *commentItem; // @synthesize commentItem=_commentItem;
@property(retain, nonatomic) ShortFeedVideoItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)showCommentInputView;
- (void)writeAction:(id)arg1;
- (void)commentAction:(id)arg1;
- (void)admireActin:(id)arg1;
- (void)shareAction:(id)arg1;
- (void)awakeFromNib;

@end

