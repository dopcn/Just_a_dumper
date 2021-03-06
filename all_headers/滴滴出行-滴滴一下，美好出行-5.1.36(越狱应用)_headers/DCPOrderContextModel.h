//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class DCPOrderCreateModel, DCRemindListInfoAlertModel, NSDictionary, NSString;
@protocol Ignore, Optional;

@interface DCPOrderContextModel : JSONModel
{
    _Bool _isAcceptInvite;
    _Bool _isHideLoading;
    _Bool _isInCommentEditState;
    _Bool _autoShowOrderRecoverPay;
    _Bool _needRefresh;
    _Bool _checkExistOrder;
    int _popType;
    int _inviteType;
    int _packageNum;
    NSString *_orderSource;
    NSString *_routeProportion;
    NSString *_extra_params;
    NSString *_order_id;
    NSString *_carpool_id;
    NSString *_scene_msg;
    NSString *_date_id;
    NSString *_model_type;
    NSString *_back_url;
    NSString *_openurlSubmodule;
    NSString *_filter;
    DCPOrderCreateModel<Ignore> *_createModel;
    NSString *_pre_order_id;
    NSString *_pre_invite_id;
    NSString *_route_id;
    DCRemindListInfoAlertModel *_alert_info;
    NSString *_page_act;
    NSString *_country_iso_code;
    NSString<Optional> *_view_sort;
    NSDictionary *_clientExtParams;
}

+ (unsigned long long)getDCDVCTpe:(int)arg1 modelType:(id)arg2 inviteId:(id)arg3;
+ (unsigned long long)getDCPVCTpe:(int)arg1 modelType:(id)arg2 inviteId:(id)arg3;
@property(copy, nonatomic) NSDictionary *clientExtParams; // @synthesize clientExtParams=_clientExtParams;
@property(nonatomic) _Bool checkExistOrder; // @synthesize checkExistOrder=_checkExistOrder;
@property(copy, nonatomic) NSString<Optional> *view_sort; // @synthesize view_sort=_view_sort;
@property(copy, nonatomic) NSString *country_iso_code; // @synthesize country_iso_code=_country_iso_code;
@property(copy, nonatomic) NSString *page_act; // @synthesize page_act=_page_act;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(nonatomic) _Bool autoShowOrderRecoverPay; // @synthesize autoShowOrderRecoverPay=_autoShowOrderRecoverPay;
@property(retain, nonatomic) DCRemindListInfoAlertModel *alert_info; // @synthesize alert_info=_alert_info;
@property(copy, nonatomic) NSString *route_id; // @synthesize route_id=_route_id;
@property(nonatomic) int packageNum; // @synthesize packageNum=_packageNum;
@property(copy, nonatomic) NSString *pre_invite_id; // @synthesize pre_invite_id=_pre_invite_id;
@property(copy, nonatomic) NSString *pre_order_id; // @synthesize pre_order_id=_pre_order_id;
@property(retain, nonatomic) DCPOrderCreateModel<Ignore> *createModel; // @synthesize createModel=_createModel;
@property(copy, nonatomic) NSString *filter; // @synthesize filter=_filter;
@property(nonatomic) _Bool isInCommentEditState; // @synthesize isInCommentEditState=_isInCommentEditState;
@property(copy, nonatomic) NSString *openurlSubmodule; // @synthesize openurlSubmodule=_openurlSubmodule;
@property(copy, nonatomic) NSString *back_url; // @synthesize back_url=_back_url;
@property(nonatomic) _Bool isHideLoading; // @synthesize isHideLoading=_isHideLoading;
@property(copy, nonatomic) NSString *model_type; // @synthesize model_type=_model_type;
@property(nonatomic) int inviteType; // @synthesize inviteType=_inviteType;
@property(copy, nonatomic) NSString *date_id; // @synthesize date_id=_date_id;
@property(nonatomic) int popType; // @synthesize popType=_popType;
@property(copy, nonatomic) NSString *scene_msg; // @synthesize scene_msg=_scene_msg;
@property(copy, nonatomic) NSString *carpool_id; // @synthesize carpool_id=_carpool_id;
@property(copy, nonatomic) NSString *order_id; // @synthesize order_id=_order_id;
@property(nonatomic) _Bool isAcceptInvite; // @synthesize isAcceptInvite=_isAcceptInvite;
@property(copy, nonatomic) NSString *extra_params; // @synthesize extra_params=_extra_params;
@property(copy, nonatomic) NSString *routeProportion; // @synthesize routeProportion=_routeProportion;
@property(copy, nonatomic) NSString *orderSource; // @synthesize orderSource=_orderSource;
- (void).cxx_destruct;
- (void)clearDisposableData;
- (id)init;

@end

