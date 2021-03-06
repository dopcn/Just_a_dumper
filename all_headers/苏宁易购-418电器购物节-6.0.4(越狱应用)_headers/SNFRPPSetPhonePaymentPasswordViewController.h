//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNFCLBaseViewController.h"

#import "SNFRPPPasswordTextFiledViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, SNFRPPConfirmPhonePasswordView, SNFRPPModifyBoundPhoneVerifyModeDto, SNFRPPSetPhonePaymentPasswordFirstView;

@interface SNFRPPSetPhonePaymentPasswordViewController : SNFCLBaseViewController <UITableViewDataSource, UITableViewDelegate, SNFRPPPasswordTextFiledViewDelegate, UITextFieldDelegate>
{
    NSString *_simplepwdReg;
    _Bool _hasJotPay;
    _Bool _jotPayBtnChecked;
    _Bool _shouldGuideFinger;
    _Bool _shouldGuideSmallPay;
    SNFRPPSetPhonePaymentPasswordFirstView *_firstView;
    SNFRPPConfirmPhonePasswordView *_confirmView;
    long long _type;
    long long _enterType;
    SNFRPPModifyBoundPhoneVerifyModeDto *_modeDto;
    NSString *_lastPassword;
    long long _iputCount;
    long long _requestCount;
}

@property(nonatomic) long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) _Bool shouldGuideSmallPay; // @synthesize shouldGuideSmallPay=_shouldGuideSmallPay;
@property(nonatomic) _Bool shouldGuideFinger; // @synthesize shouldGuideFinger=_shouldGuideFinger;
@property(nonatomic) _Bool jotPayBtnChecked; // @synthesize jotPayBtnChecked=_jotPayBtnChecked;
@property(nonatomic) _Bool hasJotPay; // @synthesize hasJotPay=_hasJotPay;
@property(nonatomic) long long iputCount; // @synthesize iputCount=_iputCount;
@property(copy, nonatomic) NSString *lastPassword; // @synthesize lastPassword=_lastPassword;
@property(retain, nonatomic) SNFRPPModifyBoundPhoneVerifyModeDto *modeDto; // @synthesize modeDto=_modeDto;
@property(nonatomic) long long enterType; // @synthesize enterType=_enterType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) SNFRPPConfirmPhonePasswordView *confirmView; // @synthesize confirmView=_confirmView;
@property(retain, nonatomic) SNFRPPSetPhonePaymentPasswordFirstView *firstView; // @synthesize firstView=_firstView;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)resetValidateModeodePhonePassword;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)rpp_passwordTextFiledDidComplete:(long long)arg1;
- (void)doSuccessResponse:(id)arg1;
- (void)handleFingerPrint:(id)arg1;
- (void)doRegisterFingerPrint:(CDUnknownBlockType)arg1;
- (void)onPushTipLabel;
- (void)adjustFirstViewTipView;
- (id)getFingerPrintProtocolUrl;
- (void)querySmallPayStatusReq;
- (void)fetchFingerprintEnable;
- (void)requestDone;
- (void)btnChanged;
- (void)backNavItemTapped;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initSubView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

