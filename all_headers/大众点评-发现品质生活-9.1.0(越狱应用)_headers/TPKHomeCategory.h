//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSArray, NSDictionary, NSNumber, NSString, TPKHomeOperationKeyword;

@interface TPKHomeCategory : SAKDomainObject
{
    _Bool _red;
    NSString *_type;
    NSString *_showType;
    NSString *_showStyle;
    NSString *_iconURL;
    NSNumber *_hasAttr;
    NSNumber *_index;
    NSNumber *_parentID;
    NSString *_name;
    NSString *_mainName;
    NSNumber *_dealsCount;
    NSNumber *_categoryID;
    NSArray *_subCategoryList;
    NSNumber *_mainCategoryID;
    NSString *_refUrl;
    NSNumber *_backgroundRGB;
    NSString *_dataType;
    double _startTimestamp;
    double _endTimestamp;
    NSString *_labelText;
    long long _labelType;
    NSString *_labelColor;
    TPKHomeOperationKeyword *_categoryLabel;
    NSDictionary *_cellTemplate;
    NSString *_iconUrl;
    NSString *_iconUrl2x;
    NSString *_iconUrl3x;
}

+ (id)backgroundRGBJSONTransformer;
+ (id)subCategoryListJSONTransformer;
+ (id)predicateDictionaryMT;
+ (id)predicateDictionaryDP;
+ (id)predicateDictionary;
@property(retain, nonatomic) NSString *iconUrl3x; // @synthesize iconUrl3x=_iconUrl3x;
@property(retain, nonatomic) NSString *iconUrl2x; // @synthesize iconUrl2x=_iconUrl2x;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSDictionary *cellTemplate; // @synthesize cellTemplate=_cellTemplate;
@property(retain, nonatomic) TPKHomeOperationKeyword *categoryLabel; // @synthesize categoryLabel=_categoryLabel;
@property(retain, nonatomic) NSString *labelColor; // @synthesize labelColor=_labelColor;
@property(nonatomic) long long labelType; // @synthesize labelType=_labelType;
@property(retain, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
@property(nonatomic) double endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(copy, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
@property(copy, nonatomic) NSNumber *backgroundRGB; // @synthesize backgroundRGB=_backgroundRGB;
@property(copy, nonatomic) NSString *refUrl; // @synthesize refUrl=_refUrl;
@property(nonatomic) _Bool red; // @synthesize red=_red;
@property(retain, nonatomic) NSNumber *mainCategoryID; // @synthesize mainCategoryID=_mainCategoryID;
@property(retain, nonatomic) NSArray *subCategoryList; // @synthesize subCategoryList=_subCategoryList;
@property(retain, nonatomic) NSNumber *categoryID; // @synthesize categoryID=_categoryID;
@property(retain, nonatomic) NSNumber *dealsCount; // @synthesize dealsCount=_dealsCount;
@property(copy, nonatomic) NSString *mainName; // @synthesize mainName=_mainName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *parentID; // @synthesize parentID=_parentID;
@property(retain, nonatomic) NSNumber *index; // @synthesize index=_index;
@property(retain, nonatomic) NSNumber *hasAttr; // @synthesize hasAttr=_hasAttr;
@property(copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic) NSString *showStyle; // @synthesize showStyle=_showStyle;
@property(copy, nonatomic) NSString *showType; // @synthesize showType=_showType;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

