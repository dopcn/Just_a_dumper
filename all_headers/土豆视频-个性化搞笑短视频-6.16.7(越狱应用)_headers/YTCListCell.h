//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "YTCReplyCellDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UIImageView, UILabel, UIView, YTCReplyCell, YTCSingleModel, YYLabel;
@protocol YTCListCellDelegate;

@interface YTCListCell : UITableViewCell <YTCReplyCellDelegate>
{
    UIButton *_avatarButton;
    UIButton *_moreButton;
    UIButton *_upButton;
    YYLabel *_contentLabel;
    YTCReplyCell *_replyCell;
    UIButton *_reliesButton;
    id _belong;
    id <YTCListCellDelegate> _delegate;
    NSArray *_photos;
    YTCSingleModel *_singleModel;
    NSString *_ownerID;
    NSString *_arrayKey;
    UILabel *_nickLabel;
    UILabel *_dataLabel;
    UIImageView *_ownerImgv;
    UIImageView *_vipImgv;
    UIImageView *_levelImgv;
    UILabel *_levelLabel;
    UIView *_photosView;
    UIView *_repliesContainer;
    NSArray *_replies;
    UIView *_bottomRoundView;
    UIView *_bottomRoundMask;
    UIView *_bottomLine;
    NSString *_ownerId;
}

+ (id)rectWithReplies:(id)arg1 commentOwnerId:(id)arg2 videoOwnerId:(id)arg3;
+ (id)rectWithImages:(id)arg1 width:(double)arg2;
+ (_Bool)checkStartWithEmoji:(id)arg1;
+ (id)beautifyContent:(id)arg1 atUsers:(id)arg2 topics:(id)arg3 isTop:(_Bool)arg4 isHot:(_Bool)arg5;
+ (double)heightForModel:(id)arg1 ownerId:(id)arg2 hiddenReplies:(_Bool)arg3 isTop:(_Bool)arg4;
+ (double)heightForModel:(id)arg1 ownerId:(id)arg2 hiddenReplies:(_Bool)arg3;
+ (double)heightForModel:(id)arg1 ownerId:(id)arg2 isTop:(_Bool)arg3;
+ (double)heightForModel:(id)arg1 ownerId:(id)arg2;
@property(retain, nonatomic) NSString *ownerId; // @synthesize ownerId=_ownerId;
@property(nonatomic) __weak UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) __weak UIView *bottomRoundMask; // @synthesize bottomRoundMask=_bottomRoundMask;
@property(nonatomic) __weak UIView *bottomRoundView; // @synthesize bottomRoundView=_bottomRoundView;
@property(copy, nonatomic) NSArray *replies; // @synthesize replies=_replies;
@property(nonatomic) __weak UIView *repliesContainer; // @synthesize repliesContainer=_repliesContainer;
@property(nonatomic) __weak UIView *photosView; // @synthesize photosView=_photosView;
@property(nonatomic) __weak UILabel *levelLabel; // @synthesize levelLabel=_levelLabel;
@property(nonatomic) __weak UIImageView *levelImgv; // @synthesize levelImgv=_levelImgv;
@property(nonatomic) __weak UIImageView *vipImgv; // @synthesize vipImgv=_vipImgv;
@property(nonatomic) __weak UIImageView *ownerImgv; // @synthesize ownerImgv=_ownerImgv;
@property(nonatomic) __weak UILabel *dataLabel; // @synthesize dataLabel=_dataLabel;
@property(nonatomic) __weak UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(copy, nonatomic) NSString *arrayKey; // @synthesize arrayKey=_arrayKey;
@property(readonly, nonatomic) NSString *ownerID; // @synthesize ownerID=_ownerID;
@property(retain, nonatomic) YTCSingleModel *singleModel; // @synthesize singleModel=_singleModel;
@property(retain, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(nonatomic) __weak id <YTCListCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id belong; // @synthesize belong=_belong;
@property(nonatomic) __weak UIButton *reliesButton; // @synthesize reliesButton=_reliesButton;
@property(nonatomic) __weak YTCReplyCell *replyCell; // @synthesize replyCell=_replyCell;
@property(nonatomic) __weak YYLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UIButton *upButton; // @synthesize upButton=_upButton;
@property(nonatomic) __weak UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) __weak UIButton *avatarButton; // @synthesize avatarButton=_avatarButton;
- (void).cxx_destruct;
- (void)hideBottomLine:(_Bool)arg1;
- (void)replyCommentFromFullReplyList;
- (void)replyComment;
- (void)replyCell:(id)arg1 replyModel:(id)arg2;
- (void)replyCell:(id)arg1 topicKey:(id)arg2 topicValue:(id)arg3;
- (void)replyCell:(id)arg1 atUserKey:(id)arg2 atUserValue:(id)arg3;
- (void)replyCell:(id)arg1;
- (void)contentLabelUpinside:(long long)arg1;
- (void)repliesUpinside:(id)arg1;
- (void)moreUpinside:(id)arg1;
- (void)downUpinside:(id)arg1;
- (void)upUpinside:(id)arg1;
- (void)avaterUpinside:(id)arg1;
- (void)imageUpinside:(id)arg1;
- (void)atUserKey:(id)arg1 atUserValue:(id)arg2;
- (void)topicKey:(id)arg1 topicValue:(id)arg2;
- (void)up_or_down_eventWithUpDownType:(long long)arg1;
- (void)layoutBottomLine;
- (void)layoutRepliesButton;
- (void)changeBottomHeight:(double)arg1;
- (void)layoutReplies:(id)arg1;
- (void)layoutImages:(id)arg1;
- (void)layoutReplyLabel;
- (void)layoutContentLabel;
- (void)layoutNickLabel;
- (void)showCellWithModel:(id)arg1 ownerId:(id)arg2 hiddenReplies:(_Bool)arg3;
- (void)showCellWithModel:(id)arg1 ownerId:(id)arg2;
- (void)layoutSubviews;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

