//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString;

@interface NVModelBaseHomeShopBasicInfo : NVBaseModel
{
    NSString *_shopName;
    long long _power;
    NSString *_avgPrice;
    long long _reviewCount;
    NSArray *_coverPicInfos;
}

+ (id)metaInfo;
@property(retain, nonatomic) NSArray *coverPicInfos; // @synthesize coverPicInfos=_coverPicInfos;
@property(nonatomic) long long reviewCount; // @synthesize reviewCount=_reviewCount;
@property(copy, nonatomic) NSString *avgPrice; // @synthesize avgPrice=_avgPrice;
@property(nonatomic) long long power; // @synthesize power=_power;
@property(copy, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
- (void).cxx_destruct;

@end

