//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LMRModel.h"

@class NSString;

@interface LMRSectionPrice : LMRModel
{
    long long _resId;
    NSString *_resName;
    long long _section;
    long long _resPrice;
    long long _resDiscountPrice;
}

+ (id)sectionPriceForId:(long long)arg1 withSectionPrices:(id)arg2;
@property(nonatomic) long long resDiscountPrice; // @synthesize resDiscountPrice=_resDiscountPrice;
@property(nonatomic) long long resPrice; // @synthesize resPrice=_resPrice;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(copy, nonatomic) NSString *resName; // @synthesize resName=_resName;
@property(nonatomic) long long resId; // @synthesize resId=_resId;
- (void).cxx_destruct;
- (void)setPropertyValueFromDict:(id)arg1;

@end

