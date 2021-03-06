//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AliDetailJhsGlobalInfoModel, NSArray, NSString;
@protocol AliDetailJhsGoodsWayDescModel;

@interface AliDetailJhsModel : TBJSONModel
{
    _Bool _juCollection;
    _Bool _needJoin;
    _Bool _needNativeRefresh;
    _Bool _hasIntervalPrice;
    long long _soldCount;
    long long _remindCount;
    long long _status;
    NSString *_statusTitle;
    NSString *_sellingPoints;
    long long _startTime;
    long long _endTime;
    NSString *_refreshLayoutId;
    long long _verticalBiz;
    AliDetailJhsGlobalInfoModel *_globalInfo;
    NSArray<AliDetailJhsGoodsWayDescModel> *_goodsWayDesc;
}

@property(nonatomic) _Bool hasIntervalPrice; // @synthesize hasIntervalPrice=_hasIntervalPrice;
@property(retain, nonatomic) NSArray<AliDetailJhsGoodsWayDescModel> *goodsWayDesc; // @synthesize goodsWayDesc=_goodsWayDesc;
@property(retain, nonatomic) AliDetailJhsGlobalInfoModel *globalInfo; // @synthesize globalInfo=_globalInfo;
@property(nonatomic) long long verticalBiz; // @synthesize verticalBiz=_verticalBiz;
@property(copy, nonatomic) NSString *refreshLayoutId; // @synthesize refreshLayoutId=_refreshLayoutId;
@property(nonatomic) _Bool needNativeRefresh; // @synthesize needNativeRefresh=_needNativeRefresh;
@property(nonatomic) _Bool needJoin; // @synthesize needJoin=_needJoin;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool juCollection; // @synthesize juCollection=_juCollection;
@property(copy, nonatomic) NSString *sellingPoints; // @synthesize sellingPoints=_sellingPoints;
@property(copy, nonatomic) NSString *statusTitle; // @synthesize statusTitle=_statusTitle;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long remindCount; // @synthesize remindCount=_remindCount;
@property(nonatomic) long long soldCount; // @synthesize soldCount=_soldCount;
- (void).cxx_destruct;

@end

