//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormItem.h"

@class NSString;

@interface CCB_7_ProfitAndLossAnalysisItem : CCBFormItem
{
    NSString *_productNameStr;
    NSString *_currencyStr;
    NSString *_currentPrincipalStr;
    NSString *_referenceProfitAndLossStr;
}

+ (id)reuseCellIdentifier;
@property(retain, nonatomic) NSString *referenceProfitAndLossStr; // @synthesize referenceProfitAndLossStr=_referenceProfitAndLossStr;
@property(retain, nonatomic) NSString *currentPrincipalStr; // @synthesize currentPrincipalStr=_currentPrincipalStr;
@property(retain, nonatomic) NSString *currencyStr; // @synthesize currencyStr=_currencyStr;
@property(retain, nonatomic) NSString *productNameStr; // @synthesize productNameStr=_productNameStr;
- (void).cxx_destruct;

@end

