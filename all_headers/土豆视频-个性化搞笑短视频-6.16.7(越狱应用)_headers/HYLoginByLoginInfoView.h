//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HYBaseDialogueView.h"

#import "HYCountDownTimeDelegate-Protocol.h"
#import "HYDialogueProtocol-Protocol.h"

@class HYDialogueAvatarView, HYDialogueButtonView, HYDialogueMobileCodeView, HYDialogueTitleView, HYDialogueVoiceView, HYLoginMobileADView, HYRecommendLoginInfo, HYSliderAuthViewController, NSString;

@interface HYLoginByLoginInfoView : HYBaseDialogueView <HYCountDownTimeDelegate, HYDialogueProtocol>
{
    CDUnknownBlockType _loginSuccess;
    HYDialogueAvatarView *_avatarView;
    HYDialogueTitleView *_detailView;
    HYDialogueMobileCodeView *_mobileCodeView;
    HYDialogueButtonView *_submitView;
    HYDialogueVoiceView *_voiceView;
    HYLoginMobileADView *_adView;
    long long _sentCodeCount;
    NSString *_sendCodeType;
    HYSliderAuthViewController *_viewController;
    HYRecommendLoginInfo *_loginInfo;
}

@property(retain, nonatomic) HYRecommendLoginInfo *loginInfo; // @synthesize loginInfo=_loginInfo;
@property(retain, nonatomic) HYSliderAuthViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSString *sendCodeType; // @synthesize sendCodeType=_sendCodeType;
@property(nonatomic) long long sentCodeCount; // @synthesize sentCodeCount=_sentCodeCount;
@property(retain, nonatomic) HYLoginMobileADView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) HYDialogueVoiceView *voiceView; // @synthesize voiceView=_voiceView;
@property(retain, nonatomic) HYDialogueButtonView *submitView; // @synthesize submitView=_submitView;
@property(retain, nonatomic) HYDialogueMobileCodeView *mobileCodeView; // @synthesize mobileCodeView=_mobileCodeView;
@property(retain, nonatomic) HYDialogueTitleView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) HYDialogueAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(copy, nonatomic) CDUnknownBlockType loginSuccess; // @synthesize loginSuccess=_loginSuccess;
- (void).cxx_destruct;
- (id)pageName;
- (id)spm;
- (void)closeButtonTapped;
- (_Bool)disableEdge;
- (double)dialogueWidth;
- (double)dialogueHeight;
- (void)handleSliderCaptchaSessionID:(id)arg1;
- (void)handleTextFieldDidChanged;
- (void)handleLogingFailure:(id)arg1;
- (void)handleLogingSuccess;
- (void)fastLoginWithMobile:(id)arg1 region:(id)arg2 mobileCode:(id)arg3 ytid:(id)arg4 sendCodeType:(id)arg5;
- (void)loginByMobile;
- (void)submitButtonTap;
- (void)sendSMSWithCodeType:(id)arg1 mobileNumber:(id)arg2 regionCode:(id)arg3 AndChallengeResulut:(id)arg4;
- (void)countDownEnded;
- (void)needToVerifySliderCaptcha;
- (void)sentSmsCodeSuccessfully;
- (void)failedToSendSmsCodeWithError:(id)arg1;
- (void)sendVoiceSMS;
- (void)sendSMS;
- (id)descriptionParagraphStyle;
- (id)generateCodeTipStringWithMaskMobile:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

