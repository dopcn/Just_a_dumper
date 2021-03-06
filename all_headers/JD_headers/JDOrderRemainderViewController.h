//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class JDButton, JDLabel, JDStoreNetwork, NSDictionary, NSString, UIScrollView, UITextField, UITextView;

@interface JDOrderRemainderViewController : JDViewController <UITextFieldDelegate, UITextViewDelegate, UIScrollViewDelegate, JDBaseToastViewDelegate>
{
    JDStoreNetwork *net_;
    NSString *m_orderID;
    NSDictionary *m_dataDict;
    UIScrollView *m_scrollView;
    JDButton *messageBtn;
    JDButton *photoBtn;
    UITextField *phoneTextField;
    UITextView *messageTextView;
    JDLabel *placeholderLabel;
    JDLabel *countLabel;
    _Bool isRequesting;
    int fromType;
    long long phoneUrgeLenLimit;
    long long messageUrgeLenLimit;
}

@property(nonatomic) long long messageUrgeLenLimit; // @synthesize messageUrgeLenLimit;
@property(nonatomic) long long phoneUrgeLenLimit; // @synthesize phoneUrgeLenLimit;
@property(nonatomic) int fromType; // @synthesize fromType;
@property(copy, nonatomic) NSString *m_orderID; // @synthesize m_orderID;
@property(retain, nonatomic) NSDictionary *m_dataDict; // @synthesize m_dataDict;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (_Bool)validatePhone:(id)arg1;
- (void)commitBtnClicked:(id)arg1;
- (void)replyBtnClicked:(id)arg1;
- (void)rightBtnClicked:(id)arg1;
- (void)hiddenKeyBoard;
- (void)swipeGesture;
- (void)tapGesture;
- (id)disableEmoji:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)addRequest;
- (void)resetFrame;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)createLineFrame:(struct CGRect)arg1;
- (id)createReplyBtnFrame:(struct CGRect)arg1 title:(id)arg2;
- (void)layoutSelfSubViews;
- (void)viewDidLoad;
- (id)initWithOrderID:(id)arg1 data:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

