//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "KTVPlaySingleCellViewControllerProtocol-Protocol.h"

@class KTVImageView, KTVTopicLabel, KTVUserPersonalNumber, KTVUserWork, KTVUserbase, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UIView, VipNicknameLabel;
@protocol KTVPlayUserInfoViweControllerDelegate;

@interface KTVPlayDuetUserInfoViewController : UIViewController <KTVPlaySingleCellViewControllerProtocol>
{
    id <KTVPlayUserInfoViweControllerDelegate> _delegate;
    VipNicknameLabel *_nicknameLabel1;
    VipNicknameLabel *_nicknameLabel2;
    KTVImageView *_headPhotoImage1;
    KTVImageView *_headPhotoImage2;
    UIButton *_followButton1;
    UIButton *_followButton2;
    KTVTopicLabel *_workTitleLabel;
    UILabel *_createTimeLabel;
    UILabel *_listenNumLable;
    NSLayoutConstraint *_workTitleHeightConstraint;
    NSLayoutConstraint *_workTitleTopConstraint;
    UIView *_seperatorLineLeftView;
    UIImageView *_bubbleArrow;
    UIView *_seperatorLineRightView;
    UIImageView *_listenNumImageView;
    NSLayoutConstraint *_arrowCenterXEqualHeadPhoto2Constraint;
    NSLayoutConstraint *_arrowCenterXEqualHeadPhoto1Constraint;
    KTVUserWork *_userWork;
    KTVUserbase *_realCreator;
    double _cacheHeight;
    KTVUserPersonalNumber *_personalNumber;
    KTVUserPersonalNumber *_duetPersonalNumber;
}

@property(retain, nonatomic) KTVUserPersonalNumber *duetPersonalNumber; // @synthesize duetPersonalNumber=_duetPersonalNumber;
@property(retain, nonatomic) KTVUserPersonalNumber *personalNumber; // @synthesize personalNumber=_personalNumber;
@property(nonatomic) double cacheHeight; // @synthesize cacheHeight=_cacheHeight;
@property(retain, nonatomic) KTVUserbase *realCreator; // @synthesize realCreator=_realCreator;
@property(retain, nonatomic) KTVUserWork *userWork; // @synthesize userWork=_userWork;
@property(nonatomic) __weak NSLayoutConstraint *arrowCenterXEqualHeadPhoto1Constraint; // @synthesize arrowCenterXEqualHeadPhoto1Constraint=_arrowCenterXEqualHeadPhoto1Constraint;
@property(nonatomic) __weak NSLayoutConstraint *arrowCenterXEqualHeadPhoto2Constraint; // @synthesize arrowCenterXEqualHeadPhoto2Constraint=_arrowCenterXEqualHeadPhoto2Constraint;
@property(nonatomic) __weak UIImageView *listenNumImageView; // @synthesize listenNumImageView=_listenNumImageView;
@property(nonatomic) __weak UIView *seperatorLineRightView; // @synthesize seperatorLineRightView=_seperatorLineRightView;
@property(nonatomic) __weak UIImageView *bubbleArrow; // @synthesize bubbleArrow=_bubbleArrow;
@property(nonatomic) __weak UIView *seperatorLineLeftView; // @synthesize seperatorLineLeftView=_seperatorLineLeftView;
@property(nonatomic) __weak NSLayoutConstraint *workTitleTopConstraint; // @synthesize workTitleTopConstraint=_workTitleTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *workTitleHeightConstraint; // @synthesize workTitleHeightConstraint=_workTitleHeightConstraint;
@property(nonatomic) __weak UILabel *listenNumLable; // @synthesize listenNumLable=_listenNumLable;
@property(nonatomic) __weak UILabel *createTimeLabel; // @synthesize createTimeLabel=_createTimeLabel;
@property(nonatomic) __weak KTVTopicLabel *workTitleLabel; // @synthesize workTitleLabel=_workTitleLabel;
@property(nonatomic) __weak UIButton *followButton2; // @synthesize followButton2=_followButton2;
@property(nonatomic) __weak UIButton *followButton1; // @synthesize followButton1=_followButton1;
@property(nonatomic) __weak KTVImageView *headPhotoImage2; // @synthesize headPhotoImage2=_headPhotoImage2;
@property(nonatomic) __weak KTVImageView *headPhotoImage1; // @synthesize headPhotoImage1=_headPhotoImage1;
@property(nonatomic) __weak VipNicknameLabel *nicknameLabel2; // @synthesize nicknameLabel2=_nicknameLabel2;
@property(nonatomic) __weak VipNicknameLabel *nicknameLabel1; // @synthesize nicknameLabel1=_nicknameLabel1;
@property(nonatomic) __weak id <KTVPlayUserInfoViweControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateWithUserWork:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)reloadWithUserWork:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldShowFooterSpliter;
- (double)heightForView;
- (struct CGPoint)singerHeadPhotoPosition;
- (void)showUserInfoViewController:(id)arg1;
- (void)checkFollowedUseridAndRefreshView:(long long)arg1;
- (void)followUserOrChatUp:(id)arg1;
- (void)refreshDuetUserFollowButtonWithPersonalNumber;
- (void)refreshUserFollowButtonWithPersonalNumber;
- (void)reloadUserNumbers;
- (void)updateUIAndLayout;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

