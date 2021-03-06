//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXInputFieldView.h"

#import "RecentlyImageViewDelegate-Protocol.h"
#import "TimerHolderDelegate-Protocol.h"
#import "YXPLAssetImageViewControllerDelegate-Protocol.h"
#import "YXRecentlyURLViewsDelegate-Protocol.h"

@class MBProgressHUD, NSString, PHAsset, RecentlyImageView, SessionViewController, TimerHolder, UIControl, YXRecentlyURLView;

@interface SessionInputFieldView : YXInputFieldView <TimerHolderDelegate, YXPLAssetImageViewControllerDelegate, RecentlyImageViewDelegate, YXRecentlyURLViewsDelegate>
{
    RecentlyImageView *_recentlyImageView;
    UIControl *_controlView;
    TimerHolder *_timer;
    _Bool _canShowCopyURLTip;
    NSString *_sessionID;
    long long _sessionType;
    SessionViewController *_sessionViewController;
    PHAsset *_phAsset;
    YXRecentlyURLView *_recentlyURLView;
    MBProgressHUD *_hud;
    TimerHolder *_recentlyURLViewTimer;
    long long _quicklySendCopyLinkType;
}

@property(nonatomic) long long quicklySendCopyLinkType; // @synthesize quicklySendCopyLinkType=_quicklySendCopyLinkType;
@property(retain, nonatomic) TimerHolder *recentlyURLViewTimer; // @synthesize recentlyURLViewTimer=_recentlyURLViewTimer;
@property(nonatomic) __weak MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) YXRecentlyURLView *recentlyURLView; // @synthesize recentlyURLView=_recentlyURLView;
@property(retain, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
@property(nonatomic) __weak SessionViewController *sessionViewController; // @synthesize sessionViewController=_sessionViewController;
@property(nonatomic) long long sessionType; // @synthesize sessionType=_sessionType;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)yxPLAssetImageViewController:(id)arg1 didFinishPickingImages:(id)arg2;
- (void)setKeyBoardHeight:(long long)arg1;
- (void)textViewDidPaste:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)willHideKeyBoard;
- (void)willShowKeyBoard:(struct CGRect)arg1;
- (void)onCopyURLDidDetectedFail:(id)arg1;
- (void)onCopyURLDidDetectedSuccessfully:(id)arg1;
- (void)adjustRecentlyURLViewBottomWithInputViewTop:(double)arg1;
- (void)sendYXRecentlyURL;
- (void)hideRecentlyURL;
- (void)showRecentlyURL;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)goTeamChatListView:(id)arg1;
- (void)showRecentlyImage;
- (void)hideRecentlyImage;
- (void)onTimerHolderFire:(id)arg1;
- (void)showBigRecentlyImageView;
- (void)sendRecentlyImageView;
- (void)compled:(id)arg1;
- (void)controlPressed:(id)arg1;
- (_Bool)checkRecentlyImage:(id)arg1 andTime:(id)arg2;
- (void)selectPlusButtonFirstly;
- (void)showMediaController;
- (void)removeListenEvents;
- (void)addListenEvents;
- (void)initUIComponents;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

