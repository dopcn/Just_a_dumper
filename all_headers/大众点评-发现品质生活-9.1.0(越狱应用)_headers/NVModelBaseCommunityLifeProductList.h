//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString;

@interface NVModelBaseCommunityLifeProductList : NVBaseModel
{
    NSString *_actionUrl;
    NSArray *_products;
    long long _count;
    NSString *_title;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
@property(copy, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
- (void).cxx_destruct;

@end

