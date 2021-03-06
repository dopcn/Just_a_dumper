//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMBaseViewController.h"

#import "UITextViewDelegate-Protocol.h"

@class FMPostActivitySetComponent, FMTextView, NSString, UIButton, UILabel, UIView;

@interface FMPostSubjectActivitySetLocationViewController : FMBaseViewController <UITextViewDelegate>
{
    FMPostActivitySetComponent *_activitySetViewModel;
    UIView *_editView;
    FMTextView *_textView;
    UILabel *_countLabel;
    UIButton *_saveButton;
}

@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) FMTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *editView; // @synthesize editView=_editView;
@property(retain, nonatomic) FMPostActivitySetComponent *activitySetViewModel; // @synthesize activitySetViewModel=_activitySetViewModel;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)layout;
- (void)bind;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

