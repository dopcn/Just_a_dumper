//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"
#import "UPKeyboardDelegate-Protocol.h"

@class NSString, UPKeyboard, UPLableCell, UPLineView, UPTextField;
@protocol UITextFieldDelegate><UPTextFieldDelegate;

@interface UPBaseCell : UIView <UPKeyboardDelegate, UITextFieldDelegate>
{
    UPTextField *mTextField;
    UPKeyboard *mKeyboard;
    long long mMaxLen;
    UIView *mBGView;
    UPLableCell *mLabelCell;
    UPLableCell *mTipCell;
    NSString *mName;
    NSString *mPlaceHolder;
    _Bool _needDeviceEncryption;
    _Bool _readOnly;
    UPLineView *_topLine;
    UPLineView *_bottomLine;
    id <UITextFieldDelegate><UPTextFieldDelegate> mDelegate;
    NSString *mRegexP;
}

@property(retain, nonatomic) NSString *mRegexP; // @synthesize mRegexP;
@property(nonatomic) __weak id <UITextFieldDelegate><UPTextFieldDelegate> mDelegate; // @synthesize mDelegate;
@property(retain, nonatomic) NSString *mPlaceHolder; // @synthesize mPlaceHolder;
@property(retain, nonatomic) NSString *mName; // @synthesize mName;
- (void).cxx_destruct;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)isReadOnly;
- (void)shouldReadOnly:(_Bool)arg1;
- (void)deleteClick;
- (void)textChanged:(id)arg1;
- (void)doneClick;
- (_Bool)isLegalLength;
- (_Bool)isEmpty;
- (id)keyboard;
- (long long)maxLength;
- (id)textField;
- (void)setTextFieldDelegate:(id)arg1;
- (id)value;
- (id)param;
- (id)paramWithString:(id)arg1;
- (id)text;
- (void)setNeedsDeviceEncryption;
- (void)setText:(id)arg1;
- (void)setLeftTitle:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setLabelFont:(id)arg1;
- (void)setLabelColor:(id)arg1;
- (void)addBGViewAtY:(double)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 content:(id)arg2 delegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 content:(id)arg2 delegate:(id)arg3 lineFlag:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1 content:(id)arg2 delegate:(id)arg3 lineFlag:(_Bool)arg4 leftTitle:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

