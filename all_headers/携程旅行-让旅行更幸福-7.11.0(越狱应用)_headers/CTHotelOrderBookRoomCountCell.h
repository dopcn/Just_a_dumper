//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTHotelOrderBookBaseCell.h"

#import "CTHotelFilterViewDelegate-Protocol.h"

@class CTHotelOrderBookRoomCountView, NSString;
@protocol CTHotelOrderBookRoomCountCellDelegate;

@interface CTHotelOrderBookRoomCountCell : CTHotelOrderBookBaseCell <CTHotelFilterViewDelegate>
{
    id <CTHotelOrderBookRoomCountCellDelegate> _delegate;
    CTHotelOrderBookRoomCountView *_roomCountView;
}

+ (double)getcellHeightWithCacheBean:(id)arg1;
@property(retain, nonatomic) CTHotelOrderBookRoomCountView *roomCountView; // @synthesize roomCountView=_roomCountView;
@property(nonatomic) __weak id <CTHotelOrderBookRoomCountCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hotelFilterViewSelectedItem:(long long)arg1 code:(id)arg2 selected:(_Bool)arg3;
- (void)layoutSelfSubviews;
- (void)setDataWithCacheBean:(id)arg1;
- (void)initView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

