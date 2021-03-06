//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface FlightDeliveryTypeSearchV2Request : CTBusinessBean
{
    int serviceVersion;
    int tripType;
    NSString *productID;
    NSString *policyID;
    NSString *transactionNo;
    NSString *gUID;
    NSString *memcacheKey;
    NSMutableArray *extendList;
}

@property(retain, nonatomic) NSMutableArray *extendList; // @synthesize extendList;
@property(copy, nonatomic) NSString *memcacheKey; // @synthesize memcacheKey;
@property(copy, nonatomic) NSString *gUID; // @synthesize gUID;
@property(copy, nonatomic) NSString *transactionNo; // @synthesize transactionNo;
@property(copy, nonatomic) NSString *policyID; // @synthesize policyID;
@property(copy, nonatomic) NSString *productID; // @synthesize productID;
@property(nonatomic) int tripType; // @synthesize tripType;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

