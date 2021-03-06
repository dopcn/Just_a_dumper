//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, YoyoRoomVehicleItemRecord;

@interface YoyoRoomVehicleListCollectionViewCell : UICollectionViewCell
{
    _Bool _isFullScreen;
    _Bool _isEmptyCell;
    YoyoRoomVehicleItemRecord *_vehicleItemRecord;
    UIImageView *_vehicleImageView;
    UIImageView *_levelImageView;
    UILabel *_nameLabel;
}

@property(nonatomic) _Bool isEmptyCell; // @synthesize isEmptyCell=_isEmptyCell;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *levelImageView; // @synthesize levelImageView=_levelImageView;
@property(nonatomic) __weak UIImageView *vehicleImageView; // @synthesize vehicleImageView=_vehicleImageView;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(retain, nonatomic) YoyoRoomVehicleItemRecord *vehicleItemRecord; // @synthesize vehicleItemRecord=_vehicleItemRecord;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)loadVehicleCellView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

