//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface GrowingElement : NSObject <NSCopying>
{
    _Bool _isContentEncoded;
    NSString *_page;
    NSString *_pageGroup;
    NSString *_content;
    NSString *_xpath;
    long long _index;
    NSString *_domain;
    NSString *_query;
    NSString *_href;
    GrowingElement *_deletePage;
    GrowingElement *_deleteContent;
    GrowingElement *_deleteIndex;
}

@property(readonly, nonatomic) GrowingElement *deleteIndex; // @synthesize deleteIndex=_deleteIndex;
@property(readonly, nonatomic) GrowingElement *deleteContent; // @synthesize deleteContent=_deleteContent;
@property(readonly, nonatomic) GrowingElement *deletePage; // @synthesize deletePage=_deletePage;
@property(nonatomic) _Bool isContentEncoded; // @synthesize isContentEncoded=_isContentEncoded;
@property(retain, nonatomic) NSString *href; // @synthesize href=_href;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *xpath; // @synthesize xpath=_xpath;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *pageGroup; // @synthesize pageGroup=_pageGroup;
@property(copy, nonatomic) NSString *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)fromDict:(id)arg1;
- (id)toDict;
- (id)elementType;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

