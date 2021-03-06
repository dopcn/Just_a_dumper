//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModuleViewModel.h"

#import "HTLOverseaDataInfoModuleViewModelProtocol-Protocol.h"

@class NSArray, NSString, NVModelBaseHotelOrderOrderDetailResult;

@interface HTLOverseaOrderReservationModuleViewModel : GCBaseModuleViewModel <HTLOverseaDataInfoModuleViewModelProtocol>
{
    NSArray *cellItemInfoArray;
    CDUnknownBlockType didExtendBlcok;
    NVModelBaseHotelOrderOrderDetailResult *_orderResult;
    unsigned long long _businessType;
}

@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) NVModelBaseHotelOrderOrderDetailResult *orderResult; // @synthesize orderResult=_orderResult;
@property(copy, nonatomic) CDUnknownBlockType didExtendBlcok; // @synthesize didExtendBlcok;
@property(retain, nonatomic) NSArray *cellItemInfoArray; // @synthesize cellItemInfoArray;
- (void).cxx_destruct;
- (double)maxTitleWidthWithData:(id)arg1 font:(id)arg2;
- (id)makeUpDataWithArray:(id)arg1 reuseIdentifer:(id)arg2;
- (void)makeUpCellItem;
- (void)setupViewModel;
- (_Bool)shouldShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

