//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, TrainBusInfoModel, TrainCarInfoModel, TrainFlightInfoModel, TrainInfoV5Model, TrainScenicInfoModel;

@interface TrainTransferMetaLineInfoModel : CTBusinessBean
{
    int index;
    NSString *type;
    NSString *trafficIcon;
    NSString *trafficType;
    TrainFlightInfoModel *flightModel;
    TrainInfoV5Model *trainModel;
    TrainBusInfoModel *busModel;
    TrainCarInfoModel *carModel;
    TrainScenicInfoModel *scenicModel;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) TrainScenicInfoModel *scenicModel; // @synthesize scenicModel;
@property(retain, nonatomic) TrainCarInfoModel *carModel; // @synthesize carModel;
@property(retain, nonatomic) TrainBusInfoModel *busModel; // @synthesize busModel;
@property(retain, nonatomic) TrainInfoV5Model *trainModel; // @synthesize trainModel;
@property(retain, nonatomic) TrainFlightInfoModel *flightModel; // @synthesize flightModel;
@property(copy, nonatomic) NSString *trafficType; // @synthesize trafficType;
@property(copy, nonatomic) NSString *trafficIcon; // @synthesize trafficIcon;
@property(copy, nonatomic) NSString *type; // @synthesize type;
@property(nonatomic) int index; // @synthesize index;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

