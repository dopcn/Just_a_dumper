//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSIndexPath, NSLayoutConstraint, NSString, UIButton;
@protocol ASKDrawerScheduleDelegate;

@interface ASKDrawerSchedule : UIView
{
    NSString *_drawerIdentifier;
    NSString *_subButtonTitle;
    id <ASKDrawerScheduleDelegate> _delegate;
    NSIndexPath *_indexPath;
    UIView *_moreButtonView;
    UIButton *_moreButton;
    NSLayoutConstraint *_moreButtonViewHeightConstraint;
    UIView *_titleBGView;
    UIView *_titleGapView;
    UIButton *_titleButton;
    UIButton *_subTitleButton;
    NSLayoutConstraint *_titleHeightConstraint;
    UIView *_leftBGView;
    UIView *_gapBGView;
    UIView *_gapView;
    UIView *_rightBGView;
}

+ (struct CGSize)drawerSizeWithModel:(id)arg1;
+ (id)scoreTextWithCompetition:(id)arg1;
+ (id)timeDescriptionWithTime:(double)arg1;
+ (void)configStatusLabel:(id)arg1 statusImageView:(id)arg2 withCompetition:(id)arg3;
+ (void)configNormalView:(id)arg1 withCompetition:(id)arg2;
+ (void)configBattleView:(id)arg1 withCompetition:(id)arg2;
@property(nonatomic) __weak UIView *rightBGView; // @synthesize rightBGView=_rightBGView;
@property(nonatomic) __weak UIView *gapView; // @synthesize gapView=_gapView;
@property(nonatomic) __weak UIView *gapBGView; // @synthesize gapBGView=_gapBGView;
@property(nonatomic) __weak UIView *leftBGView; // @synthesize leftBGView=_leftBGView;
@property(nonatomic) __weak NSLayoutConstraint *titleHeightConstraint; // @synthesize titleHeightConstraint=_titleHeightConstraint;
@property(nonatomic) __weak UIButton *subTitleButton; // @synthesize subTitleButton=_subTitleButton;
@property(nonatomic) __weak UIButton *titleButton; // @synthesize titleButton=_titleButton;
@property(nonatomic) __weak UIView *titleGapView; // @synthesize titleGapView=_titleGapView;
@property(nonatomic) __weak UIView *titleBGView; // @synthesize titleBGView=_titleBGView;
@property(nonatomic) __weak NSLayoutConstraint *moreButtonViewHeightConstraint; // @synthesize moreButtonViewHeightConstraint=_moreButtonViewHeightConstraint;
@property(nonatomic) __weak UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) __weak UIView *moreButtonView; // @synthesize moreButtonView=_moreButtonView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak id <ASKDrawerScheduleDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *subButtonTitle; // @synthesize subButtonTitle=_subButtonTitle;
@property(copy, nonatomic) NSString *drawerIdentifier; // @synthesize drawerIdentifier=_drawerIdentifier;
- (void).cxx_destruct;
- (void)moreButtonAction:(id)arg1;
- (void)configWithModel:(id)arg1;
- (void)didClicked:(id)arg1;
- (void)buildSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;

@end

