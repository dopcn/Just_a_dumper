//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTSdkBaseParam.h"

@class NSString;

@interface DTSdkOrderMatchInfoParam : DTSdkBaseParam
{
    NSString *_oid;
    NSString *_user_type;
    NSString *_carpool_station_type;
    NSString *_x_panel;
}

@property(retain, nonatomic) NSString *x_panel; // @synthesize x_panel=_x_panel;
@property(retain, nonatomic) NSString *carpool_station_type; // @synthesize carpool_station_type=_carpool_station_type;
@property(retain, nonatomic) NSString *user_type; // @synthesize user_type=_user_type;
@property(retain, nonatomic) NSString *oid; // @synthesize oid=_oid;
- (void).cxx_destruct;
- (id)buildParams;
- (id)responseClass;
- (unsigned long long)requestMethod;
- (id)apiPath;
- (id)apiHost;

@end

