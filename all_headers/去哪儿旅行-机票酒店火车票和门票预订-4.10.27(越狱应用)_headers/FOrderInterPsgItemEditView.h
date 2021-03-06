//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FTextFieldWithUpperCaseStringDelegate-Protocol.h"
#import "JumpHandleResponsePrt-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class FGenderBtn, FInterEditPassengerLineModel, FTextFieldWithUpperCaseString, FlightCustomTextField, LightControl, LineView, NSString, UILabel;
@protocol FOrderInterPsgItemEditViewDelegate;

@interface FOrderInterPsgItemEditView : UIView <UITextFieldDelegate, FTextFieldWithUpperCaseStringDelegate, JumpHandleResponsePrt>
{
    UILabel *_labelAttributeType;
    FlightCustomTextField *_textfieldAttributeValue;
    UILabel *_textfieldAttributeSubValue;
    UILabel *_arrowImgView;
    UILabel *_labelNameType;
    FTextFieldWithUpperCaseString *_textFieldName;
    UILabel *_imgViewIcon;
    LineView *_lineView;
    UILabel *_labelSexType;
    FGenderBtn *_buttonMan;
    FGenderBtn *_buttonWoman;
    id <FOrderInterPsgItemEditViewDelegate> _delegate;
    FInterEditPassengerLineModel *_model;
    NSString *_reuseIdentifier;
    LightControl *_lightCtrl;
    UILabel *_warmTipsLabel;
    LineView *_seperateLine;
}

@property(retain, nonatomic) LineView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) UILabel *warmTipsLabel; // @synthesize warmTipsLabel=_warmTipsLabel;
@property(retain, nonatomic) LightControl *lightCtrl; // @synthesize lightCtrl=_lightCtrl;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(retain, nonatomic) FInterEditPassengerLineModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <FOrderInterPsgItemEditViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)jumpHandleResponseData:(id)arg1 withOpenURL:(id)arg2 urlData:(id)arg3 userInfo:(id)arg4;
- (void)addKeyboardControllerForTextFields;
- (void)countryCodeCtrlClicked:(id)arg1;
- (void)creditClicked:(id)arg1;
- (id)getRightStr:(id)arg1;
- (id)formatPhone:(id)arg1;
- (void)nationalityClicked:(id)arg1;
- (void)birthDayClicked:(id)arg1;
- (void)invalidDayClicked:(id)arg1;
- (void)didFinishedUpperCaseString:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidFinished:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (void)updateSexInfo:(id)arg1 other:(id)arg2;
- (void)sexAction:(id)arg1;
- (void)setupWarmTipsLabelWithLeft:(double)arg1 top:(double)arg2 maxWidth:(double)arg3;
- (void)initLightCtrl;
- (void)setTextFieldAttributeValue:(id)arg1;
- (void)layoutCommonView:(id)arg1;
- (void)layoutCreditCardAndPhoneView:(id)arg1;
- (void)layoutGenderView:(id)arg1;
- (void)layoutNameView:(id)arg1;
- (void)createSexCellSubviews;
- (void)createNameCellSubviews:(id)arg1;
- (void)createCommonCellSubviews;
- (void)createCardNOPhoneSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

