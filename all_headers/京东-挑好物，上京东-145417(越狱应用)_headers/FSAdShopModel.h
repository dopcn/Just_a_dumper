//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FSAdShopModel : NSObject
{
    NSString *_adShopId;
    NSString *_adShopName;
    NSString *_adVenderId;
    NSString *_adStyleType;
    NSString *_adImageUrl;
    NSString *_adLogoUrl;
    NSString *_adClickUrl;
    NSString *_adExposalUrl;
    NSString *_adFollowCount;
    NSString *_adIconResCode;
    NSArray *_adChildLinks;
    NSArray *_adShopIcons;
}

+ (id)objectClassInArray;
+ (id)replacedKeyFromPropertyName;
@property(retain, nonatomic) NSArray *adShopIcons; // @synthesize adShopIcons=_adShopIcons;
@property(retain, nonatomic) NSArray *adChildLinks; // @synthesize adChildLinks=_adChildLinks;
@property(copy, nonatomic) NSString *adIconResCode; // @synthesize adIconResCode=_adIconResCode;
@property(copy, nonatomic) NSString *adFollowCount; // @synthesize adFollowCount=_adFollowCount;
@property(copy, nonatomic) NSString *adExposalUrl; // @synthesize adExposalUrl=_adExposalUrl;
@property(copy, nonatomic) NSString *adClickUrl; // @synthesize adClickUrl=_adClickUrl;
@property(copy, nonatomic) NSString *adLogoUrl; // @synthesize adLogoUrl=_adLogoUrl;
@property(copy, nonatomic) NSString *adImageUrl; // @synthesize adImageUrl=_adImageUrl;
@property(copy, nonatomic) NSString *adStyleType; // @synthesize adStyleType=_adStyleType;
@property(copy, nonatomic) NSString *adVenderId; // @synthesize adVenderId=_adVenderId;
@property(copy, nonatomic) NSString *adShopName; // @synthesize adShopName=_adShopName;
@property(copy, nonatomic) NSString *adShopId; // @synthesize adShopId=_adShopId;
- (void).cxx_destruct;

@end

