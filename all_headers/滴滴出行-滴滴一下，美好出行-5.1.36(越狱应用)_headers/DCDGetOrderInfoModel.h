//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DCGetOrderInfoBaseModel.h"

@class DBDPassengerInfoModel, DBRouteInfoModel, DCComfirmInfoModel, DCMoreModel, DCNavHintModel, DCOrderInfoBaseModel, DCRPCircleInfoModel, DCRPTopTipsApiModel, DCRemindListInfoAlertModel, DCRobLiftAlertModel, NSArray, NSString;
@protocol Optional, Optional><DCCarpoolerDetailInfoModel;

@interface DCDGetOrderInfoModel : DCGetOrderInfoBaseModel
{
    DCOrderInfoBaseModel<Optional> *_order_info;
    DBDPassengerInfoModel<Optional> *_passenger_info;
    DBRouteInfoModel<Optional> *_route_info;
    DCComfirmInfoModel<Optional> *_confirm_info;
    DCRemindListInfoAlertModel<Optional> *_travel_cfg_alert;
    DCRobLiftAlertModel<Optional> *_alter_info;
    DCMoreModel<Optional> *_driver_more;
    NSArray<Optional><DCCarpoolerDetailInfoModel> *_package_users;
    DCRemindListInfoAlertModel<Optional> *_invalid_alert;
    NSString<Optional> *_package_id;
    DCNavHintModel<Optional> *_nav_info;
    DCRPTopTipsApiModel<Optional> *_top_tips_ext;
    DCRPCircleInfoModel<Optional> *_circle_info;
}

+ (id)getNavOperationModel:(id)arg1;
+ (id)cancelOperationModel:(id)arg1;
+ (id)getBottomOperationModel:(id)arg1;
+ (id)changeOrderModelToInviteModel:(id)arg1;
@property(retain, nonatomic) DCRPCircleInfoModel<Optional> *circle_info; // @synthesize circle_info=_circle_info;
@property(retain, nonatomic) DCRPTopTipsApiModel<Optional> *top_tips_ext; // @synthesize top_tips_ext=_top_tips_ext;
@property(retain, nonatomic) DCNavHintModel<Optional> *nav_info; // @synthesize nav_info=_nav_info;
@property(copy, nonatomic) NSString<Optional> *package_id; // @synthesize package_id=_package_id;
@property(retain, nonatomic) DCRemindListInfoAlertModel<Optional> *invalid_alert; // @synthesize invalid_alert=_invalid_alert;
@property(retain, nonatomic) NSArray<Optional><DCCarpoolerDetailInfoModel> *package_users; // @synthesize package_users=_package_users;
@property(retain, nonatomic) DCMoreModel<Optional> *driver_more; // @synthesize driver_more=_driver_more;
@property(retain, nonatomic) DCRobLiftAlertModel<Optional> *alter_info; // @synthesize alter_info=_alter_info;
@property(retain, nonatomic) DCRemindListInfoAlertModel<Optional> *travel_cfg_alert; // @synthesize travel_cfg_alert=_travel_cfg_alert;
@property(retain, nonatomic) DCComfirmInfoModel<Optional> *confirm_info; // @synthesize confirm_info=_confirm_info;
@property(retain, nonatomic) DBRouteInfoModel<Optional> *route_info; // @synthesize route_info=_route_info;
@property(retain, nonatomic) DBDPassengerInfoModel<Optional> *passenger_info; // @synthesize passenger_info=_passenger_info;
@property(retain, nonatomic) DCOrderInfoBaseModel<Optional> *order_info; // @synthesize order_info=_order_info;
- (void).cxx_destruct;

@end

