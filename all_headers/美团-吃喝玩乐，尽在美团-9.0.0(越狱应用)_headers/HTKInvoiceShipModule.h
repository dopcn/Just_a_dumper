//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModule.h"

@class HTKInvoiceInfo, HTKInvoiceShipCell, NSString;

@interface HTKInvoiceShipModule : GCBaseModule
{
    _Bool _isCollapsed;
    HTKInvoiceShipCell *_cell;
    HTKInvoiceInfo *_invoice;
    long long _orderID;
    NSString *_pageType;
    unsigned long long _businessType;
}

@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(nonatomic) _Bool isCollapsed; // @synthesize isCollapsed=_isCollapsed;
@property(copy, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(nonatomic) long long orderID; // @synthesize orderID=_orderID;
@property(retain, nonatomic) HTKInvoiceInfo *invoice; // @synthesize invoice=_invoice;
@property(retain, nonatomic) HTKInvoiceShipCell *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (id)getMGEValueLabel;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupCell;
- (void)setupModule;

@end

