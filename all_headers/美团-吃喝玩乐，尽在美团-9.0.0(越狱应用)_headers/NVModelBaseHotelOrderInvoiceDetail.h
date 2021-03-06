//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVModelBaseHotelOrderInvoiceCommon.h"

@class NSArray, NSString, NVModelBaseHotelOrderFaqInfo, NVModelBaseHotelOrderRefundDetail, NVModelBaseLogisticsInfo;

@interface NVModelBaseHotelOrderInvoiceDetail : NVModelBaseHotelOrderInvoiceCommon
{
    _Bool _canAppendInvoice;
    _Bool _hasInvoice;
    _Bool _canReserveInvoice;
    _Bool _hasReservedInvoice;
    _Bool _showReserveInvoice;
    NSArray *_explanationList;
    NSArray *_detailInfoList;
    NSString *_electronicInvoicePicUrl;
    NVModelBaseLogisticsInfo *_logisticsInfo;
    NSString *_postDesc;
    NSString *_invoiceAmountDesc;
    NSString *_kindName;
    NSString *_status;
    NVModelBaseHotelOrderRefundDetail *_refundDetail;
    NVModelBaseHotelOrderFaqInfo *_invoiceFaq;
    NSArray *_reserveInvoiceGuide;
    NSString *_queryInvoiceText;
    NSString *_appendInvoiceText;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *appendInvoiceText; // @synthesize appendInvoiceText=_appendInvoiceText;
@property(copy, nonatomic) NSString *queryInvoiceText; // @synthesize queryInvoiceText=_queryInvoiceText;
@property(nonatomic) _Bool showReserveInvoice; // @synthesize showReserveInvoice=_showReserveInvoice;
@property(nonatomic) _Bool hasReservedInvoice; // @synthesize hasReservedInvoice=_hasReservedInvoice;
@property(nonatomic) _Bool canReserveInvoice; // @synthesize canReserveInvoice=_canReserveInvoice;
@property(retain, nonatomic) NSArray *reserveInvoiceGuide; // @synthesize reserveInvoiceGuide=_reserveInvoiceGuide;
@property(retain, nonatomic) NVModelBaseHotelOrderFaqInfo *invoiceFaq; // @synthesize invoiceFaq=_invoiceFaq;
@property(retain, nonatomic) NVModelBaseHotelOrderRefundDetail *refundDetail; // @synthesize refundDetail=_refundDetail;
@property(nonatomic) _Bool hasInvoice; // @synthesize hasInvoice=_hasInvoice;
@property(nonatomic) _Bool canAppendInvoice; // @synthesize canAppendInvoice=_canAppendInvoice;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *kindName; // @synthesize kindName=_kindName;
@property(copy, nonatomic) NSString *invoiceAmountDesc; // @synthesize invoiceAmountDesc=_invoiceAmountDesc;
@property(copy, nonatomic) NSString *postDesc; // @synthesize postDesc=_postDesc;
@property(retain, nonatomic) NVModelBaseLogisticsInfo *logisticsInfo; // @synthesize logisticsInfo=_logisticsInfo;
@property(copy, nonatomic) NSString *electronicInvoicePicUrl; // @synthesize electronicInvoicePicUrl=_electronicInvoicePicUrl;
@property(retain, nonatomic) NSArray *detailInfoList; // @synthesize detailInfoList=_detailInfoList;
@property(retain, nonatomic) NSArray *explanationList; // @synthesize explanationList=_explanationList;
- (void).cxx_destruct;

@end

