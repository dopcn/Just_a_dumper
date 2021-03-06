//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSArray, NSMutableArray, NSString, ScenicRankListShare;

@interface ScenicRankListData : SAKDomainObject
{
    NSString *_pageTitle;
    NSString *_headerImageUrl;
    NSString *_rankId;
    NSString *_intro;
    NSArray *_models;
    NSArray *_questions;
    long long _count;
    ScenicRankListShare *_share;
    long long _headerHeight;
    NSMutableArray *_items;
    long long _status;
}

+ (id)questionsJSONTransformer;
+ (id)modelsJSONTransformer;
+ (id)shareJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) long long headerHeight; // @synthesize headerHeight=_headerHeight;
@property(retain, nonatomic) ScenicRankListShare *share; // @synthesize share=_share;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSArray *questions; // @synthesize questions=_questions;
@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
@property(copy, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(copy, nonatomic) NSString *rankId; // @synthesize rankId=_rankId;
@property(copy, nonatomic) NSString *headerImageUrl; // @synthesize headerImageUrl=_headerImageUrl;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
- (void).cxx_destruct;
- (id)init;

@end

