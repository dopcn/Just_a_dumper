//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONBaseModel.h"

@class NSArray, NSDictionary, NSString;

@interface JMModelActivityCardInfo : JSONBaseModel
{
    _Bool _downloaded;
    _Bool _isReload;
    NSString *_pageId;
    NSString *_modelName;
    NSString *_modelType;
    NSString *_customRequestDomain;
    NSString *_customRequestUrl;
    NSDictionary *_content;
    NSArray *_locationWindows;
    NSString *_filterCategoryId;
    NSString *_filterBrandId;
    NSString *_filterFunctionIds;
    NSString *_filterJumeiPrice;
    NSString *_sort;
    NSString *_page;
    NSString *_pageKey;
    NSString *_itemPerPage;
    NSString *_tabId;
}

@property(copy, nonatomic) NSString *tabId; // @synthesize tabId=_tabId;
@property(copy, nonatomic) NSString *itemPerPage; // @synthesize itemPerPage=_itemPerPage;
@property(copy, nonatomic) NSString *pageKey; // @synthesize pageKey=_pageKey;
@property(copy, nonatomic) NSString *page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *sort; // @synthesize sort=_sort;
@property(copy, nonatomic) NSString *filterJumeiPrice; // @synthesize filterJumeiPrice=_filterJumeiPrice;
@property(copy, nonatomic) NSString *filterFunctionIds; // @synthesize filterFunctionIds=_filterFunctionIds;
@property(copy, nonatomic) NSString *filterBrandId; // @synthesize filterBrandId=_filterBrandId;
@property(copy, nonatomic) NSString *filterCategoryId; // @synthesize filterCategoryId=_filterCategoryId;
@property(nonatomic) _Bool isReload; // @synthesize isReload=_isReload;
@property(nonatomic) _Bool downloaded; // @synthesize downloaded=_downloaded;
@property(retain, nonatomic) NSArray *locationWindows; // @synthesize locationWindows=_locationWindows;
@property(retain, nonatomic) NSDictionary *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *customRequestUrl; // @synthesize customRequestUrl=_customRequestUrl;
@property(copy, nonatomic) NSString *customRequestDomain; // @synthesize customRequestDomain=_customRequestDomain;
@property(copy, nonatomic) NSString *modelType; // @synthesize modelType=_modelType;
@property(copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long cardType;

@end

