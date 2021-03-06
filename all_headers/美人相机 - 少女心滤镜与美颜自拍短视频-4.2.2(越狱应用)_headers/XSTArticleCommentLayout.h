//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XSTMeetElementLayout.h"

@class NSString, UIFont, XSTArticleCommentReplysModel;

@interface XSTArticleCommentLayout : XSTMeetElementLayout
{
    XSTArticleCommentReplysModel *_commentModel;
    double _cellHeight;
    _Bool _isCommentWithOther;
    double _avatarImageViewTopPadding;
    double _avatarImageViewLeftPadding;
    double _avatarImageViewWidth;
    double _avatarImageViewHeight;
    NSString *_nickNameString;
    double _nickNameTitleLabelMaxWidth;
    double _nickNameTitleLabelHeight;
    double _nickNameTitleLabelTopPadding;
    double _nickNameTitleLabelLeftPadding;
    NSString *_connetctLabelString;
    double _connetctLabelStringTopPadding;
    double _connetctLabelStringLeftPadding;
    NSString *_commentToWhomString;
    double _commentToWhomTopPadding;
    double _commentToWhomLeftPadding;
    double _commentToWhomLabelHeigh;
    double _labelContainerHeight;
    double _commentAreaAvatarTopPadding;
    double _sendTimeLabelTopPadding;
    double _sendTimeLabelLeftPadding;
    NSString *_sendTimeString;
    double _sendTimeLabelHeight;
    double _commentContentContainnerImageHeigh;
    double _commentContentContainnerHeight;
    double _commentContentContainnerWidth;
    double _commentContentContainnerBottomPadding;
    UIFont *_commentFont;
    NSString *_commentString;
    double _commentStringHeight;
}

@property(readonly, nonatomic) double commentStringHeight; // @synthesize commentStringHeight=_commentStringHeight;
@property(readonly, nonatomic) NSString *commentString; // @synthesize commentString=_commentString;
@property(readonly, nonatomic) UIFont *commentFont; // @synthesize commentFont=_commentFont;
@property(readonly, nonatomic) double commentContentContainnerBottomPadding; // @synthesize commentContentContainnerBottomPadding=_commentContentContainnerBottomPadding;
@property(readonly, nonatomic) double commentContentContainnerWidth; // @synthesize commentContentContainnerWidth=_commentContentContainnerWidth;
@property(readonly, nonatomic) double commentContentContainnerHeight; // @synthesize commentContentContainnerHeight=_commentContentContainnerHeight;
@property(readonly, nonatomic) double commentContentContainnerImageHeigh; // @synthesize commentContentContainnerImageHeigh=_commentContentContainnerImageHeigh;
@property(readonly, nonatomic) double sendTimeLabelHeight; // @synthesize sendTimeLabelHeight=_sendTimeLabelHeight;
@property(readonly, nonatomic) NSString *sendTimeString; // @synthesize sendTimeString=_sendTimeString;
@property(readonly, nonatomic) double sendTimeLabelLeftPadding; // @synthesize sendTimeLabelLeftPadding=_sendTimeLabelLeftPadding;
@property(readonly, nonatomic) double sendTimeLabelTopPadding; // @synthesize sendTimeLabelTopPadding=_sendTimeLabelTopPadding;
@property(readonly, nonatomic) double commentAreaAvatarTopPadding; // @synthesize commentAreaAvatarTopPadding=_commentAreaAvatarTopPadding;
@property(readonly, nonatomic) double labelContainerHeight; // @synthesize labelContainerHeight=_labelContainerHeight;
@property(readonly, nonatomic) _Bool isCommentWithOther; // @synthesize isCommentWithOther=_isCommentWithOther;
@property(readonly, nonatomic) double commentToWhomLabelHeigh; // @synthesize commentToWhomLabelHeigh=_commentToWhomLabelHeigh;
@property(readonly, nonatomic) double commentToWhomLeftPadding; // @synthesize commentToWhomLeftPadding=_commentToWhomLeftPadding;
@property(readonly, nonatomic) double commentToWhomTopPadding; // @synthesize commentToWhomTopPadding=_commentToWhomTopPadding;
@property(readonly, nonatomic) NSString *commentToWhomString; // @synthesize commentToWhomString=_commentToWhomString;
@property(readonly, nonatomic) double connetctLabelStringLeftPadding; // @synthesize connetctLabelStringLeftPadding=_connetctLabelStringLeftPadding;
@property(readonly, nonatomic) double connetctLabelStringTopPadding; // @synthesize connetctLabelStringTopPadding=_connetctLabelStringTopPadding;
@property(readonly, nonatomic) NSString *connetctLabelString; // @synthesize connetctLabelString=_connetctLabelString;
@property(readonly, nonatomic) double nickNameTitleLabelLeftPadding; // @synthesize nickNameTitleLabelLeftPadding=_nickNameTitleLabelLeftPadding;
@property(readonly, nonatomic) double nickNameTitleLabelTopPadding; // @synthesize nickNameTitleLabelTopPadding=_nickNameTitleLabelTopPadding;
@property(readonly, nonatomic) double nickNameTitleLabelHeight; // @synthesize nickNameTitleLabelHeight=_nickNameTitleLabelHeight;
@property(readonly, nonatomic) double nickNameTitleLabelMaxWidth; // @synthesize nickNameTitleLabelMaxWidth=_nickNameTitleLabelMaxWidth;
@property(readonly, nonatomic) NSString *nickNameString; // @synthesize nickNameString=_nickNameString;
@property(readonly, nonatomic) double avatarImageViewHeight; // @synthesize avatarImageViewHeight=_avatarImageViewHeight;
@property(readonly, nonatomic) double avatarImageViewWidth; // @synthesize avatarImageViewWidth=_avatarImageViewWidth;
@property(readonly, nonatomic) double avatarImageViewLeftPadding; // @synthesize avatarImageViewLeftPadding=_avatarImageViewLeftPadding;
@property(readonly, nonatomic) double avatarImageViewTopPadding; // @synthesize avatarImageViewTopPadding=_avatarImageViewTopPadding;
- (double)layoutHeight;
- (id)layoutInfo;
- (void).cxx_destruct;
- (void)layout;
- (id)initElementLayoutWithInfo:(id)arg1;

@end

