//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString, PriceType;

@interface FlightPolicyPackagePriceItemInformationModel : CTBusinessBean
{
    NSString *priceItemTitle;
    PriceType *salePrice;
    PriceType *originalPrice;
    _Bool isDefaultPrice;
    NSString *packageRuleID;
    NSMutableArray *priceNoteList;
}

@property(retain, nonatomic) NSMutableArray *priceNoteList; // @synthesize priceNoteList;
@property(copy, nonatomic) NSString *packageRuleID; // @synthesize packageRuleID;
@property(nonatomic) _Bool isDefaultPrice; // @synthesize isDefaultPrice;
@property(retain, nonatomic) PriceType *originalPrice; // @synthesize originalPrice;
@property(retain, nonatomic) PriceType *salePrice; // @synthesize salePrice;
@property(copy, nonatomic) NSString *priceItemTitle; // @synthesize priceItemTitle;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

