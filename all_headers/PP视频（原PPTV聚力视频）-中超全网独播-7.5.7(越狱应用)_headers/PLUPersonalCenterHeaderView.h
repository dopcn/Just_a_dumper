//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PLUFollowBarViewDelegate-Protocol.h"

@class LZPersonalCenterDetailAnchorWeekStarView, LZUserCardModel, NSArray, NSString, PLUBlurView, PLUCheckinButton, PLUFollowBarView, PLULivingBarView, PLURelationshipCheckModel, PLURoomDescView, UIImageView, UILabel;
@protocol PLUPersonalCenterHeaderViewDelegate;

@interface PLUPersonalCenterHeaderView : UIView <PLUFollowBarViewDelegate>
{
    LZUserCardModel *_userCardModel;
    PLURelationshipCheckModel *_userCheckininfo;
    NSArray *_lastWeekStarList;
    id <PLUPersonalCenterHeaderViewDelegate> _delegate;
    UIView *_headerBackgroundView;
    UIImageView *_backgroundView;
    UIImageView *_genderImg;
    UILabel *_signLabel;
    PLUBlurView *_blurView;
    UIImageView *_headerImageView;
    UIImageView *_certifiedIcon;
    UILabel *_nameLabel;
    UILabel *_iconLabel;
    PLUCheckinButton *_checkinBtn;
    UIView *_whiteBGView;
    PLUFollowBarView *_followBarView;
    PLULivingBarView *_livingBarView;
    UIView *_tabbarLine;
    PLURoomDescView *_roomDescView;
    LZPersonalCenterDetailAnchorWeekStarView *_weekStarView;
}

@property(retain, nonatomic) LZPersonalCenterDetailAnchorWeekStarView *weekStarView; // @synthesize weekStarView=_weekStarView;
@property(retain, nonatomic) PLURoomDescView *roomDescView; // @synthesize roomDescView=_roomDescView;
@property(retain, nonatomic) UIView *tabbarLine; // @synthesize tabbarLine=_tabbarLine;
@property(retain, nonatomic) PLULivingBarView *livingBarView; // @synthesize livingBarView=_livingBarView;
@property(retain, nonatomic) PLUFollowBarView *followBarView; // @synthesize followBarView=_followBarView;
@property(nonatomic) __weak UIView *whiteBGView; // @synthesize whiteBGView=_whiteBGView;
@property(retain, nonatomic) PLUCheckinButton *checkinBtn; // @synthesize checkinBtn=_checkinBtn;
@property(nonatomic) __weak UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *certifiedIcon; // @synthesize certifiedIcon=_certifiedIcon;
@property(nonatomic) __weak UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) PLUBlurView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) __weak UILabel *signLabel; // @synthesize signLabel=_signLabel;
@property(nonatomic) __weak UIImageView *genderImg; // @synthesize genderImg=_genderImg;
@property(nonatomic) __weak UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *headerBackgroundView; // @synthesize headerBackgroundView=_headerBackgroundView;
@property(nonatomic) __weak id <PLUPersonalCenterHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *lastWeekStarList; // @synthesize lastWeekStarList=_lastWeekStarList;
@property(retain, nonatomic) PLURelationshipCheckModel *userCheckininfo; // @synthesize userCheckininfo=_userCheckininfo;
@property(retain, nonatomic) LZUserCardModel *userCardModel; // @synthesize userCardModel=_userCardModel;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)clickCheckinBtn;
- (void)clickLivingBar;
- (void)followBarViewCilckFollowBtn;
- (void)followBarViewCilckFansBtn;
- (id)image:(id)arg1 byScalingToSize:(struct CGSize)arg2;
- (id)vipImage;
- (id)gradeImage;
- (id)sexImage;
- (id)genderImage;
- (void)setFollowCountAndFansCount;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

