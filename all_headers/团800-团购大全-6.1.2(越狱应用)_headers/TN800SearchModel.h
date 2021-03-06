//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TN800NewDealServiceDelegate-Protocol.h"

@class NSString, TN800CategoryVo, TN800NewDealService;

@interface TN800SearchModel : NSObject <TN800NewDealServiceDelegate>
{
    TN800NewDealService *_dealService;
    int _pageNum;
    int _pageSize;
    TN800CategoryVo *_categoryVo;
    NSString *_queryStr;
    double _latitude;
    double _longitude;
    BOOL _isNoMoreData;
    int _distance;
}

@property(nonatomic) BOOL isNoMoreData; // @synthesize isNoMoreData=_isNoMoreData;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSString *queryStr; // @synthesize queryStr=_queryStr;
@property(nonatomic) int pageNum; // @synthesize pageNum=_pageNum;
@property(retain, nonatomic) TN800CategoryVo *categoryVo; // @synthesize categoryVo=_categoryVo;
- (void).cxx_destruct;
- (void)didNetworkError:(id)arg1;
- (void)getNearShopsFinish:(id)arg1;
- (void)getNearShops;
- (void)getNearShopsNeed;
- (void)loadDatas;
- (id)init;

@end

