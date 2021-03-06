//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

#import "CTHotelFilterViewDelegate-Protocol.h"

@class CTHotelFilterView, CTHotelOrderCacheBean, NSString, UILabel;
@protocol CTHotelOrderRoomCountCellDelegate;

@interface CTHotelOrderRoomCountCell : CTCustomeGroupTableViewCell <CTHotelFilterViewDelegate>
{
    _Bool _isExtend;
    id <CTHotelOrderRoomCountCellDelegate> _roomCountDelegate;
    UILabel *_title_label;
    UILabel *_room_count_label;
    UILabel *_room_description_label;
    UILabel *_room_quantity_label;
    UILabel *_arrow_label;
    CTHotelFilterView *_room_count_select_view;
    CTHotelOrderCacheBean *_cacheBean;
}

+ (double)getHeightWithCacheBean:(id)arg1;
@property(retain, nonatomic) CTHotelOrderCacheBean *cacheBean; // @synthesize cacheBean=_cacheBean;
@property(retain, nonatomic) CTHotelFilterView *room_count_select_view; // @synthesize room_count_select_view=_room_count_select_view;
@property(retain, nonatomic) UILabel *arrow_label; // @synthesize arrow_label=_arrow_label;
@property(retain, nonatomic) UILabel *room_quantity_label; // @synthesize room_quantity_label=_room_quantity_label;
@property(retain, nonatomic) UILabel *room_description_label; // @synthesize room_description_label=_room_description_label;
@property(retain, nonatomic) UILabel *room_count_label; // @synthesize room_count_label=_room_count_label;
@property(retain, nonatomic) UILabel *title_label; // @synthesize title_label=_title_label;
@property(nonatomic) __weak id <CTHotelOrderRoomCountCellDelegate> roomCountDelegate; // @synthesize roomCountDelegate=_roomCountDelegate;
@property(nonatomic) _Bool isExtend; // @synthesize isExtend=_isExtend;
- (void).cxx_destruct;
- (void)roomquantitylabelStr:(id)arg1;
- (void)hotelFilterViewSelectedItem:(long long)arg1 code:(id)arg2 selected:(_Bool)arg3;
- (double)getRoomCountSelectViewHeight:(id)arg1;
- (void)setModelWithCacheBean:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

