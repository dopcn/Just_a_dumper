//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface InvoiceAddResponse : CTBusinessBean
{
    int _result;
    int _isContainOrderDetail;
    NSString *_resultMessage;
    NSMutableArray *_invoiceDeliveryModeList;
    NSMutableArray *_invoicesList;
    NSMutableArray *_invoiceTypeList;
    NSMutableArray *_invoiceInfoModelList;
}

@property(retain, nonatomic) NSMutableArray *invoiceInfoModelList; // @synthesize invoiceInfoModelList=_invoiceInfoModelList;
@property(retain, nonatomic) NSMutableArray *invoiceTypeList; // @synthesize invoiceTypeList=_invoiceTypeList;
@property(retain, nonatomic) NSMutableArray *invoicesList; // @synthesize invoicesList=_invoicesList;
@property(retain, nonatomic) NSMutableArray *invoiceDeliveryModeList; // @synthesize invoiceDeliveryModeList=_invoiceDeliveryModeList;
@property(nonatomic) int isContainOrderDetail; // @synthesize isContainOrderDetail=_isContainOrderDetail;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage=_resultMessage;
@property(nonatomic) int result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

