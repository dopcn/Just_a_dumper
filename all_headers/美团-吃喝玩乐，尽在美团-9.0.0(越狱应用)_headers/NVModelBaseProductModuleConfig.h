//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NVModelBaseWedPair;

@interface NVModelBaseProductModuleConfig : NVBaseModel
{
    long long _shopId;
    NSArray *_tabKeys;
    NVModelBaseWedPair *_mainKey;
    long long _shopType;
}

+ (id)metaInfo;
@property(nonatomic) long long shopType; // @synthesize shopType=_shopType;
@property(retain, nonatomic) NVModelBaseWedPair *mainKey; // @synthesize mainKey=_mainKey;
@property(retain, nonatomic) NSArray *tabKeys; // @synthesize tabKeys=_tabKeys;
@property(nonatomic) long long shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;

@end

