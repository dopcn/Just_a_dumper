//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDTableViewCell.h"

@class CDPersonalEquipmentListCellModel, UIButton, UIImageView, UILabel;

@interface CDPersonalEquipmentListCell : CDTableViewCell
{
    CDPersonalEquipmentListCellModel *_data;
    UIImageView *_equipmentIconImageView;
    UILabel *_equipmentNameLabel;
    UILabel *_centerEquipmentNameLabel;
    UILabel *_equipmentUseDesLabel;
    UIButton *_deviceStateButton;
}

+ (double)getCellHeight;
@property(nonatomic) __weak UIButton *deviceStateButton; // @synthesize deviceStateButton=_deviceStateButton;
@property(nonatomic) __weak UILabel *equipmentUseDesLabel; // @synthesize equipmentUseDesLabel=_equipmentUseDesLabel;
@property(nonatomic) __weak UILabel *centerEquipmentNameLabel; // @synthesize centerEquipmentNameLabel=_centerEquipmentNameLabel;
@property(nonatomic) __weak UILabel *equipmentNameLabel; // @synthesize equipmentNameLabel=_equipmentNameLabel;
@property(nonatomic) __weak UIImageView *equipmentIconImageView; // @synthesize equipmentIconImageView=_equipmentIconImageView;
@property(retain, nonatomic) CDPersonalEquipmentListCellModel *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)deviceStateButtonClicked:(id)arg1;
- (void)updateDeviceStateButton:(long long)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end

