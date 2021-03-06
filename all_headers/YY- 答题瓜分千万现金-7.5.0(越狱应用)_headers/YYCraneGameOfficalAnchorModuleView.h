//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YYChannelModuleView.h"

#import "XHMicVolumeViewDelegate-Protocol.h"

@class AvatarControl, FBKVOController, NSLayoutConstraint, NSString, UIButton, UILabel, UIView, XHMicVolumeView, YYUserInfo;

@interface YYCraneGameOfficalAnchorModuleView : YYChannelModuleView <XHMicVolumeViewDelegate>
{
    unsigned int _volume;
    long long _uid;
    CDUnknownBlockType _onOfficalAnchorTapBlock;
    FBKVOController *_kvo;
    YYUserInfo *_userInfo;
    UIView *_contentView;
    UIView *_backgroundView;
    AvatarControl *_avatarControl;
    XHMicVolumeView *_voiceMeterView;
    UILabel *_nameLabel;
    UILabel *_anchorTagLabel;
    UIButton *_followButton;
    NSLayoutConstraint *_followWidthConstraint;
}

+ (id)officalAnchorModuleView;
@property(nonatomic) __weak NSLayoutConstraint *followWidthConstraint; // @synthesize followWidthConstraint=_followWidthConstraint;
@property(nonatomic) __weak UIButton *followButton; // @synthesize followButton=_followButton;
@property(nonatomic) __weak UILabel *anchorTagLabel; // @synthesize anchorTagLabel=_anchorTagLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak XHMicVolumeView *voiceMeterView; // @synthesize voiceMeterView=_voiceMeterView;
@property(nonatomic) __weak AvatarControl *avatarControl; // @synthesize avatarControl=_avatarControl;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned int volume; // @synthesize volume=_volume;
@property(retain, nonatomic) YYUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) FBKVOController *kvo; // @synthesize kvo=_kvo;
@property(copy, nonatomic) CDUnknownBlockType onOfficalAnchorTapBlock; // @synthesize onOfficalAnchorTapBlock=_onOfficalAnchorTapBlock;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (_Bool)_doLoginIfNeed;
- (void)onAnchorInfoClick:(id)arg1;
- (float)sampleVolumeOfMicVolumeView:(id)arg1;
- (void)onAudioRenderVolumeChangedEvent:(id)arg1;
- (void)onCraneGameUnifiedConfigLoadComplete:(id)arg1;
- (void)entAnchorFansAction:(id)arg1 onCancelFollowAnchorWithResult:(_Bool)arg2 anchorUserId:(long long)arg3;
- (void)entAnchorFansAction:(id)arg1 onFollowAnchorWithResult:(_Bool)arg2 anchorUserId:(long long)arg3;
- (void)onFollowBtnClick:(id)arg1;
- (void)updateFollowbtnState:(_Bool)arg1;
- (void)queryUserFollowState;
- (void)updateAnchorName;
- (void)updateAnchorAvatar;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

