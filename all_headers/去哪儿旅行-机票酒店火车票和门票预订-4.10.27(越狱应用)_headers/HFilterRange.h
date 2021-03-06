//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface HFilterRange : NSObject
{
    NSString *_filterID;
    NSArray *_filterContent;
    NSNumber *_priceScale;
    NSNumber *_maxPriceIndex;
    NSNumber *_minPriceIndex;
    NSNumber *_maxPrice;
    struct _NSRange _filterRange;
}

@property(retain, nonatomic) NSNumber *maxPrice; // @synthesize maxPrice=_maxPrice;
@property(retain, nonatomic) NSNumber *minPriceIndex; // @synthesize minPriceIndex=_minPriceIndex;
@property(retain, nonatomic) NSNumber *maxPriceIndex; // @synthesize maxPriceIndex=_maxPriceIndex;
@property(retain, nonatomic) NSNumber *priceScale; // @synthesize priceScale=_priceScale;
@property(nonatomic) struct _NSRange filterRange; // @synthesize filterRange=_filterRange;
@property(retain, nonatomic) NSArray *filterContent; // @synthesize filterContent=_filterContent;
@property(retain, nonatomic) NSString *filterID; // @synthesize filterID=_filterID;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

