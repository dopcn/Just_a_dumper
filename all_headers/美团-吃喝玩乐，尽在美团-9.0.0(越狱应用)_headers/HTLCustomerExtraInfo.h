//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSString;

@interface HTLCustomerExtraInfo : SAKDomainObject
{
    NSString *_idNum;
    NSString *_phone;
    NSString *_countryCallingCode;
    long long _guestId;
}

@property(nonatomic) long long guestId; // @synthesize guestId=_guestId;
@property(retain, nonatomic) NSString *countryCallingCode; // @synthesize countryCallingCode=_countryCallingCode;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSString *idNum; // @synthesize idNum=_idNum;
- (void).cxx_destruct;

@end

