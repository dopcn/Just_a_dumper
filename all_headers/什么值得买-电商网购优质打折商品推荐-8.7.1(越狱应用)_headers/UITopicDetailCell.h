//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSBKTopicDetailCommentList, TTTAttributedLabel, UIButton, UIImageView, UILabel, UITopicDetailUserInfoView, UIView;

@interface UITopicDetailCell : UITableViewCell
{
    NSBKTopicDetailCommentList *_model;
    CDUnknownBlockType _buttonClickType;
    UIView *_viewContainer;
    UIImageView *_imageViewBG;
    UITopicDetailUserInfoView *_userView;
    UIImageView *_imageViewBrief;
    TTTAttributedLabel *_labelName;
    UILabel *_labelPrice;
    TTTAttributedLabel *_labelDescirption;
    TTTAttributedLabel *_labelContent;
    UIButton *_buttonImgCount;
    UIButton *_buttonComCount;
    UILabel *_labelUseTime;
    UIButton *_buttonZhi;
    UIButton *_buttonClickBKDetail;
    UIButton *_buttonClickBKComment;
}

@property(retain, nonatomic) UIButton *buttonClickBKComment; // @synthesize buttonClickBKComment=_buttonClickBKComment;
@property(retain, nonatomic) UIButton *buttonClickBKDetail; // @synthesize buttonClickBKDetail=_buttonClickBKDetail;
@property(nonatomic) __weak UIButton *buttonZhi; // @synthesize buttonZhi=_buttonZhi;
@property(nonatomic) __weak UILabel *labelUseTime; // @synthesize labelUseTime=_labelUseTime;
@property(nonatomic) __weak UIButton *buttonComCount; // @synthesize buttonComCount=_buttonComCount;
@property(nonatomic) __weak UIButton *buttonImgCount; // @synthesize buttonImgCount=_buttonImgCount;
@property(nonatomic) __weak TTTAttributedLabel *labelContent; // @synthesize labelContent=_labelContent;
@property(nonatomic) __weak TTTAttributedLabel *labelDescirption; // @synthesize labelDescirption=_labelDescirption;
@property(nonatomic) __weak UILabel *labelPrice; // @synthesize labelPrice=_labelPrice;
@property(nonatomic) __weak TTTAttributedLabel *labelName; // @synthesize labelName=_labelName;
@property(nonatomic) __weak UIImageView *imageViewBrief; // @synthesize imageViewBrief=_imageViewBrief;
@property(nonatomic) __weak UITopicDetailUserInfoView *userView; // @synthesize userView=_userView;
@property(nonatomic) __weak UIImageView *imageViewBG; // @synthesize imageViewBG=_imageViewBG;
@property(nonatomic) __weak UIView *viewContainer; // @synthesize viewContainer=_viewContainer;
@property(copy, nonatomic) CDUnknownBlockType buttonClickType; // @synthesize buttonClickType=_buttonClickType;
@property(retain, nonatomic) NSBKTopicDetailCommentList *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)beginAnimation:(id)arg1;
- (void)buttonZhiClicked:(id)arg1;
- (void)mainShowAnimation:(id)arg1;
- (void)buttonClickToComment;
- (void)buttonClickToDetail;
- (void)commonInit;
- (void)resize;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

