//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class BDWalletCardInfo, NSArray, PayPostInfoItem, UserConsumptionInfoItem;

@interface BDWalletMethodsOfPayItem : NSObject <NSCopying>
{
    _Bool _isSelectBalance;
    _Bool _isSelectScore;
    _Bool _isSelectHasMonney;
    NSArray *_bindCardArray;
    UserConsumptionInfoItem *_userConsumptionItem;
    BDWalletCardInfo *_selectedBandCard;
    PayPostInfoItem *_payPostInfoItem;
    NSArray *_activity_list;
}

@property(retain, nonatomic) NSArray *activity_list; // @synthesize activity_list=_activity_list;
@property(retain, nonatomic) PayPostInfoItem *payPostInfoItem; // @synthesize payPostInfoItem=_payPostInfoItem;
@property(retain, nonatomic) BDWalletCardInfo *selectedBandCard; // @synthesize selectedBandCard=_selectedBandCard;
@property(nonatomic) _Bool isSelectHasMonney; // @synthesize isSelectHasMonney=_isSelectHasMonney;
@property(nonatomic) _Bool isSelectScore; // @synthesize isSelectScore=_isSelectScore;
@property(nonatomic) _Bool isSelectBalance; // @synthesize isSelectBalance=_isSelectBalance;
@property(retain, nonatomic) UserConsumptionInfoItem *userConsumptionItem; // @synthesize userConsumptionItem=_userConsumptionItem;
@property(retain, nonatomic) NSArray *bindCardArray; // @synthesize bindCardArray=_bindCardArray;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

