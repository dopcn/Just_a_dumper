//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface CarPoolAddressInfo : NSObject <NSCopying, NSCoding>
{
    NSNumber *_longitude;
    NSNumber *_latitude;
    NSString *_name;
    NSString *_address;
    NSString *_cityCode;
    NSString *_cityName;
    NSString *_addressTips;
    NSNumber *_addressTypeLocal;
}

@property(retain, nonatomic) NSNumber *addressTypeLocal; // @synthesize addressTypeLocal=_addressTypeLocal;
@property(copy, nonatomic) NSString *addressTips; // @synthesize addressTips=_addressTips;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
- (void).cxx_destruct;
- (void)clearAddressData;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)compare:(id)arg1;

@end

