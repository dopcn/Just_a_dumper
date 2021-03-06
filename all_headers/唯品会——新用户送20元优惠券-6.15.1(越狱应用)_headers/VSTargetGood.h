//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface VSTargetGood : JSONModel
{
    long long _skuId;
    NSString *_sn;
    NSString *_name;
    long long _stock;
    long long _type;
    long long _ptype;
    long long _min;
    long long _max;
    long long _targetNum;
}

+ (id)keyMapper;
+ (_Bool)propertyIsOptional:(id)arg1;
@property(nonatomic) long long targetNum; // @synthesize targetNum=_targetNum;
@property(nonatomic) long long max; // @synthesize max=_max;
@property(nonatomic) long long min; // @synthesize min=_min;
@property(nonatomic) long long ptype; // @synthesize ptype=_ptype;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long stock; // @synthesize stock=_stock;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *sn; // @synthesize sn=_sn;
@property(nonatomic) long long skuId; // @synthesize skuId=_skuId;
- (void).cxx_destruct;

@end

