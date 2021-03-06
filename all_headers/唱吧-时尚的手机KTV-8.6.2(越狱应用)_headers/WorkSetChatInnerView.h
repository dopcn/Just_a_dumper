//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KTVBaseChatInnerView.h"

@class KTVGroupWorkSetHeadPhotoView, NSArray, OAStackView, UILabel, UIView, WorkSetWorkInfoView;

@interface WorkSetChatInnerView : KTVBaseChatInnerView
{
    UILabel *_workSetTitleLabel;
    UILabel *_collectionStatusLabel;
    UILabel *_descriptionLabel;
    OAStackView *_workListArea;
    OAStackView *_userListArea;
    UILabel *_userDescriptionLabel;
    UILabel *_bottomLabel;
    UIView *_buttonArea;
    UIView *_workSpaceView;
    UIView *_userSpaceView;
    KTVGroupWorkSetHeadPhotoView *_headPhotoView;
    WorkSetWorkInfoView *_workInfoView0;
    WorkSetWorkInfoView *_workInfoView1;
    WorkSetWorkInfoView *_workInfoView2;
    UIView *_userPhotoArea;
    NSArray *_workInfoViewArray;
}

+ (id)innerViewHeightWithModel:(id)arg1;
@property(retain, nonatomic) NSArray *workInfoViewArray; // @synthesize workInfoViewArray=_workInfoViewArray;
@property(nonatomic) __weak UIView *userPhotoArea; // @synthesize userPhotoArea=_userPhotoArea;
@property(retain, nonatomic) WorkSetWorkInfoView *workInfoView2; // @synthesize workInfoView2=_workInfoView2;
@property(retain, nonatomic) WorkSetWorkInfoView *workInfoView1; // @synthesize workInfoView1=_workInfoView1;
@property(retain, nonatomic) WorkSetWorkInfoView *workInfoView0; // @synthesize workInfoView0=_workInfoView0;
@property(retain, nonatomic) KTVGroupWorkSetHeadPhotoView *headPhotoView; // @synthesize headPhotoView=_headPhotoView;
@property(nonatomic) __weak UIView *userSpaceView; // @synthesize userSpaceView=_userSpaceView;
@property(nonatomic) __weak UIView *workSpaceView; // @synthesize workSpaceView=_workSpaceView;
@property(nonatomic) __weak UIView *buttonArea; // @synthesize buttonArea=_buttonArea;
@property(nonatomic) __weak UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(nonatomic) __weak UILabel *userDescriptionLabel; // @synthesize userDescriptionLabel=_userDescriptionLabel;
@property(nonatomic) __weak OAStackView *userListArea; // @synthesize userListArea=_userListArea;
@property(nonatomic) __weak OAStackView *workListArea; // @synthesize workListArea=_workListArea;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak UILabel *collectionStatusLabel; // @synthesize collectionStatusLabel=_collectionStatusLabel;
@property(nonatomic) __weak UILabel *workSetTitleLabel; // @synthesize workSetTitleLabel=_workSetTitleLabel;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)backgroundButtonClickedWithCompleteBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)popOverMenuItems;
- (void)refresh;
- (struct CGSize)intrinsicContentSize;
- (void)awakeFromNib;

@end

