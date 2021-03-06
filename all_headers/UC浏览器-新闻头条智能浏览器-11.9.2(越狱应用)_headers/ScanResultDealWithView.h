//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITextView;

@interface ScanResultDealWithView : UIView <UITextViewDelegate>
{
    UIButton *m_buttonLeft;
    UIButton *m_buttonRight;
    UIButton *m_cancelBtn;
    UIButton *m_tryAgainBtn;
    UILabel *m_viewTitle;
    UILabel *m_title;
    UILabel *m_failInfo;
    UITextView *m_info;
    UILabel *m_smsTel;
    UITextView *m_smsInfo;
    NSString *m_scanResult;
    int m_nType;
    UILabel *m_labelPrompt;
    CDUnknownBlockType _completedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completedBlock; // @synthesize completedBlock=_completedBlock;
- (void)afterShowResultAction;
- (void)preShowResultAction;
- (void)didThemeChange;
- (void)onChangeColor;
- (void)addLabelResultText;
- (void)adjustLabelPromptKeyView:(struct CGRect)arg1;
- (void)addLabelPromptKey:(struct CGRect)arg1;
- (void)adjustSMSView:(struct CGRect)arg1;
- (void)addSMSViewObject:(struct CGRect)arg1;
- (void)setLRButtonFrame;
- (void)setRightButtonProperty;
- (void)addRightButton:(struct CGRect)arg1;
- (void)setCopyTextBtnProperty;
- (void)addCopyTextBtn:(struct CGRect)arg1;
- (void)setGoBackBtnProperty;
- (void)setTryAgainBtnProperty;
- (void)addTryAgainBtn:(struct CGRect)arg1;
- (void)setButtonProperty:(id)arg1;
- (id)addButton:(struct CGRect)arg1 title:(id)arg2;
- (void)addGoBackButton:(struct CGRect)arg1;
- (void)setRightButtonTitle:(int)arg1;
- (void)loadObjectSuccessView:(struct CGRect)arg1;
- (void)loadObjectFailView:(struct CGRect)arg1;
- (void)loadObjects:(struct CGRect)arg1 withBKImg:(id)arg2;
- (void)addTitleLabel:(struct CGRect)arg1;
- (void)tryAgainBtnDo;
- (void)cancelBtnDo;
- (void)buttonRightDo;
- (void)tryOpenURL:(id)arg1;
- (void)buttonLeftDo;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 resultText:(id)arg2 completedBlock:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1 resultFlag:(_Bool)arg2 resultText:(id)arg3 bkImg:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

