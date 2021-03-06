//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTLOverseaAccomodationPreferenceModuleViewModel.h"

@class HTLOverseaChooseDataInfo, NSString, NVModelBaseHotelOrderCancelDetail, NVModelBaseHotelOrderPricePayInfo, RACCommand;

@interface HTLRefundChannelListModuleViewModel : HTLOverseaAccomodationPreferenceModuleViewModel
{
    RACCommand *_getPreferenceCommand;
    NSString *_refundChannelListIdentifers;
    HTLOverseaChooseDataInfo *_refundChannelDataInfo;
    NVModelBaseHotelOrderPricePayInfo *_payInfo;
    NVModelBaseHotelOrderCancelDetail *_cancelDetail;
}

@property(retain, nonatomic) NVModelBaseHotelOrderCancelDetail *cancelDetail; // @synthesize cancelDetail=_cancelDetail;
@property(retain, nonatomic) NVModelBaseHotelOrderPricePayInfo *payInfo; // @synthesize payInfo=_payInfo;
@property(retain, nonatomic) HTLOverseaChooseDataInfo *refundChannelDataInfo; // @synthesize refundChannelDataInfo=_refundChannelDataInfo;
@property(readonly, nonatomic) NSString *refundChannelListIdentifers; // @synthesize refundChannelListIdentifers=_refundChannelListIdentifers;
- (void).cxx_destruct;
- (id)getPreferenceCommand;
- (void)setupRefundChannelListData;
- (void)setupViewModel;

@end

