//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseEntity.h"

@class NSString;

@interface FundRiskDisclosureModel : BaseEntity
{
    NSString *_serviceNo;
    NSString *_clientId;
    NSString *_branchNo;
    NSString *_branchId;
    NSString *_clientName;
    NSString *_dealDate;
    NSString *_dealTime;
    NSString *_gtNewverflag;
}

+ (id)modelMappingDict;
+ (_Bool)propertyIsOptional:(id)arg1;
+ (_Bool)propertyIsIgnored:(id)arg1;
@property(copy, nonatomic) NSString *gtNewverflag; // @synthesize gtNewverflag=_gtNewverflag;
@property(copy, nonatomic) NSString *dealTime; // @synthesize dealTime=_dealTime;
@property(copy, nonatomic) NSString *dealDate; // @synthesize dealDate=_dealDate;
@property(copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(copy, nonatomic) NSString *branchId; // @synthesize branchId=_branchId;
@property(copy, nonatomic) NSString *branchNo; // @synthesize branchNo=_branchNo;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(copy, nonatomic) NSString *serviceNo; // @synthesize serviceNo=_serviceNo;
- (void).cxx_destruct;
- (void)setEntityWithDict:(id)arg1;
- (void)settingModelWithDict:(id)arg1;

@end

