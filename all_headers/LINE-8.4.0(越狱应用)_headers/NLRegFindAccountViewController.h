//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLRegTableViewController.h"

#import "UITextViewDelegate-Protocol.h"

@class NLRegImageLabelView, NLRegUnderlineTextField, NSString, UITextView;

@interface NLRegFindAccountViewController : NLRegTableViewController <UITextViewDelegate>
{
    _Bool _hidesFindNaverIDButton;
    NLRegImageLabelView *_imageLabelView;
    NLRegUnderlineTextField *_emailTextField;
    UITextView *_findNaverIDTextView;
}

@property(retain, nonatomic) UITextView *findNaverIDTextView; // @synthesize findNaverIDTextView=_findNaverIDTextView;
@property(retain, nonatomic) NLRegUnderlineTextField *emailTextField; // @synthesize emailTextField=_emailTextField;
@property(retain, nonatomic) NLRegImageLabelView *imageLabelView; // @synthesize imageLabelView=_imageLabelView;
@property(nonatomic) _Bool hidesFindNaverIDButton; // @synthesize hidesFindNaverIDButton=_hidesFindNaverIDButton;
- (void).cxx_destruct;
- (void)tabKeyPressed;
- (void)hideIndicator;
- (void)showIndicator;
- (void)configureBottomButton:(id)arg1 atIndex:(long long)arg2;
- (long long)numberOfBottomButtons;
- (void)updateDoneButtonState;
- (id)email;
- (struct CGSize)imageLabelViewSize;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)doneButtonPressed:(id)arg1;
- (void)textFieldEditingChanged:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

