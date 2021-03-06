//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HYLoginAlertView.h"

@class HYDialogueAvatarView, HYDialogueTitleView, HYRecommendLoginInfo, HYUserADsView;

@interface HYOAuthLoginView : HYLoginAlertView
{
    CDUnknownBlockType _loginSuccess;
    HYDialogueAvatarView *_avatarView;
    HYDialogueTitleView *_detailView;
    HYUserADsView *_adsView;
    HYRecommendLoginInfo *_recommendLoginInfo;
}

@property(retain, nonatomic) HYRecommendLoginInfo *recommendLoginInfo; // @synthesize recommendLoginInfo=_recommendLoginInfo;
@property(retain, nonatomic) HYUserADsView *adsView; // @synthesize adsView=_adsView;
@property(retain, nonatomic) HYDialogueTitleView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) HYDialogueAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(copy, nonatomic) CDUnknownBlockType loginSuccess; // @synthesize loginSuccess=_loginSuccess;
- (void).cxx_destruct;
- (double)dialogueWidth;
- (double)dialogueHeight;
- (id)pageName;
- (id)spm;
- (void)closeButtonTapped;
- (void)handleOAuthLoginSuccess;
- (void)submitButtonTap;
- (void)setLoginInfo:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

