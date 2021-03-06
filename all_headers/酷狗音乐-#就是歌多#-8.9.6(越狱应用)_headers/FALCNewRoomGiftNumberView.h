//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FALCNewNoPasteTextField, NSArray, UIButton;

@interface FALCNewRoomGiftNumberView : UIView
{
    NSArray *_numberArray;
    CDUnknownBlockType _numberOkCallBack;
    CDUnknownBlockType _numberDismissCallBack;
    long long _fullStatus;
    FALCNewNoPasteTextField *_numInputField;
    UIView *_topView;
    UIView *_bgView;
    UIButton *_okBtn;
    UIView *_btnContentView;
    UIButton *_maskBtn;
}

@property(retain, nonatomic) UIButton *maskBtn; // @synthesize maskBtn=_maskBtn;
@property(retain, nonatomic) UIView *btnContentView; // @synthesize btnContentView=_btnContentView;
@property(retain, nonatomic) UIButton *okBtn; // @synthesize okBtn=_okBtn;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) FALCNewNoPasteTextField *numInputField; // @synthesize numInputField=_numInputField;
@property(nonatomic) long long fullStatus; // @synthesize fullStatus=_fullStatus;
@property(copy, nonatomic) CDUnknownBlockType numberDismissCallBack; // @synthesize numberDismissCallBack=_numberDismissCallBack;
@property(copy, nonatomic) CDUnknownBlockType numberOkCallBack; // @synthesize numberOkCallBack=_numberOkCallBack;
- (void).cxx_destruct;
- (void)numInputAction:(id)arg1;
- (void)okAction:(id)arg1;
- (void)dismissViewAction;
- (void)showInView;
- (void)configNumBtns;
- (id)initWithFrame:(struct CGRect)arg1;

@end

