//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPKTableViewItem.h"

@class NSArray, RACCommand;

@interface TVLPOIDetailVoucherBannerItem : TPKTableViewItem
{
    NSArray *_voucherConfigs;
    double _itemInterSpace;
    RACCommand *_clickCommand;
    long long _poiId;
}

+ (id)itemWithVouchers:(id)arg1;
@property(nonatomic) long long poiId; // @synthesize poiId=_poiId;
@property(retain, nonatomic) RACCommand *clickCommand; // @synthesize clickCommand=_clickCommand;
@property(nonatomic) double itemInterSpace; // @synthesize itemInterSpace=_itemInterSpace;
@property(copy, nonatomic) NSArray *voucherConfigs; // @synthesize voucherConfigs=_voucherConfigs;
- (void).cxx_destruct;

@end

