//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModuleViewModel.h"

@class NSString, NVURLAction, RACCommand;

@interface TGCreateOrderSubmitViewModel : NVBaseModuleViewModel
{
    _Bool _submitEnable;
    RACCommand *_submitCommand;
    RACCommand *_applePaySubmitCommand;
    RACCommand *_walletCommand;
    long long _cellType;
    NVURLAction *_resultURLAction;
    NSString *_submitGALabel;
    long long _submitGADealGroupId;
    NSString *_submitDisableString;
}

@property(readonly, nonatomic) _Bool submitEnable; // @synthesize submitEnable=_submitEnable;
@property(readonly, copy, nonatomic) NSString *submitDisableString; // @synthesize submitDisableString=_submitDisableString;
@property(readonly, nonatomic) long long submitGADealGroupId; // @synthesize submitGADealGroupId=_submitGADealGroupId;
@property(readonly, copy, nonatomic) NSString *submitGALabel; // @synthesize submitGALabel=_submitGALabel;
@property(retain, nonatomic) NVURLAction *resultURLAction; // @synthesize resultURLAction=_resultURLAction;
@property(readonly, nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) RACCommand *walletCommand; // @synthesize walletCommand=_walletCommand;
@property(retain, nonatomic) RACCommand *applePaySubmitCommand; // @synthesize applePaySubmitCommand=_applePaySubmitCommand;
@property(retain, nonatomic) RACCommand *submitCommand; // @synthesize submitCommand=_submitCommand;
- (void).cxx_destruct;
- (void)setupViewModel;

@end

