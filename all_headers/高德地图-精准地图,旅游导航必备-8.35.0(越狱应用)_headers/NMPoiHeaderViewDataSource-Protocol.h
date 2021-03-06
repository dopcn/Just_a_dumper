//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LTMSearchPageData, MPSQueryPoiData, NSArray, NSDictionary, NSIndexPath, NSString;

@protocol NMPoiHeaderViewDataSource <NSObject>

@optional
- (NSDictionary *)headerViewRSRecommendation;
- (_Bool)headerViewShouldShowPageTurnView;
- (NSArray *)headerViewDisabledClassifyIndexes;
- (_Bool)isVAInDrivingModeInPoiHeaderView;
- (MPSQueryPoiData *)getAroundPoiData;
- (NSString *)getCurrentCate;
- (LTMSearchPageData *)gitFirstPageData;
- (LTMSearchPageData *)poiHeaderViewModel;
- (NSIndexPath *)getCurrentSelectedIndexPath;
- (_Bool)checkPoiDataIsFavorite:(MPSQueryPoiData *)arg1;
- (_Bool)headerViewIsLastPage;
- (_Bool)headerViewIsFirstPage;
- (long long)getPoiTotalCount;
- (long long)currentPageIndex;
@end

