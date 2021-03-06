//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBOTBaseViewModel.h"

@class NSDictionary, NSMutableArray, NSString, RACCommand, WBOTuserSetting;

@interface WBOTSubsidyCostItemViewModel : WBOTBaseViewModel
{
    _Bool _subsidy;
    RACCommand *_fetchDateCommand;
    NSString *_subsidyPeriodBegin;
    NSString *_subsidyPeriodEnd;
    NSDictionary *_wholeSalaryWorkTypeDict;
    NSMutableArray *_overTimeModlesArray;
    NSDictionary *_subsidyItemsDictionary;
    NSMutableArray *_wholeSalaryInitModelsArray;
    WBOTuserSetting *_subsidyUserSetting;
}

@property(retain, nonatomic) WBOTuserSetting *subsidyUserSetting; // @synthesize subsidyUserSetting=_subsidyUserSetting;
@property(retain, nonatomic) NSMutableArray *wholeSalaryInitModelsArray; // @synthesize wholeSalaryInitModelsArray=_wholeSalaryInitModelsArray;
@property(retain, nonatomic) NSDictionary *subsidyItemsDictionary; // @synthesize subsidyItemsDictionary=_subsidyItemsDictionary;
@property(retain, nonatomic) NSMutableArray *overTimeModlesArray; // @synthesize overTimeModlesArray=_overTimeModlesArray;
@property(retain, nonatomic) NSDictionary *wholeSalaryWorkTypeDict; // @synthesize wholeSalaryWorkTypeDict=_wholeSalaryWorkTypeDict;
@property(nonatomic, getter=isSubsidy) _Bool subsidy; // @synthesize subsidy=_subsidy;
@property(copy, nonatomic) NSString *subsidyPeriodEnd; // @synthesize subsidyPeriodEnd=_subsidyPeriodEnd;
@property(copy, nonatomic) NSString *subsidyPeriodBegin; // @synthesize subsidyPeriodBegin=_subsidyPeriodBegin;
@property(retain, nonatomic) RACCommand *fetchDateCommand; // @synthesize fetchDateCommand=_fetchDateCommand;
- (void).cxx_destruct;
- (_Bool)p_isInitModelsArray:(id)arg1 containsTheItemTitle:(id)arg2;
- (void)queryDateFromDataBase;
- (void)initialize;
- (id)initWithServices:(id)arg1 params:(id)arg2;

@end

