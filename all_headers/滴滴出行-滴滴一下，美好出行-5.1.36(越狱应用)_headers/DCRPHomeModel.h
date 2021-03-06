//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DCBaseModel.h"

@class DBUserInfo, DCRPCircleInfoModel, DCRPHomeSelectStationInfoModel, DCRPHomeSuspenseListModel, NSArray, NSString;
@protocol Ignore, Optional, Optional><DCRPHomePublishedInfoModel;

@interface DCRPHomeModel : DCBaseModel
{
    DCRPCircleInfoModel<Optional> *_circle_info;
    DCRPHomeSuspenseListModel<Optional> *_suspense_list;
    NSArray<Optional><DCRPHomePublishedInfoModel> *_published_info_list;
    NSString<Optional> *_published_user_count;
    DBUserInfo<Optional> *_user_info;
    NSString<Optional> *_stations_select_url;
    DCRPHomeSelectStationInfoModel<Optional> *_select_station_info;
    NSString<Optional> *_circle_map_url;
    NSString<Optional> *_auth_url;
    NSString<Ignore> *_circle_source;
    NSString<Ignore> *_circle_from;
    NSString<Ignore> *_bts_role;
    NSString<Ignore> *_country_iso_code;
}

@property(retain, nonatomic) NSString<Ignore> *country_iso_code; // @synthesize country_iso_code=_country_iso_code;
@property(retain, nonatomic) NSString<Ignore> *bts_role; // @synthesize bts_role=_bts_role;
@property(retain, nonatomic) NSString<Ignore> *circle_from; // @synthesize circle_from=_circle_from;
@property(retain, nonatomic) NSString<Ignore> *circle_source; // @synthesize circle_source=_circle_source;
@property(retain, nonatomic) NSString<Optional> *auth_url; // @synthesize auth_url=_auth_url;
@property(retain, nonatomic) NSString<Optional> *circle_map_url; // @synthesize circle_map_url=_circle_map_url;
@property(retain, nonatomic) DCRPHomeSelectStationInfoModel<Optional> *select_station_info; // @synthesize select_station_info=_select_station_info;
@property(retain, nonatomic) NSString<Optional> *stations_select_url; // @synthesize stations_select_url=_stations_select_url;
@property(retain, nonatomic) DBUserInfo<Optional> *user_info; // @synthesize user_info=_user_info;
@property(retain, nonatomic) NSString<Optional> *published_user_count; // @synthesize published_user_count=_published_user_count;
@property(retain, nonatomic) NSArray<Optional><DCRPHomePublishedInfoModel> *published_info_list; // @synthesize published_info_list=_published_info_list;
@property(retain, nonatomic) DCRPHomeSuspenseListModel<Optional> *suspense_list; // @synthesize suspense_list=_suspense_list;
@property(retain, nonatomic) DCRPCircleInfoModel<Optional> *circle_info; // @synthesize circle_info=_circle_info;
- (void).cxx_destruct;
- (id)analyticsParams;

@end

