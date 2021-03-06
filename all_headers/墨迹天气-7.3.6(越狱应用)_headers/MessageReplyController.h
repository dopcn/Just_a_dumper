//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJUIViewController.h"

#import "InputFaceKeyboardViewProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class InputFaceKeyboardView, NSString, PersonalMsgData, UIButton, UILabel, UITextView, UIView, UIViewController;

@interface MessageReplyController : MJUIViewController <UITextViewDelegate, UIGestureRecognizerDelegate, InputFaceKeyboardViewProtocol>
{
    int _inputType;
    float _keyboardHeight;
    UIView *textBackView;
    UITextView *_textView;
    UIView *_backView;
    UIViewController *_parentVC;
    PersonalMsgData *_personalMsgData;
    InputFaceKeyboardView *_faceKeyboardView;
    UIButton *_keyBoardSwithBtn;
    UILabel *_tipLabel;
}

@property(nonatomic) float keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) int inputType; // @synthesize inputType=_inputType;
@property(retain, nonatomic) UIButton *keyBoardSwithBtn; // @synthesize keyBoardSwithBtn=_keyBoardSwithBtn;
@property(retain, nonatomic) InputFaceKeyboardView *faceKeyboardView; // @synthesize faceKeyboardView=_faceKeyboardView;
@property(retain, nonatomic) PersonalMsgData *personalMsgData; // @synthesize personalMsgData=_personalMsgData;
@property(retain, nonatomic) UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *textBackView; // @synthesize textBackView;
- (void).cxx_destruct;
- (void)deleteBtnPressedTransferContext:(id)arg1;
- (void)faceBtnPressedTransferContext:(id)arg1;
- (id)getContent;
- (void)textViewDidChange:(id)arg1;
- (void)setTips:(id)arg1;
- (void)switchInputType:(id)arg1;
- (void)dealloc;
- (void)removeObservers;
- (void)keyboardChanged:(id)arg1;
- (void)addObservers;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)p_showResultAlertWithOperation:(id)arg1;
- (void)sendComment:(id)arg1;
- (_Bool)p_checkIfCanSendWithHandleBlock:(CDUnknownBlockType)arg1;
- (void)dismissPresentViewController;
- (void)mjclickCancel;
- (void)presentFromViewController:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithViewController:(id)arg1 personData:(id)arg2;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

