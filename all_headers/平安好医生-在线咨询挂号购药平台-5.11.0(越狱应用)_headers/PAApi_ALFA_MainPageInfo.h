//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PAApi_ALFA_EnterpriseDetails, PAApi_ALFA_FamilyDoctorServiceItemInfo;

@interface PAApi_ALFA_MainPageInfo : NSObject
{
    PAApi_ALFA_FamilyDoctorServiceItemInfo *_familyDoctorServiceItemInfo;
    PAApi_ALFA_EnterpriseDetails *_enterpriseDetails;
    NSMutableArray *_serviceItemInfoList;
}

+ (id)deserialize:(id)arg1;
+ (id)deserializeWithJsonData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *serviceItemInfoList; // @synthesize serviceItemInfoList=_serviceItemInfoList;
@property(retain, nonatomic) PAApi_ALFA_EnterpriseDetails *enterpriseDetails; // @synthesize enterpriseDetails=_enterpriseDetails;
@property(retain, nonatomic) PAApi_ALFA_FamilyDoctorServiceItemInfo *familyDoctorServiceItemInfo; // @synthesize familyDoctorServiceItemInfo=_familyDoctorServiceItemInfo;
- (void).cxx_destruct;
- (id)serialize;
- (id)init;

@end

