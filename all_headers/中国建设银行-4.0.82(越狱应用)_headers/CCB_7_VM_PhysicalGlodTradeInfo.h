//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseFormViewModel.h"

@class CCBBaseError, CCB_O_PYX009, NSArray, NSMutableArray;

@interface CCB_7_VM_PhysicalGlodTradeInfo : CCBBaseFormViewModel
{
    _Bool _PYX009_Status;
    NSArray *_conditionArr;
    NSArray *_tradeDatas;
    CCB_O_PYX009 *_PYX009;
    CCBBaseError *_PYX009_error;
    NSMutableArray *_allCityData;
}

@property(retain, nonatomic) NSMutableArray *allCityData; // @synthesize allCityData=_allCityData;
@property(retain, nonatomic) CCBBaseError *PYX009_error; // @synthesize PYX009_error=_PYX009_error;
@property(nonatomic) _Bool PYX009_Status; // @synthesize PYX009_Status=_PYX009_Status;
@property(retain, nonatomic) CCB_O_PYX009 *PYX009; // @synthesize PYX009=_PYX009;
@property(retain, nonatomic) NSArray *tradeDatas; // @synthesize tradeDatas=_tradeDatas;
@property(retain, nonatomic) NSArray *conditionArr; // @synthesize conditionArr=_conditionArr;
- (void).cxx_destruct;
- (void)requestFinished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (void)requestPYX009;
- (id)modelTransferData:(id)arg1;
- (void)reloadLastTradeDatas:(id)arg1;
- (id)init;

@end

