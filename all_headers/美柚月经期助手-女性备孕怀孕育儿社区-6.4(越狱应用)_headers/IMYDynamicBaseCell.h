//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseTableViewCell.h"

@class IMYButton, IMYIconImageView, IMYRM80AttributedLabel, MASConstraint, UIImageView, UILabel;
@protocol IMYDynamicListCellDelegate;

@interface IMYDynamicBaseCell : IMYBaseTableViewCell
{
    IMYIconImageView *_userIconImageView;
    UILabel *_userNameLabel;
    UILabel *_timeLabel;
    IMYRM80AttributedLabel *_contentLabel;
    IMYButton *_moreBtn;
    UILabel *_praiseLabel;
    UILabel *_commentLabel;
    IMYButton *_praiseBtn;
    IMYButton *_commentBtn;
    id <IMYDynamicListCellDelegate> _delegate;
    UIImageView *_userTypeImgView;
    UIImageView *_userMPVipImgView;
    MASConstraint *_commentRightToContentViewConstraint;
    MASConstraint *_commentRightToPraiseViewConstraint;
}

+ (id)contentLabel;
@property(retain, nonatomic) MASConstraint *commentRightToPraiseViewConstraint; // @synthesize commentRightToPraiseViewConstraint=_commentRightToPraiseViewConstraint;
@property(retain, nonatomic) MASConstraint *commentRightToContentViewConstraint; // @synthesize commentRightToContentViewConstraint=_commentRightToContentViewConstraint;
@property(retain, nonatomic) UIImageView *userMPVipImgView; // @synthesize userMPVipImgView=_userMPVipImgView;
@property(retain, nonatomic) UIImageView *userTypeImgView; // @synthesize userTypeImgView=_userTypeImgView;
@property(nonatomic) __weak id <IMYDynamicListCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IMYButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(retain, nonatomic) IMYButton *praiseBtn; // @synthesize praiseBtn=_praiseBtn;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UILabel *praiseLabel; // @synthesize praiseLabel=_praiseLabel;
@property(retain, nonatomic) IMYButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) IMYRM80AttributedLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) IMYIconImageView *userIconImageView; // @synthesize userIconImageView=_userIconImageView;
- (void).cxx_destruct;
- (void)setCellVipAndType:(id)arg1 vipShow:(_Bool)arg2 iconShow:(_Bool)arg3;
- (void)setCellModel:(id)arg1;
- (void)setConstraints;
- (void)prepareUI;

@end

