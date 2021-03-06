//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, QNPOperationData, QNPPayBaseItem, QNPPaymentMethodSelection;

@interface QNPNewMoneyController : NSObject
{
    _Bool _hasMoneyLeft;
    _Bool _isAccountEnough;
    NSString *_orderPrice;
    QNPPaymentMethodSelection *_nowSelectKeyForSet;
    QNPPaymentMethodSelection *_didSelectKeyForSet;
    NSMutableArray *_yesSelectArray;
    NSMutableDictionary *_keyValueDic_choice;
    NSMutableDictionary *_keyValueDic_hidden;
    NSString *_nowSelectKey;
    QNPOperationData *_operationData;
    NSArray *_productArray;
    QNPPayBaseItem *_nowSelectItem;
}

@property(retain, nonatomic) QNPPayBaseItem *nowSelectItem; // @synthesize nowSelectItem=_nowSelectItem;
@property(retain, nonatomic) NSArray *productArray; // @synthesize productArray=_productArray;
@property(retain, nonatomic) QNPOperationData *operationData; // @synthesize operationData=_operationData;
@property(nonatomic) _Bool isAccountEnough; // @synthesize isAccountEnough=_isAccountEnough;
@property(nonatomic) _Bool hasMoneyLeft; // @synthesize hasMoneyLeft=_hasMoneyLeft;
@property(retain, nonatomic) NSString *nowSelectKey; // @synthesize nowSelectKey=_nowSelectKey;
@property(retain, nonatomic) NSMutableDictionary *keyValueDic_hidden; // @synthesize keyValueDic_hidden=_keyValueDic_hidden;
@property(retain, nonatomic) NSMutableDictionary *keyValueDic_choice; // @synthesize keyValueDic_choice=_keyValueDic_choice;
@property(retain, nonatomic) NSMutableArray *yesSelectArray; // @synthesize yesSelectArray=_yesSelectArray;
@property(retain, nonatomic) QNPPaymentMethodSelection *didSelectKeyForSet; // @synthesize didSelectKeyForSet=_didSelectKeyForSet;
@property(retain, nonatomic) QNPPaymentMethodSelection *nowSelectKeyForSet; // @synthesize nowSelectKeyForSet=_nowSelectKeyForSet;
@property(retain, nonatomic) NSString *orderPrice; // @synthesize orderPrice=_orderPrice;
- (void).cxx_destruct;
- (_Bool)touchGotoPayDoSomething;
- (void)postProcessAfterCalculation;
- (_Bool)checkAccountEnough;
- (void)refreshWithChoiseDic:(id)arg1;
- (void)setNowSelectKeyForSet:(id)arg1 andDic:(id)arg2;
- (void)calculateMoney;
- (void)preProcessBeforeCalculation;
- (void)firstInitSomeData;
- (void)calculateMoneyWhenRefreshView;
- (id)init;

@end

