//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDBaseModel.h"

@class NSArray, NSString;

@interface SCHospitalEntityModel : PDBaseModel
{
    _Bool _can_register;
    long long _hospital_id;
    NSString *_hospital_name;
    long long _hospital_level;
    NSString *_hospital_level_text;
    long long _doctor_count;
    NSArray *_hot_dept;
    double _distance;
    NSString *_hospital_img;
    NSString *_hospital_address;
    double _hospitalScore;
    NSString *_hospitalProvCode;
    NSString *_hospitalCityCode;
    long long _dept_rank;
    long long _hospital_rank;
    long long _hospital_level_for_sort;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long hospital_level_for_sort; // @synthesize hospital_level_for_sort=_hospital_level_for_sort;
@property(nonatomic) long long hospital_rank; // @synthesize hospital_rank=_hospital_rank;
@property(nonatomic) long long dept_rank; // @synthesize dept_rank=_dept_rank;
@property(copy, nonatomic) NSString *hospitalCityCode; // @synthesize hospitalCityCode=_hospitalCityCode;
@property(copy, nonatomic) NSString *hospitalProvCode; // @synthesize hospitalProvCode=_hospitalProvCode;
@property(nonatomic) double hospitalScore; // @synthesize hospitalScore=_hospitalScore;
@property(copy, nonatomic) NSString *hospital_address; // @synthesize hospital_address=_hospital_address;
@property(copy, nonatomic) NSString *hospital_img; // @synthesize hospital_img=_hospital_img;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) NSArray *hot_dept; // @synthesize hot_dept=_hot_dept;
@property(nonatomic) long long doctor_count; // @synthesize doctor_count=_doctor_count;
@property(copy, nonatomic) NSString *hospital_level_text; // @synthesize hospital_level_text=_hospital_level_text;
@property(nonatomic) long long hospital_level; // @synthesize hospital_level=_hospital_level;
@property(copy, nonatomic) NSString *hospital_name; // @synthesize hospital_name=_hospital_name;
@property(nonatomic) long long hospital_id; // @synthesize hospital_id=_hospital_id;
@property(nonatomic) _Bool can_register; // @synthesize can_register=_can_register;
- (void).cxx_destruct;

@end

