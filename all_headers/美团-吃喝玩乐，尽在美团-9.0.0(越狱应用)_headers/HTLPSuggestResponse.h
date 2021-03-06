//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSArray, NSNumber, NSString;

@interface HTLPSuggestResponse : SAKDomainObject
{
    NSString *_stid;
    NSNumber *_code;
    NSArray *_data;
    NSArray *_ct_goodsList;
}

+ (id)ct_goodsListJSONTransformer;
+ (id)dataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *ct_goodsList; // @synthesize ct_goodsList=_ct_goodsList;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) NSNumber *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *stid; // @synthesize stid=_stid;
- (void).cxx_destruct;

@end

