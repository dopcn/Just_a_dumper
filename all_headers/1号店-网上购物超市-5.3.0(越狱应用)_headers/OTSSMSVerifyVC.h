//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OTSBase/OTSVC.h>

#import "OTSCheckoutSMSVerifyServiceInterface-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSNumber, NSString, OTSSMSVerifyInteractor, OTSTimeCountButton, UIButton, UIImageView, UILabel, UITextField, UIView;

@interface OTSSMSVerifyVC : OTSVC <UIScrollViewDelegate, OTSCheckoutSMSVerifyServiceInterface>
{
    _Bool _canEdit34Address;
    _Bool _unResendSMS;
    int _type;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _didSendCallback;
    NSNumber *_payAmount;
    NSString *_couponNum;
    OTSSMSVerifyInteractor *_interactor;
    NSString *_userPhoneNumber;
    UIView *_mainView;
    UIView *_topBgView;
    UILabel *_topTipLbl;
    UIImageView *_topLineIv;
    UIImageView *_topLineUpIv;
    UIView *_contentView;
    UIImageView *_contentBgIv;
    UILabel *_mobileTipLbl;
    UILabel *_mobileLbl;
    UIView *_codeBorderLine;
    UIView *_codeMidLine;
    UILabel *_verifyCodeLbl;
    UITextField *_vertifyCodeTF;
    OTSTimeCountButton *_timeBtn;
    UILabel *_warnLabel;
    UIImageView *_warnLabelBgIv;
    UIButton *_submitBtn;
    NSLayoutConstraint *_contentViewCons;
}

+ (void)load;
@property(retain, nonatomic) NSLayoutConstraint *contentViewCons; // @synthesize contentViewCons=_contentViewCons;
@property(retain, nonatomic) UIButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(retain, nonatomic) UIImageView *warnLabelBgIv; // @synthesize warnLabelBgIv=_warnLabelBgIv;
@property(retain, nonatomic) UILabel *warnLabel; // @synthesize warnLabel=_warnLabel;
@property(retain, nonatomic) OTSTimeCountButton *timeBtn; // @synthesize timeBtn=_timeBtn;
@property(retain, nonatomic) UITextField *vertifyCodeTF; // @synthesize vertifyCodeTF=_vertifyCodeTF;
@property(retain, nonatomic) UILabel *verifyCodeLbl; // @synthesize verifyCodeLbl=_verifyCodeLbl;
@property(retain, nonatomic) UIView *codeMidLine; // @synthesize codeMidLine=_codeMidLine;
@property(retain, nonatomic) UIView *codeBorderLine; // @synthesize codeBorderLine=_codeBorderLine;
@property(retain, nonatomic) UILabel *mobileLbl; // @synthesize mobileLbl=_mobileLbl;
@property(retain, nonatomic) UILabel *mobileTipLbl; // @synthesize mobileTipLbl=_mobileTipLbl;
@property(retain, nonatomic) UIImageView *contentBgIv; // @synthesize contentBgIv=_contentBgIv;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *topLineUpIv; // @synthesize topLineUpIv=_topLineUpIv;
@property(retain, nonatomic) UIImageView *topLineIv; // @synthesize topLineIv=_topLineIv;
@property(retain, nonatomic) UILabel *topTipLbl; // @synthesize topTipLbl=_topTipLbl;
@property(retain, nonatomic) UIView *topBgView; // @synthesize topBgView=_topBgView;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(nonatomic) _Bool unResendSMS; // @synthesize unResendSMS=_unResendSMS;
@property(retain, nonatomic) NSString *userPhoneNumber; // @synthesize userPhoneNumber=_userPhoneNumber;
@property(retain, nonatomic) OTSSMSVerifyInteractor *interactor; // @synthesize interactor=_interactor;
@property(nonatomic) _Bool canEdit34Address; // @synthesize canEdit34Address=_canEdit34Address;
@property(retain, nonatomic) NSString *couponNum; // @synthesize couponNum=_couponNum;
@property(retain, nonatomic) NSNumber *payAmount; // @synthesize payAmount=_payAmount;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType didSendCallback; // @synthesize didSendCallback=_didSendCallback;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)submitBtnClicked:(id)arg1;
- (void)refetchBtnClicked:(id)arg1;
- (void)sendSmsVerfiyCode;
- (void)initUI;
- (void)requestData;
- (void)initData;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)leftBtnClicked:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setupPhoneNumber:(id)arg1 autoSendSms:(_Bool)arg2 lastSendTime:(id)arg3 onSend:(CDUnknownBlockType)arg4 onVerify:(CDUnknownBlockType)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

