//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, SNO2OActivityDTO, SNO2OCouponDTO, SNO2OStoreActivityEntry, SNO2OStoreDTO, SNO2OStoreVRPhotoInfoDto;

@interface SNO2OStoreDetailDTO : NSObject
{
    SNO2OStoreDTO *_storeInfo;
    NSMutableArray *_storeFloorList;
    NSMutableArray *_storeActivityList;
    NSMutableArray *_storeServiceList;
    NSMutableArray *_serviceProductList;
    SNO2OStoreActivityEntry *_activityEntry1;
    SNO2OStoreActivityEntry *_activityEntry2;
    SNO2OActivityDTO *_guiderInfo;
    SNO2OActivityDTO *_fixEngineerInfo;
    SNO2OActivityDTO *_financialGuiderInfo;
    SNO2OActivityDTO *_childGuiderInfo;
    SNO2OCouponDTO *_storeCouponInfo;
    SNO2OActivityDTO *_storeNewActivity;
    SNO2OStoreVRPhotoInfoDto *_storeVRPhotoInfo;
}

@property(retain, nonatomic) SNO2OStoreVRPhotoInfoDto *storeVRPhotoInfo; // @synthesize storeVRPhotoInfo=_storeVRPhotoInfo;
@property(retain, nonatomic) SNO2OActivityDTO *storeNewActivity; // @synthesize storeNewActivity=_storeNewActivity;
@property(retain, nonatomic) SNO2OCouponDTO *storeCouponInfo; // @synthesize storeCouponInfo=_storeCouponInfo;
@property(retain, nonatomic) SNO2OActivityDTO *childGuiderInfo; // @synthesize childGuiderInfo=_childGuiderInfo;
@property(retain, nonatomic) SNO2OActivityDTO *financialGuiderInfo; // @synthesize financialGuiderInfo=_financialGuiderInfo;
@property(retain, nonatomic) SNO2OActivityDTO *fixEngineerInfo; // @synthesize fixEngineerInfo=_fixEngineerInfo;
@property(retain, nonatomic) SNO2OActivityDTO *guiderInfo; // @synthesize guiderInfo=_guiderInfo;
@property(retain, nonatomic) SNO2OStoreActivityEntry *activityEntry2; // @synthesize activityEntry2=_activityEntry2;
@property(retain, nonatomic) SNO2OStoreActivityEntry *activityEntry1; // @synthesize activityEntry1=_activityEntry1;
@property(retain, nonatomic) NSMutableArray *serviceProductList; // @synthesize serviceProductList=_serviceProductList;
@property(retain, nonatomic) NSMutableArray *storeServiceList; // @synthesize storeServiceList=_storeServiceList;
@property(retain, nonatomic) NSMutableArray *storeActivityList; // @synthesize storeActivityList=_storeActivityList;
@property(retain, nonatomic) NSMutableArray *storeFloorList; // @synthesize storeFloorList=_storeFloorList;
@property(retain, nonatomic) SNO2OStoreDTO *storeInfo; // @synthesize storeInfo=_storeInfo;
- (void).cxx_destruct;
- (id)init;

@end

