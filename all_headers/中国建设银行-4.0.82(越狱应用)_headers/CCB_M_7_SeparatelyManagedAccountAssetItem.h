//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormItem.h"

@class NSString, UIColor;

@interface CCB_M_7_SeparatelyManagedAccountAssetItem : CCBFormItem
{
    _Bool _showAssetCheck;
    _Bool _showRightArrow;
    long long _showType;
    NSString *_marketValue;
    NSString *_profitRate;
    NSString *_riskStandAbilityValue;
    NSString *_investmentTypeValue;
    UIColor *_profitRateColor;
    NSString *_profitValue;
    long long _segmentIndex;
}

@property(nonatomic) long long segmentIndex; // @synthesize segmentIndex=_segmentIndex;
@property(copy, nonatomic) NSString *profitValue; // @synthesize profitValue=_profitValue;
@property(retain, nonatomic) UIColor *profitRateColor; // @synthesize profitRateColor=_profitRateColor;
@property(copy, nonatomic) NSString *investmentTypeValue; // @synthesize investmentTypeValue=_investmentTypeValue;
@property(copy, nonatomic) NSString *riskStandAbilityValue; // @synthesize riskStandAbilityValue=_riskStandAbilityValue;
@property(copy, nonatomic) NSString *profitRate; // @synthesize profitRate=_profitRate;
@property(copy, nonatomic) NSString *marketValue; // @synthesize marketValue=_marketValue;
@property(nonatomic) _Bool showRightArrow; // @synthesize showRightArrow=_showRightArrow;
@property(nonatomic) _Bool showAssetCheck; // @synthesize showAssetCheck=_showAssetCheck;
@property(nonatomic) long long showType; // @synthesize showType=_showType;
- (void).cxx_destruct;

@end

