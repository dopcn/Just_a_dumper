//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

@class NSArray, NSString;

@interface _TtC12MeituanMovie10MAYCompany : MTLModel
{
    // Error parsing type: , name: id
    // Error parsing type: , name: name
    // Error parsing type: , name: englishName
    // Error parsing type: , name: shortIntro
    // Error parsing type: , name: intro
    // Error parsing type: , name: summary
    // Error parsing type: , name: logoUrl
    // Error parsing type: , name: dynamicUrl
    // Error parsing type: , name: nature
    // Error parsing type: , name: scope
    // Error parsing type: , name: turnover
    // Error parsing type: , name: parentCmpList
    // Error parsing type: , name: childCmpList
    // Error parsing type: , name: historyUrl
    // Error parsing type: , name: relatedMovies
    // Error parsing type: , name: relatedCelebrities
}

+ (id)childCmpListJSONTransformer;
+ (id)parentCmpListJSONTransformer;
+ (id)relatedCelebritiesJSONTransformer;
+ (id)relatedMoviesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)init;
@property(nonatomic, copy) NSArray *relatedCelebrities; // @synthesize relatedCelebrities;
@property(nonatomic, copy) NSArray *relatedMovies; // @synthesize relatedMovies;
@property(nonatomic, copy) NSString *historyUrl; // @synthesize historyUrl;
@property(nonatomic, copy) NSArray *childCmpList; // @synthesize childCmpList;
@property(nonatomic, copy) NSArray *parentCmpList; // @synthesize parentCmpList;
@property(nonatomic, copy) NSString *turnover; // @synthesize turnover;
@property(nonatomic, copy) NSString *scope; // @synthesize scope;
@property(nonatomic, copy) NSString *nature; // @synthesize nature;
@property(nonatomic, copy) NSString *dynamicUrl; // @synthesize dynamicUrl;
@property(nonatomic, copy) NSString *logoUrl; // @synthesize logoUrl;
@property(nonatomic, copy) NSString *summary; // @synthesize summary;
@property(nonatomic, copy) NSString *intro; // @synthesize intro;
@property(nonatomic, copy) NSString *shortIntro; // @synthesize shortIntro;
@property(nonatomic, copy) NSString *englishName; // @synthesize englishName;
@property(nonatomic, copy) NSString *name; // @synthesize name;
@property(nonatomic) long long id; // @synthesize id;

@end

