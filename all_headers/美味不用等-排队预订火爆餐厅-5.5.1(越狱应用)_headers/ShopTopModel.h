//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface ShopTopModel : JSONModel
{
    NSString *_queuingNum;
    long long _shopId;
    long long _manageShopId;
    NSString *_logo;
    NSString *_tLogo;
    double _avgReview;
    NSString *_shopName;
}

@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(nonatomic) double avgReview; // @synthesize avgReview=_avgReview;
@property(retain, nonatomic) NSString *tLogo; // @synthesize tLogo=_tLogo;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(nonatomic) long long manageShopId; // @synthesize manageShopId=_manageShopId;
@property(nonatomic) long long shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *queuingNum; // @synthesize queuingNum=_queuingNum;
- (void).cxx_destruct;

@end

