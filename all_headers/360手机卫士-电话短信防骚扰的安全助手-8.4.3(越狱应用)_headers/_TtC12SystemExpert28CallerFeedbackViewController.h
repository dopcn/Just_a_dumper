//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC12SystemExpert8SGBaseVC.h"

@class MBProgressHUD, NSString, QHttpOperation, UIButton, UILabel, UITextField, UITextView;

@interface _TtC12SystemExpert28CallerFeedbackViewController : _TtC12SystemExpert8SGBaseVC
{
    // Error parsing type: , name: contactTextField
    // Error parsing type: , name: contextTextView
    // Error parsing type: , name: contextPlaceholder
    // Error parsing type: , name: feedbackTag
    // Error parsing type: , name: loadingHud
    // Error parsing type: , name: sendButton
    // Error parsing type: , name: isSending
    // Error parsing type: , name: operation
    // Error parsing type: , name: contact_max_length
    // Error parsing type: , name: context_max_length
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1 rootVC:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChangeWithTextFeild:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)closeSelf;
- (void)onFeedbackWithOper:(id)arg1;
- (void)cancelOperation;
- (void)sendOperation;
- (void)showToastWithText:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)updateSendButton;
- (void)updateContext;
- (void)onClickSendButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
@property(nonatomic, readonly) long long context_max_length; // @synthesize context_max_length;
@property(nonatomic, readonly) long long contact_max_length; // @synthesize contact_max_length;
@property(nonatomic, retain) QHttpOperation *operation; // @synthesize operation;
@property(nonatomic) _Bool isSending; // @synthesize isSending;
@property(nonatomic, retain) UIButton *sendButton; // @synthesize sendButton;
@property(nonatomic, retain) MBProgressHUD *loadingHud; // @synthesize loadingHud;
@property(nonatomic, copy) NSString *feedbackTag; // @synthesize feedbackTag;
@property(nonatomic) __weak UILabel *contextPlaceholder; // @synthesize contextPlaceholder;
@property(nonatomic) __weak UITextView *contextTextView; // @synthesize contextTextView;
@property(nonatomic) __weak UITextField *contactTextField; // @synthesize contactTextField;

@end

