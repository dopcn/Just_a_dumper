//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "METViewModel.h"

#import "METHomeNativeModuleViewModelProtocol-Protocol.h"
#import "PFBHomePageCacheViewModelProtocol-Protocol.h"

@class NSString, PFBDynamicLayoutGroupData, RACCommand;

@interface PFBHomeDiscountTopicCommonViewModel : METViewModel <METHomeNativeModuleViewModelProtocol, PFBHomePageCacheViewModelProtocol>
{
    _Bool isDisplayArrived;
    _Bool _isResponseArrived;
    RACCommand *_fetchDataCommand;
    PFBDynamicLayoutGroupData *_groupResponse;
    NSString *_fetchurl;
    NSString *_displayName;
}

@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *fetchurl; // @synthesize fetchurl=_fetchurl;
@property(nonatomic) _Bool isResponseArrived; // @synthesize isResponseArrived=_isResponseArrived;
@property(retain, nonatomic) PFBDynamicLayoutGroupData *groupResponse; // @synthesize groupResponse=_groupResponse;
@property(nonatomic) _Bool isDisplayArrived; // @synthesize isDisplayArrived;
@property(retain, nonatomic) RACCommand *fetchDataCommand; // @synthesize fetchDataCommand=_fetchDataCommand;
- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 displayName:(id)arg2;
- (void)updateFetchDataCommandWithFetchUrl:(id)arg1 displayName:(id)arg2;
- (id)initWithFetchUrl:(id)arg1 displayName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

