//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString;

@interface SShareCarAdvertiseModel : NSObject
{
    _Bool _isConnectable;
    NSString *_localName;
    NSNumber *_TxPower;
    NSArray *_serviceUUIDs;
    NSDictionary *_serviceData;
    NSData *_manufacturerData;
    NSArray *_overflowServiceUUIDs;
    NSArray *_solicitedServiceUUIDs;
    NSDictionary *_originalData;
}

@property(retain, nonatomic) NSDictionary *originalData; // @synthesize originalData=_originalData;
@property(retain, nonatomic) NSArray *solicitedServiceUUIDs; // @synthesize solicitedServiceUUIDs=_solicitedServiceUUIDs;
@property(nonatomic) _Bool isConnectable; // @synthesize isConnectable=_isConnectable;
@property(retain, nonatomic) NSArray *overflowServiceUUIDs; // @synthesize overflowServiceUUIDs=_overflowServiceUUIDs;
@property(retain, nonatomic) NSData *manufacturerData; // @synthesize manufacturerData=_manufacturerData;
@property(retain, nonatomic) NSDictionary *serviceData; // @synthesize serviceData=_serviceData;
@property(retain, nonatomic) NSArray *serviceUUIDs; // @synthesize serviceUUIDs=_serviceUUIDs;
@property(retain, nonatomic) NSNumber *TxPower; // @synthesize TxPower=_TxPower;
@property(copy, nonatomic) NSString *localName; // @synthesize localName=_localName;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

