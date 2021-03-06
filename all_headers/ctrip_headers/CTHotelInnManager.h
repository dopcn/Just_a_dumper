//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTHotelAdapterManager.h"

@class CTHotelBaseHouseTypeCell, CTHotelDetailCacheBean, CTHotelSingleTitleCell, UIView;
@protocol CTHotelAdapterManagerDelegate;

@interface CTHotelInnManager : CTHotelAdapterManager
{
    CTHotelBaseHouseTypeCell *_baseHouseTypeCell;
    CTHotelSingleTitleCell *_singleTitleViewCell;
    double _pinnedCellY;
    id <CTHotelAdapterManagerDelegate> _delegate;
    CTHotelDetailCacheBean *_detailCacheBean;
    unsigned long long _lastRoomSection;
    unsigned long long _lastFilterRoomSection;
    long long _filterSection;
    UIView *_superView;
    long long _arroundSection;
    long long _sameBrandSection;
    struct CGRect _bottomRect;
}

@property(nonatomic) long long sameBrandSection; // @synthesize sameBrandSection=_sameBrandSection;
@property(nonatomic) long long arroundSection; // @synthesize arroundSection=_arroundSection;
@property(nonatomic) __weak UIView *superView; // @synthesize superView=_superView;
@property(nonatomic) struct CGRect bottomRect; // @synthesize bottomRect=_bottomRect;
@property(nonatomic) long long filterSection; // @synthesize filterSection=_filterSection;
@property(nonatomic) unsigned long long lastFilterRoomSection; // @synthesize lastFilterRoomSection=_lastFilterRoomSection;
@property(nonatomic) unsigned long long lastRoomSection; // @synthesize lastRoomSection=_lastRoomSection;
@property(nonatomic) __weak CTHotelDetailCacheBean *detailCacheBean; // @synthesize detailCacheBean=_detailCacheBean;
@property(nonatomic) __weak id <CTHotelAdapterManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double pinnedCellY; // @synthesize pinnedCellY=_pinnedCellY;
@property(nonatomic) __weak CTHotelSingleTitleCell *singleTitleViewCell; // @synthesize singleTitleViewCell=_singleTitleViewCell;
@property(nonatomic) __weak CTHotelBaseHouseTypeCell *baseHouseTypeCell; // @synthesize baseHouseTypeCell=_baseHouseTypeCell;
- (void).cxx_destruct;
- (double)pinnedTitleCellY;
- (id)getFilterSectionAdapter;
- (long long)getNearByOrSameBrandIndex;
- (long long)getRecommendAdapterIndex;
- (long long)getDetailAdapterIndex;
- (long long)getCommentAdapterIndex;
- (long long)getFoodAdapterIndex;
- (long long)getFAQAdapterIndex;
- (long long)getSpecialRoomAdapterIndex;
- (long long)getTileRoomTypeAdapterIndex;
- (long long)getFoldRoomTypeAdapterIndex;
- (void)expandFlodRoom:(long long)arg1 withModel:(id)arg2 table:(id)arg3 needScroll:(_Bool)arg4;
- (void)scrollToRoomTop:(long long)arg1 table:(id)arg2;
- (void)anchorageToRoomSection:(id)arg1 bExpand:(_Bool)arg2 withTable:(id)arg3;
- (id)getRoomSectionList;
- (_Bool)isShowAnchoringForHotelDetail:(id)arg1 withTable:(id)arg2 roomShowStyle:(int)arg3;
- (void)showExpandRoomCellWithTable:(id)arg1;
- (void)doPinnedNearByView:(double)arg1 withTable:(id)arg2 section:(long long)arg3;
- (void)doPinnedView:(double)arg1 withTable:(id)arg2;
- (void)doPinnedCellView:(double)arg1 withTable:(id)arg2;
- (void)doPinnedViewWithIndexPath:(id)arg1 tableView:(id)arg2;
- (void)checkLastRoomWithIndexPath:(id)arg1;
- (void)resetView;
- (id)currentPinnedTitleView;
- (id)currentPinnedView;
- (void)showPinnedTitleViewWith:(id)arg1 indexPath:(id)arg2 frame:(struct CGRect)arg3;
- (void)showPinnedViewWith:(id)arg1 indexPath:(id)arg2 frame:(struct CGRect)arg3;
- (void)hidePinnedTitleView;
- (void)hidePinnedView;
- (void)initPinneView:(id)arg1;
- (void)removeAll;
- (void)addAdapter:(id)arg1;

@end

