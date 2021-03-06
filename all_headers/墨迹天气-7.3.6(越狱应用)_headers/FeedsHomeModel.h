//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"
#import "NSCoding-Protocol.h"

@class FeedsItemBannerModel, NSArray, NSString;

@interface FeedsHomeModel : MTLModel <MTLJSONSerializing, NSCoding>
{
    _Bool _isMore;
    NSArray *_feedList;
    NSString *_pageCursor;
    FeedsItemBannerModel *_bannerModel;
}

+ (id)bannerModelJSONTransformer;
+ (id)feedListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool isMore; // @synthesize isMore=_isMore;
@property(retain, nonatomic) FeedsItemBannerModel *bannerModel; // @synthesize bannerModel=_bannerModel;
@property(retain, nonatomic) NSString *pageCursor; // @synthesize pageCursor=_pageCursor;
@property(retain, nonatomic) NSArray *feedList; // @synthesize feedList=_feedList;
- (void).cxx_destruct;

@end

