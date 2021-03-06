//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

@class MQQCustomInputTextField, MQQDigitInputView, MQQInputListView;

@interface MQQTrafficAdjustLastLeftFlowViewController : MQQBaseViewController
{
    MQQCustomInputTextField *_lastLeftFlowTextField;
    MQQDigitInputView *_digitInputView;
    MQQInputListView *_inputListView;
}

@property(retain, nonatomic) MQQInputListView *inputListView; // @synthesize inputListView=_inputListView;
@property(retain, nonatomic) MQQDigitInputView *digitInputView; // @synthesize digitInputView=_digitInputView;
@property(retain, nonatomic) MQQCustomInputTextField *lastLeftFlowTextField; // @synthesize lastLeftFlowTextField=_lastLeftFlowTextField;
- (void)textFieldTextDidChanged:(id)arg1;
- (void)doneButonClicked:(id)arg1;
- (void)onCancelButonClicked:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

