//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLView.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class GLButton, GLPickerView, NSMutableDictionary, NSString;

@interface WDSDatePickerView : GLView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    GLButton *bkGView;
    GLView *pickerCon;
    GLPickerView *dPickerView;
    GLButton *backButton;
    GLButton *okButton;
    _Bool _isAnimateIng;
    long long _showType;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    NSMutableDictionary *_myListDic;
    long long _pSelectRowInt;
}

@property(nonatomic) long long pSelectRowInt; // @synthesize pSelectRowInt=_pSelectRowInt;
@property(nonatomic) _Bool isAnimateIng; // @synthesize isAnimateIng=_isAnimateIng;
@property(retain, nonatomic) NSMutableDictionary *myListDic; // @synthesize myListDic=_myListDic;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) long long showType; // @synthesize showType=_showType;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)loadPickerViewDateWithDic:(id)arg1 fromSelectRowInt:(long long)arg2;
- (void)setClickPickerViewFromSuccessBlock:(CDUnknownBlockType)arg1 fromFailureBlock:(CDUnknownBlockType)arg2;
- (void)layoutRemoveViewAndAnimation;
- (void)layoutAddViewAndAnimation;
- (void)okButtonClick:(id)arg1;
- (void)backButtonClick:(id)arg1;
- (void)bkGViewClick:(id)arg1;
- (void)layoutAllDatePickerViewFrame;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

