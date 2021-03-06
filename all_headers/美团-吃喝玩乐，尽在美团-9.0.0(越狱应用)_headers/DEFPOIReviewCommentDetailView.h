//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBaseCellControl.h"

@class DEFPOIReviewCommentDetailInfo, DEFPicInfoCollectionView, MTStarRater, NSArray, UIControl, UIImageView, UILabel, UIView;

@interface DEFPOIReviewCommentDetailView : MTBaseCellControl
{
    DEFPOIReviewCommentDetailInfo *_commentDetailInfo;
    unsigned long long _bodyType;
    unsigned long long _bodyTypeInternal;
    UIImageView *_userAvatarImageView;
    UIView *_headerView;
    UILabel *_userNameLabel;
    UIImageView *_userLevelView;
    UIImageView *_userRelationView;
    UIView *_starAndDateView;
    MTStarRater *_starView;
    UILabel *_dateLabel;
    UIControl *_browseUserReviewControl;
    UIImageView *_highQualityReviewStamp;
    UILabel *_bodyLabel;
    DEFPicInfoCollectionView *_picInfoCollectionView;
    NSArray *_picInfoArray;
    double _bodyLabelHeight;
    double _picInfoHeight;
    double _userLevelViewWidth;
    id _viewHeightChangedTarget;
    SEL _viewHeightChangedAction;
}

+ (double)getHeightOfCommentString:(id)arg1 maxWidth:(double)arg2;
+ (unsigned long long)getLineNumberOfCommentString:(id)arg1 maxWidth:(double)arg2;
@property(nonatomic) SEL viewHeightChangedAction; // @synthesize viewHeightChangedAction=_viewHeightChangedAction;
@property(nonatomic) __weak id viewHeightChangedTarget; // @synthesize viewHeightChangedTarget=_viewHeightChangedTarget;
@property(nonatomic) double userLevelViewWidth; // @synthesize userLevelViewWidth=_userLevelViewWidth;
@property(nonatomic) double picInfoHeight; // @synthesize picInfoHeight=_picInfoHeight;
@property(nonatomic) double bodyLabelHeight; // @synthesize bodyLabelHeight=_bodyLabelHeight;
@property(copy, nonatomic) NSArray *picInfoArray; // @synthesize picInfoArray=_picInfoArray;
@property(retain, nonatomic) DEFPicInfoCollectionView *picInfoCollectionView; // @synthesize picInfoCollectionView=_picInfoCollectionView;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UIImageView *highQualityReviewStamp; // @synthesize highQualityReviewStamp=_highQualityReviewStamp;
@property(retain, nonatomic) UIControl *browseUserReviewControl; // @synthesize browseUserReviewControl=_browseUserReviewControl;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) MTStarRater *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UIView *starAndDateView; // @synthesize starAndDateView=_starAndDateView;
@property(retain, nonatomic) UIImageView *userRelationView; // @synthesize userRelationView=_userRelationView;
@property(retain, nonatomic) UIImageView *userLevelView; // @synthesize userLevelView=_userLevelView;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIImageView *userAvatarImageView; // @synthesize userAvatarImageView=_userAvatarImageView;
@property(nonatomic) unsigned long long bodyTypeInternal; // @synthesize bodyTypeInternal=_bodyTypeInternal;
@property(nonatomic) unsigned long long bodyType; // @synthesize bodyType=_bodyType;
@property(retain, nonatomic) DEFPOIReviewCommentDetailInfo *commentDetailInfo; // @synthesize commentDetailInfo=_commentDetailInfo;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (double)viewHeight;
- (void)checkUserProfile;
- (void)addTapAction:(SEL)arg1 target:(id)arg2 view:(id)arg3;
- (void)postHeightChangedAction;
- (void)bodyLabelClicked;
- (void)refreshBodyHeightAndExpandImage;
- (void)calculateBodyTypeInternal;
- (void)setViewHeightChangedTarget:(id)arg1 forAction:(SEL)arg2;
- (void)copyInPasteBoard;
- (_Bool)canBecomeFirstResponder;
- (void)didLongPressLabelContent;
- (void)bindData;
- (void)updateConstraints;
- (void)setupConstraints;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

