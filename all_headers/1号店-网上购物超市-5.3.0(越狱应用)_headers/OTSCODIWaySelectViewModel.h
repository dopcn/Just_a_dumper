//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OTSCheckoutCellViewModel.h"

@class NSString;

@interface OTSCODIWaySelectViewModel : OTSCheckoutCellViewModel
{
    NSString *_deliveryName;
}

+ (id)viewModelWithShipment:(id)arg1;
+ (id)viewModelWithShipment:(id)arg1 checkBig:(_Bool)arg2;
@property(copy, nonatomic) NSString *deliveryName; // @synthesize deliveryName=_deliveryName;
- (void).cxx_destruct;
- (id)deliveryDesc;
- (Class)bindingCellClass;

@end

