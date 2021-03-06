//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface JMAddressListAddressItem : NSObject <NSCoding>
{
    _Bool _certificated;
    _Bool _defaultAddress;
    NSString *_name;
    NSString *_address;
    NSString *_addressId;
    NSString *_asteriskedIdCardNum;
    NSString *_phone;
    NSString *_addressDetail;
    NSString *_structedDistrict;
    NSString *_structedCode;
    NSString *_cityCode;
    NSString *_provinceCode;
}

@property(copy, nonatomic) NSString *provinceCode; // @synthesize provinceCode=_provinceCode;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSString *structedCode; // @synthesize structedCode=_structedCode;
@property(copy, nonatomic) NSString *structedDistrict; // @synthesize structedDistrict=_structedDistrict;
@property(copy, nonatomic) NSString *addressDetail; // @synthesize addressDetail=_addressDetail;
@property(nonatomic) _Bool defaultAddress; // @synthesize defaultAddress=_defaultAddress;
@property(nonatomic) _Bool certificated; // @synthesize certificated=_certificated;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *asteriskedIdCardNum; // @synthesize asteriskedIdCardNum=_asteriskedIdCardNum;
@property(copy, nonatomic) NSString *addressId; // @synthesize addressId=_addressId;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

