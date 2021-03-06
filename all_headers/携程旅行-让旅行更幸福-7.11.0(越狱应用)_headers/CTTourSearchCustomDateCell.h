//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class CTTourSearchCustomDateTextField, CTTourSearchRequestModel, NSString, UIDatePicker, UILabel;

@interface CTTourSearchCustomDateCell : UICollectionViewCell <UITextFieldDelegate>
{
    CDUnknownBlockType _departDateBlock;
    CTTourSearchRequestModel *_request;
    UILabel *_leftDescLabel;
    UILabel *_rightDescLabel;
    CTTourSearchCustomDateTextField *_leftTextField;
    CTTourSearchCustomDateTextField *_rightTextField;
    UIDatePicker *_datePicker;
    long long _selectedTextFieldTag;
}

@property(nonatomic) long long selectedTextFieldTag; // @synthesize selectedTextFieldTag=_selectedTextFieldTag;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) CTTourSearchCustomDateTextField *rightTextField; // @synthesize rightTextField=_rightTextField;
@property(retain, nonatomic) CTTourSearchCustomDateTextField *leftTextField; // @synthesize leftTextField=_leftTextField;
@property(nonatomic) __weak UILabel *rightDescLabel; // @synthesize rightDescLabel=_rightDescLabel;
@property(nonatomic) __weak UILabel *leftDescLabel; // @synthesize leftDescLabel=_leftDescLabel;
@property(retain, nonatomic) CTTourSearchRequestModel *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType departDateBlock; // @synthesize departDateBlock=_departDateBlock;
- (void).cxx_destruct;
- (void)rightDescBtnClicked:(id)arg1;
- (void)leftDescBtnClicked:(id)arg1;
- (void)cancelBtnClicked;
- (void)doneBtnClicked;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)bindFilterItemWithRequest:(id)arg1;
- (id)addToolbar;
- (id)addDatePicker;
- (id)addTextField;
- (void)initTextField;
- (void)initUI;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

