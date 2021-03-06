//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LMBaseVC.h"

#import "UITextViewDelegate-Protocol.h"

@class NSString, UILabel, UITextView;

@interface LMMySignatureVC : LMBaseVC <UITextViewDelegate>
{
    long long _oldTextLength;
    long long _viewType;
    UITextView *_textView;
    UILabel *_lengthLabel;
    UILabel *_feedbackLabel;
    UILabel *_placeholderLabel;
    NSString *_firstComeingSign;
}

@property(retain, nonatomic) NSString *firstComeingSign; // @synthesize firstComeingSign=_firstComeingSign;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UILabel *feedbackLabel; // @synthesize feedbackLabel=_feedbackLabel;
@property(retain, nonatomic) UILabel *lengthLabel; // @synthesize lengthLabel=_lengthLabel;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
- (void).cxx_destruct;
- (void)setupNaviBar;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)didClickRightButtonItem:(id)arg1;
- (void)didBackBarButonItem:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

