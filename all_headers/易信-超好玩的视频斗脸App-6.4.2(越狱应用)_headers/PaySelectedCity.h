//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PaySelectedCity : NSObject
{
    long long _cityID;
    NSString *_cityName;
    NSString *_provinceName;
    NSString *_district;
}

@property(retain, nonatomic) NSString *district; // @synthesize district=_district;
@property(retain, nonatomic) NSString *provinceName; // @synthesize provinceName=_provinceName;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) long long cityID; // @synthesize cityID=_cityID;
- (void).cxx_destruct;

@end

