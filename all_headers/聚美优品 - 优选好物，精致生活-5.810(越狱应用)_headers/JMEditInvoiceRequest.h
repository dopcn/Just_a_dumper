//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JMUserCenterBaseRequest.h"

@class NSString;

@interface JMEditInvoiceRequest : JMUserCenterBaseRequest
{
    NSString *_order_id;
    NSString *_shipping_no;
    NSString *_invoice_header;
    NSString *_invoice_medium;
    NSString *_email;
    NSString *_userTaxCode;
}

@property(copy, nonatomic) NSString *userTaxCode; // @synthesize userTaxCode=_userTaxCode;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *invoice_medium; // @synthesize invoice_medium=_invoice_medium;
@property(copy, nonatomic) NSString *invoice_header; // @synthesize invoice_header=_invoice_header;
@property(copy, nonatomic) NSString *shipping_no; // @synthesize shipping_no=_shipping_no;
@property(copy, nonatomic) NSString *order_id; // @synthesize order_id=_order_id;
- (void).cxx_destruct;
- (id)subUri;

@end

