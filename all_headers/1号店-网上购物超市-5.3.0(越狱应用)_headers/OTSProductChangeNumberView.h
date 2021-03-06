//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSIndexPath, NSNumber, NSString, UIButton, UITextField;
@protocol OTSProductChangeNumberViewDelegate;

@interface OTSProductChangeNumberView : UIView
{
    double _itemWidth_Height;
    NSNumber *_lowerCount;
    NSNumber *_limitCount;
    NSNumber *_lastProdutcNumber;
    NSNumber *_currentProductNumber;
    NSIndexPath *_currentIndexPath;
    _Bool _numberTextFieldIsCanEdit;
    id <OTSProductChangeNumberViewDelegate> _aDelegate;
    UIButton *_reduceBtn;
    UITextField *_numberTextField;
    UIButton *_addBtn;
}

@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) UIButton *addBtn; // @synthesize addBtn=_addBtn;
@property(retain, nonatomic) UITextField *numberTextField; // @synthesize numberTextField=_numberTextField;
@property(retain, nonatomic) UIButton *reduceBtn; // @synthesize reduceBtn=_reduceBtn;
@property(nonatomic) __weak id <OTSProductChangeNumberViewDelegate> aDelegate; // @synthesize aDelegate=_aDelegate;
@property(retain, nonatomic) NSNumber *limitCount; // @synthesize limitCount=_limitCount;
@property(nonatomic) _Bool numberTextFieldIsCanEdit; // @synthesize numberTextFieldIsCanEdit=_numberTextFieldIsCanEdit;
- (void).cxx_destruct;
- (void)dealloc;
- (void)productNumberReduceOrAdd;
- (void)handleNotification:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)numberTextFieldValueChanged:(id)arg1;
- (void)okBtnClicked:(id)arg1;
- (void)cancelBtnClicked:(id)arg1;
- (void)addBtnCanClicked;
- (void)reduceBtnCanClicked;
- (void)setLowerCount:(id)arg1;
- (void)addBtnClicked:(id)arg1;
- (void)reduceBtnClicked:(id)arg1;
- (void)updateProductNumber:(id)arg1 andCurrentIndePath:(id)arg2;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

