//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface OSSCreateOrderPassengerSaleTypeInfo : NSObject
{
    _Bool _showTag;
    NSString *_saleTypeTitle;
    long long _saleType;
    NSString *_saleName;
    double _price;
    NSString *_saleNote;
    long long _neededNum;
    NSArray *_passengerArray;
}

@property(copy, nonatomic) NSArray *passengerArray; // @synthesize passengerArray=_passengerArray;
@property(nonatomic) _Bool showTag; // @synthesize showTag=_showTag;
@property(nonatomic) long long neededNum; // @synthesize neededNum=_neededNum;
@property(copy, nonatomic) NSString *saleNote; // @synthesize saleNote=_saleNote;
@property(nonatomic) double price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *saleName; // @synthesize saleName=_saleName;
@property(nonatomic) long long saleType; // @synthesize saleType=_saleType;
@property(copy, nonatomic) NSString *saleTypeTitle; // @synthesize saleTypeTitle=_saleTypeTitle;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *saleTypeStr;

@end

