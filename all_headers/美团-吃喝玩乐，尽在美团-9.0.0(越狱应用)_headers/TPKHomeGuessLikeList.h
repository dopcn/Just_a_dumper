//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSArray, NSDictionary, NSString, TPKHomeGuessLikeMore;

@interface TPKHomeGuessLikeList : SAKDomainObject
{
    long long _dataType;
    NSArray *_itemsArray;
    NSString *_listTitle;
    TPKHomeGuessLikeMore *_more;
    NSDictionary *_cellTemplateInfo;
}

+ (id)dataTypeJSONTransformer;
+ (id)domainWithJSONDictionary:(id)arg1 error:(id *)arg2 poiTransformBlock:(CDUnknownBlockType)arg3 dealTransformBlock:(CDUnknownBlockType)arg4;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSDictionary *cellTemplateInfo; // @synthesize cellTemplateInfo=_cellTemplateInfo;
@property(retain, nonatomic) TPKHomeGuessLikeMore *more; // @synthesize more=_more;
@property(copy, nonatomic) NSString *listTitle; // @synthesize listTitle=_listTitle;
@property(retain, nonatomic) NSArray *itemsArray; // @synthesize itemsArray=_itemsArray;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
- (void).cxx_destruct;

@end

