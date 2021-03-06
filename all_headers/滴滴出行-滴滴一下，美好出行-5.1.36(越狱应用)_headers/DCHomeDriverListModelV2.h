//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DCHomeListModelV2.h"

@class DCHomeDriverDriverServiceModel, DCHomeDriverDriverServiceModelV1, DCHomeDriverRouteListModel, DCHomeDriverTaskModel, DCHomeDriverUserInfoModel, NSArray, NSString;
@protocol DCHDSusListModel><Optional, Optional, Optional><DCHomeCarpoolH5Model;

@interface DCHomeDriverListModelV2 : DCHomeListModelV2
{
    NSArray<DCHDSusListModel><Optional> *_suspense_driver_list;
    DCHomeDriverUserInfoModel<Optional> *_user_info;
    NSString<Optional> *_delta;
    NSArray<Optional><DCHomeCarpoolH5Model> *_home_h5_list;
    DCHomeDriverDriverServiceModel<Optional> *_driver_service;
    DCHomeDriverDriverServiceModelV1<Optional> *_driver_service_v1;
    DCHomeDriverTaskModel<Optional> *_driver_task;
}

@property(retain, nonatomic) DCHomeDriverTaskModel<Optional> *driver_task; // @synthesize driver_task=_driver_task;
@property(retain, nonatomic) DCHomeDriverDriverServiceModelV1<Optional> *driver_service_v1; // @synthesize driver_service_v1=_driver_service_v1;
@property(retain, nonatomic) DCHomeDriverDriverServiceModel<Optional> *driver_service; // @synthesize driver_service=_driver_service;
@property(retain, nonatomic) NSArray<Optional><DCHomeCarpoolH5Model> *home_h5_list; // @synthesize home_h5_list=_home_h5_list;
@property(retain, nonatomic) NSString<Optional> *delta; // @synthesize delta=_delta;
@property(retain, nonatomic) DCHomeDriverUserInfoModel<Optional> *user_info; // @synthesize user_info=_user_info;
@property(retain, nonatomic) NSArray<DCHDSusListModel><Optional> *suspense_driver_list; // @synthesize suspense_driver_list=_suspense_driver_list;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) DCHomeDriverRouteListModel<Optional> *route_list; // @dynamic route_list;

@end

