//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAYGroupStyleCell.h"

@class MASConstraint, MAYHomeFeedBottomStatusView, NSString, UIImageView, UILabel, UIView;

@interface MAYHomeFeedCell : MAYGroupStyleCell
{
    NSString *_videoPath;
    NSString *_fid;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIImageView *_thumbImageView;
    UIView *_imagesContainerView;
    MAYHomeFeedBottomStatusView *_bottomStatusView;
    UIView *_bottomDivideLine;
    MASConstraint *_nameLabelRightConstraint;
}

@property(retain, nonatomic) MASConstraint *nameLabelRightConstraint; // @synthesize nameLabelRightConstraint=_nameLabelRightConstraint;
@property(retain, nonatomic) UIView *bottomDivideLine; // @synthesize bottomDivideLine=_bottomDivideLine;
@property(retain, nonatomic) MAYHomeFeedBottomStatusView *bottomStatusView; // @synthesize bottomStatusView=_bottomStatusView;
@property(retain, nonatomic) UIView *imagesContainerView; // @synthesize imagesContainerView=_imagesContainerView;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *fid; // @synthesize fid=_fid;
@property(copy, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
- (void).cxx_destruct;
- (id)labelWithText:(id)arg1;
- (id)getTimeStringForSeconds:(long long)arg1;
- (void)createFeedSubviews:(id)arg1;
- (void)setupImageViews:(id)arg1;
- (void)setupLongCommentViews:(id)arg1;
- (void)configBottomImages:(id)arg1;
- (void)configThumbImageView:(id)arg1;
- (void)layoutStyleImageBottom;
- (void)layoutStyleImageRight:(id)arg1;
- (void)layouBottomStatusView:(id)arg1;
- (void)setupFeedTitleData:(id)arg1;
- (void)setupFeedVideoData:(id)arg1;
- (void)setItem:(id)arg1;
- (struct CGRect)newFrameForView:(id)arg1 bottom:(double)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

