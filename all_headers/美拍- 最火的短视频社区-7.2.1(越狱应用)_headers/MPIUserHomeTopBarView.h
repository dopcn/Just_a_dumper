//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPIButton, MPINameMedalView, UIImageView, UILabel;

@interface MPIUserHomeTopBarView : UIView
{
    CDUnknownBlockType _backActionBlock;
    CDUnknownBlockType _moreActionBlock;
    CDUnknownBlockType _messageActionBlock;
    CDUnknownBlockType _editActionBlock;
    CDUnknownBlockType _followActionBlock;
    CDUnknownBlockType _scrollToTopActionBlock;
    MPIButton *_backBarButton;
    MPIButton *_privateMessageButton;
    MPIButton *_moreButton;
    MPIButton *_editButton;
    MPIButton *_followButton;
    MPINameMedalView *_nameMedalView;
    UILabel *_userIDLabel;
    UIImageView *_genderImageView;
}

@property(retain, nonatomic) UIImageView *genderImageView; // @synthesize genderImageView=_genderImageView;
@property(retain, nonatomic) UILabel *userIDLabel; // @synthesize userIDLabel=_userIDLabel;
@property(retain, nonatomic) MPINameMedalView *nameMedalView; // @synthesize nameMedalView=_nameMedalView;
@property(retain, nonatomic) MPIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) MPIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) MPIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) MPIButton *privateMessageButton; // @synthesize privateMessageButton=_privateMessageButton;
@property(retain, nonatomic) MPIButton *backBarButton; // @synthesize backBarButton=_backBarButton;
@property(copy, nonatomic) CDUnknownBlockType scrollToTopActionBlock; // @synthesize scrollToTopActionBlock=_scrollToTopActionBlock;
@property(copy, nonatomic) CDUnknownBlockType followActionBlock; // @synthesize followActionBlock=_followActionBlock;
@property(copy, nonatomic) CDUnknownBlockType editActionBlock; // @synthesize editActionBlock=_editActionBlock;
@property(copy, nonatomic) CDUnknownBlockType messageActionBlock; // @synthesize messageActionBlock=_messageActionBlock;
@property(copy, nonatomic) CDUnknownBlockType moreActionBlock; // @synthesize moreActionBlock=_moreActionBlock;
@property(copy, nonatomic) CDUnknownBlockType backActionBlock; // @synthesize backActionBlock=_backActionBlock;
- (void).cxx_destruct;
- (void)singleTapGestureAction:(id)arg1;
- (void)followButtonAction:(id)arg1;
- (void)editButtonAction:(id)arg1;
- (void)moreButtonAction:(id)arg1;
- (void)privateMessageButtonAction:(id)arg1;
- (void)backButtonAction:(id)arg1;
- (void)followButtonStyleABTesting;
- (void)createUI;
- (void)setFollowButtonHidden:(_Bool)arg1;
- (void)updateUserIDLabelAlpha:(double)arg1;
- (void)configureUser:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

