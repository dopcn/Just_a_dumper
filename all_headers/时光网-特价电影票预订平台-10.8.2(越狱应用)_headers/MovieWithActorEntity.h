//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBModel.h"

@class NSArray, NSNumber, NSString;

@interface MovieWithActorEntity : MTBModel
{
    NSNumber *_movieId;
    NSString *_image;
    NSString *_name;
    NSString *_year;
    NSString *_rating;
    NSArray *_offices;
    NSArray *_personates;
    NSArray *_awards;
    NSString *_releaseDate;
    NSString *_releaseCountry;
    NSNumber *_totalCount;
}

+ (id)mtdOptional_replaceLocalKeyFromServerKey;
+ (id)mtdOptional_getArrayTypePropertiesMappingDic;
@property(retain, nonatomic) NSNumber *totalCount; // @synthesize totalCount=_totalCount;
@property(copy, nonatomic) NSString *releaseCountry; // @synthesize releaseCountry=_releaseCountry;
@property(copy, nonatomic) NSString *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(retain, nonatomic) NSArray *awards; // @synthesize awards=_awards;
@property(retain, nonatomic) NSArray *personates; // @synthesize personates=_personates;
@property(retain, nonatomic) NSArray *offices; // @synthesize offices=_offices;
@property(copy, nonatomic) NSString *rating; // @synthesize rating=_rating;
@property(copy, nonatomic) NSString *year; // @synthesize year=_year;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSNumber *movieId; // @synthesize movieId=_movieId;
- (void).cxx_destruct;

@end

