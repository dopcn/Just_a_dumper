//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@interface VSGetDetailStatus : JSONModel
{
    long long _cancelStatus;
    long long _modifyStatus;
    long long _exchangeGoodsType;
    long long _deletableStatus;
    long long _returnStatus;
    long long _mergeStatus;
    long long _afterSaleStatus;
    long long _modifyPayerStatus;
}

+ (id)keyMapper;
+ (_Bool)propertyIsOptional:(id)arg1;
@property(nonatomic) long long modifyPayerStatus; // @synthesize modifyPayerStatus=_modifyPayerStatus;
@property(nonatomic) long long afterSaleStatus; // @synthesize afterSaleStatus=_afterSaleStatus;
@property(nonatomic) long long mergeStatus; // @synthesize mergeStatus=_mergeStatus;
@property(nonatomic) long long returnStatus; // @synthesize returnStatus=_returnStatus;
@property(nonatomic) long long deletableStatus; // @synthesize deletableStatus=_deletableStatus;
@property(nonatomic) long long exchangeGoodsType; // @synthesize exchangeGoodsType=_exchangeGoodsType;
@property(nonatomic) long long modifyStatus; // @synthesize modifyStatus=_modifyStatus;
@property(nonatomic) long long cancelStatus; // @synthesize cancelStatus=_cancelStatus;

@end

