//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OTSCore/OTSValueObject.h>

@class MoneyVO, NSArray, OrderPopInfoVO;

@interface Bag : OTSValueObject
{
    MoneyVO *_freshSkuPrice;
    MoneyVO *_notFreshSkuPrice;
    OrderPopInfoVO *_popInfo;
    NSArray *_sortedList;
}

+ (Class)classForCollectionProperty:(id)arg1;
@property(retain, nonatomic) NSArray *sortedList; // @synthesize sortedList=_sortedList;
@property(retain, nonatomic) OrderPopInfoVO *popInfo; // @synthesize popInfo=_popInfo;
@property(retain, nonatomic) MoneyVO *notFreshSkuPrice; // @synthesize notFreshSkuPrice=_notFreshSkuPrice;
@property(retain, nonatomic) MoneyVO *freshSkuPrice; // @synthesize freshSkuPrice=_freshSkuPrice;
- (void).cxx_destruct;
- (id)allMainProductInpop;
- (id)bagCheckSkuidType:(_Bool)arg1 andVO:(id)arg2;
- (id)bagSkuidArray:(_Bool)arg1;
- (id)bagCheckSkuidArrayIsFresh:(_Bool)arg1;

@end

