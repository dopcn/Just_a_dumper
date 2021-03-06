//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LOLBoxViewController.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITextField, UITextView;

@interface IMRedEnvelopesPublishViewController : LOLBoxViewController <UITextViewDelegate, UIAlertViewDelegate, UITextFieldDelegate>
{
    long long _targetId;
    long long _relationShip;
    UITextField *_totalYuanBaoTextField;
    UILabel *_contentTipLabel;
    UITextView *_contenTextView;
    UIButton *_publishButton;
}

@property(nonatomic) __weak UIButton *publishButton; // @synthesize publishButton=_publishButton;
@property(nonatomic) __weak UITextView *contenTextView; // @synthesize contenTextView=_contenTextView;
@property(nonatomic) __weak UILabel *contentTipLabel; // @synthesize contentTipLabel=_contentTipLabel;
@property(nonatomic) __weak UITextField *totalYuanBaoTextField; // @synthesize totalYuanBaoTextField=_totalYuanBaoTextField;
@property(nonatomic) long long relationShip; // @synthesize relationShip=_relationShip;
@property(nonatomic) long long targetId; // @synthesize targetId=_targetId;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)hideKeyboard;
- (void)checkPublishContent;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)backBtnPressed;
- (void)loadData;
- (void)makeRedEnvlopeInfoWith:(id)arg1;
- (void)publishIMRedEnvlp;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlertView;
- (void)publishButtonPressed:(id)arg1;
- (void)backToNormalNavigationStyle;
- (void)setNavigationStyle;
- (void)setUp;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

