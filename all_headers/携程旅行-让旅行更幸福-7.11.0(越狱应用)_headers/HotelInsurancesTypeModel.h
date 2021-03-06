//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface HotelInsurancesTypeModel : CTBusinessBean
{
    int _insuranceType;
    int _flag;
    int _maxQty;
    NSString *_insuranceTypeTitle;
    NSString *_insuranceTypeDescription;
    NSString *_detailUrl;
    NSMutableArray *_insurancesList;
    NSString *_iconUrl;
    NSString *_insuranceTypeDescriptionOn;
}

@property(copy, nonatomic) NSString *insuranceTypeDescriptionOn; // @synthesize insuranceTypeDescriptionOn=_insuranceTypeDescriptionOn;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSMutableArray *insurancesList; // @synthesize insurancesList=_insurancesList;
@property(nonatomic) int maxQty; // @synthesize maxQty=_maxQty;
@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(nonatomic) int insuranceType; // @synthesize insuranceType=_insuranceType;
@property(copy, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(copy, nonatomic) NSString *insuranceTypeDescription; // @synthesize insuranceTypeDescription=_insuranceTypeDescription;
@property(copy, nonatomic) NSString *insuranceTypeTitle; // @synthesize insuranceTypeTitle=_insuranceTypeTitle;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

