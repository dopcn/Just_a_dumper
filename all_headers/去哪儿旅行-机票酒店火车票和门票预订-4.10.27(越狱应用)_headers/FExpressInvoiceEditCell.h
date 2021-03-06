//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBaseGroupedCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UILabel, UITextField;
@protocol FExpressInvoiceEditCellDelegate;

@interface FExpressInvoiceEditCell : FBaseGroupedCell <UITextFieldDelegate>
{
    UITextField *_inputView;
    id <FExpressInvoiceEditCellDelegate> _delegate;
    UILabel *_labelName;
    UILabel *_labelContent;
    UILabel *_labelArrow;
}

@property(retain, nonatomic) UILabel *labelArrow; // @synthesize labelArrow=_labelArrow;
@property(retain, nonatomic) UILabel *labelContent; // @synthesize labelContent=_labelContent;
@property(retain, nonatomic) UILabel *labelName; // @synthesize labelName=_labelName;
@property(nonatomic) __weak id <FExpressInvoiceEditCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITextField *inputView; // @synthesize inputView=_inputView;
- (void).cxx_destruct;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)inputValueChanged:(id)arg1;
- (void)setupSelectCellWithName:(id)arg1 contentText:(id)arg2 rightIcon:(id)arg3;
- (void)setupInputCellWithName:(id)arg1 initText:(id)arg2 placeHolder:(id)arg3 isLastLine:(_Bool)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

