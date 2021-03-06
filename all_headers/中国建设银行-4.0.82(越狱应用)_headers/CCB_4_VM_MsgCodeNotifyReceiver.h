//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseFormViewModel.h"

@class CCBInputFormItem, CCBLabelFormItem, CCBNextButtonFormItem, CCBViewController, CCB_4_MsgCodeNotifyReceiverMessageFormItem, CCB_4_TransferInofModel, CCB_O_NP0006, NSString;

@interface CCB_4_VM_MsgCodeNotifyReceiver : CCBBaseFormViewModel
{
    _Bool _isEnable;
    CCBViewController *_ViewController;
    CCB_4_TransferInofModel *_selectedModel;
    NSString *_inFlag;
    CCBInputFormItem *_mobile;
    CCB_4_MsgCodeNotifyReceiverMessageFormItem *_message;
    CCB_O_NP0006 *_NP0006Model;
    NSString *_transType;
    CDUnknownBlockType _nextBlock;
    CCBNextButtonFormItem *_nextButton;
    CCBLabelFormItem *_mobileItem;
}

@property(retain, nonatomic) CCBLabelFormItem *mobileItem; // @synthesize mobileItem=_mobileItem;
@property(retain, nonatomic) CCBNextButtonFormItem *nextButton; // @synthesize nextButton=_nextButton;
@property(copy, nonatomic) CDUnknownBlockType nextBlock; // @synthesize nextBlock=_nextBlock;
@property(copy, nonatomic) NSString *transType; // @synthesize transType=_transType;
@property(retain, nonatomic) CCB_O_NP0006 *NP0006Model; // @synthesize NP0006Model=_NP0006Model;
@property(retain, nonatomic) CCB_4_MsgCodeNotifyReceiverMessageFormItem *message; // @synthesize message=_message;
@property(retain, nonatomic) CCBInputFormItem *mobile; // @synthesize mobile=_mobile;
@property(nonatomic) _Bool isEnable; // @synthesize isEnable=_isEnable;
@property(copy, nonatomic) NSString *inFlag; // @synthesize inFlag=_inFlag;
@property(retain, nonatomic) CCB_4_TransferInofModel *selectedModel; // @synthesize selectedModel=_selectedModel;
@property(retain, nonatomic) CCBViewController *ViewController; // @synthesize ViewController=_ViewController;
- (void).cxx_destruct;
- (void)setNextButtonEnable;
- (void)requestFinished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (void)NP0007shortNote:(CDUnknownBlockType)arg1;
- (void)NP0006shortNote:(CDUnknownBlockType)arg1;
- (id)init;

@end

