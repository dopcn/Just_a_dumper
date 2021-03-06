//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AssociateLabelViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class AssociateLabelView, NSString, UIPlaceHolderTextField;
@protocol PersonerLabelViewDelegate;

@interface PersonerLabelView : UIView <UITextFieldDelegate, AssociateLabelViewDelegate>
{
    long long _textLimitCNLength;
    AssociateLabelView *_associateLabelView;
    id <PersonerLabelViewDelegate> _delegate;
    UIPlaceHolderTextField *_input;
}

@property(retain, nonatomic) UIPlaceHolderTextField *input; // @synthesize input=_input;
@property(nonatomic) __weak id <PersonerLabelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) AssociateLabelView *associateLabelView; // @synthesize associateLabelView=_associateLabelView;
- (void)onFocusAssociateView:(id)arg1;
- (void)associateLabelView:(id)arg1 associateLabelText:(id)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)finishPick:(id)arg1;
- (void)dealloc;
- (void)textFieldDidChange:(id)arg1;
- (void)addKeyWords:(id)arg1;
- (void)createKeyAssociateView;
- (void)createView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

