//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OTSProductSeriesBaseCVCellObject.h"

@class NSNumber, OTSProductServiceItemChargeVO;

@interface OTSSeriesProductItemExtendCVCellObject : OTSProductSeriesBaseCVCellObject
{
    OTSProductServiceItemChargeVO *_itemChargeVO;
    NSNumber *_serviceItemChargeId;
}

@property(retain, nonatomic) NSNumber *serviceItemChargeId; // @synthesize serviceItemChargeId=_serviceItemChargeId;
@property(retain, nonatomic) OTSProductServiceItemChargeVO *itemChargeVO; // @synthesize itemChargeVO=_itemChargeVO;
- (void).cxx_destruct;
- (id)initWithCVCellClassStr:(id)arg1 andItemChargeVO:(id)arg2;

@end

