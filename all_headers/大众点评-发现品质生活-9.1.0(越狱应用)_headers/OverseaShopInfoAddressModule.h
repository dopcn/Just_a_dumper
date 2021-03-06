//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVShopInfoAddressModule.h"

@class NSString, NVModelBaseOSShopAddressDO, NVModelBaseOverseaShopExtraInfo, NVSpeedMonitor, OverseaAddressCell;

@interface OverseaShopInfoAddressModule : NVShopInfoAddressModule
{
    NVModelBaseOverseaShopExtraInfo *_shopOverSeaExtra;
    NVModelBaseOSShopAddressDO *_overseaAddress;
    OverseaAddressCell *_addressCell;
    NSString *_addressTitle;
    NVSpeedMonitor *_speedMonitor;
}

@property(retain, nonatomic) NVSpeedMonitor *speedMonitor; // @synthesize speedMonitor=_speedMonitor;
@property(copy, nonatomic) NSString *addressTitle; // @synthesize addressTitle=_addressTitle;
@property(retain, nonatomic) OverseaAddressCell *addressCell; // @synthesize addressCell=_addressCell;
@property(retain, nonatomic) NVModelBaseOSShopAddressDO *overseaAddress; // @synthesize overseaAddress=_overseaAddress;
@property(retain, nonatomic) NVModelBaseOverseaShopExtraInfo *shopOverSeaExtra; // @synthesize shopOverSeaExtra=_shopOverSeaExtra;
- (void).cxx_destruct;
- (void)dealloc;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)reloadData;
- (id)addressStr;
- (void)queryOverseaAddress;
- (void)queryOverseaExtra;
- (void)shopDidUpdate:(id)arg1;
- (_Bool)isOverseaH5On;
- (_Bool)isCitySupportedByAutoNavi;
- (_Bool)isUserLocationDomestic;
- (_Bool)isOverseaShop;
- (void)showMap:(id)arg1;
- (void)setupModule;

@end

