//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SNSLYanBaoService : NSObject
{
    NSString *_warrantyType;
    NSString *_typeName;
    NSString *_warrantyYear;
    NSString *_limitUnit;
    NSString *_sellPoint;
    NSString *_warrantyPrice;
    NSString *_cmmdtyCode;
    NSString *_supplierCode;
    NSString *_cmmdtyQty;
    NSString *_itemNo;
    NSString *_costPrice;
    NSString *_promotionFlag;
    NSString *_promotionDoc;
}

@property(copy, nonatomic) NSString *promotionDoc; // @synthesize promotionDoc=_promotionDoc;
@property(copy, nonatomic) NSString *promotionFlag; // @synthesize promotionFlag=_promotionFlag;
@property(copy, nonatomic) NSString *costPrice; // @synthesize costPrice=_costPrice;
@property(copy, nonatomic) NSString *itemNo; // @synthesize itemNo=_itemNo;
@property(copy, nonatomic) NSString *cmmdtyQty; // @synthesize cmmdtyQty=_cmmdtyQty;
@property(copy, nonatomic) NSString *supplierCode; // @synthesize supplierCode=_supplierCode;
@property(copy, nonatomic) NSString *cmmdtyCode; // @synthesize cmmdtyCode=_cmmdtyCode;
@property(copy, nonatomic) NSString *warrantyPrice; // @synthesize warrantyPrice=_warrantyPrice;
@property(copy, nonatomic) NSString *sellPoint; // @synthesize sellPoint=_sellPoint;
@property(copy, nonatomic) NSString *limitUnit; // @synthesize limitUnit=_limitUnit;
@property(copy, nonatomic) NSString *warrantyYear; // @synthesize warrantyYear=_warrantyYear;
@property(copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(copy, nonatomic) NSString *warrantyType; // @synthesize warrantyType=_warrantyType;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

