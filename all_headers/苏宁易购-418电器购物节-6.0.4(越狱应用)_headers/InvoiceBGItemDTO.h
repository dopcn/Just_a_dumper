//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface InvoiceBGItemDTO : NSObject
{
    NSString *_itemId;
    NSString *_omsItemId;
    NSString *_partNumber;
    NSString *_productName;
    NSString *_price;
    NSString *_qty;
    NSString *_itemType;
    NSString *_supplierCode;
}

@property(retain, nonatomic) NSString *supplierCode; // @synthesize supplierCode=_supplierCode;
@property(retain, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSString *qty; // @synthesize qty=_qty;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *partNumber; // @synthesize partNumber=_partNumber;
@property(retain, nonatomic) NSString *omsItemId; // @synthesize omsItemId=_omsItemId;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (void)encodeFromDictionary:(id)arg1;
- (void)dealloc;

@end

