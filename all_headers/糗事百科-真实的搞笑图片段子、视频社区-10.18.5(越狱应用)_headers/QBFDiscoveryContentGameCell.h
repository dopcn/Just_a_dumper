//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QBFDiscoveryBaseCell.h"

@class NSLayoutConstraint, ScoreStarView, UIButton, UIImageView, UILabel, UIView;

@interface QBFDiscoveryContentGameCell : QBFDiscoveryBaseCell
{
    UIImageView *_noticeImgView;
    UIView *_topLineView;
    NSLayoutConstraint *_topLineViewToLeft;
    NSLayoutConstraint *_topLineViewToRight;
    NSLayoutConstraint *_topLineViewHeight;
    UIImageView *_iconImageView;
    NSLayoutConstraint *_iconImageViewToLeft;
    UILabel *_nameLabel;
    UILabel *_infoLabel;
    UIButton *_actionButton;
    NSLayoutConstraint *_actionButtonToRight;
    ScoreStarView *_scoreView;
    UIView *_starContainerView;
    UILabel *_subDescriptionLabel;
    UILabel *_giftLabel;
    NSLayoutConstraint *_giftLabelLeadingConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *giftLabelLeadingConstraint; // @synthesize giftLabelLeadingConstraint=_giftLabelLeadingConstraint;
@property(nonatomic) __weak UILabel *giftLabel; // @synthesize giftLabel=_giftLabel;
@property(nonatomic) __weak UILabel *subDescriptionLabel; // @synthesize subDescriptionLabel=_subDescriptionLabel;
@property(nonatomic) __weak UIView *starContainerView; // @synthesize starContainerView=_starContainerView;
@property(retain, nonatomic) ScoreStarView *scoreView; // @synthesize scoreView=_scoreView;
@property(nonatomic) __weak NSLayoutConstraint *actionButtonToRight; // @synthesize actionButtonToRight=_actionButtonToRight;
@property(nonatomic) __weak UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak NSLayoutConstraint *iconImageViewToLeft; // @synthesize iconImageViewToLeft=_iconImageViewToLeft;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak NSLayoutConstraint *topLineViewHeight; // @synthesize topLineViewHeight=_topLineViewHeight;
@property(nonatomic) __weak NSLayoutConstraint *topLineViewToRight; // @synthesize topLineViewToRight=_topLineViewToRight;
@property(nonatomic) __weak NSLayoutConstraint *topLineViewToLeft; // @synthesize topLineViewToLeft=_topLineViewToLeft;
@property(nonatomic) __weak UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(nonatomic) __weak UIImageView *noticeImgView; // @synthesize noticeImgView=_noticeImgView;
- (void).cxx_destruct;
- (void)loadThemeResource;
- (void)themeWillChanged;
- (void)updateContent;
- (void)setSelected:(_Bool)arg1;
- (void)onApplyBtn:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

