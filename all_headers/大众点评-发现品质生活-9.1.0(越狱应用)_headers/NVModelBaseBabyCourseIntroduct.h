//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString;

@interface NVModelBaseBabyCourseIntroduct : NVBaseModel
{
    long long _productCategoryId;
    long long _uid;
    NSString *_pic;
    NSString *_name;
    NSString *_originPrice;
    NSString *_nowPrice;
    NSArray *_tagList;
    NSString *_specialTag;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *specialTag; // @synthesize specialTag=_specialTag;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(copy, nonatomic) NSString *nowPrice; // @synthesize nowPrice=_nowPrice;
@property(copy, nonatomic) NSString *originPrice; // @synthesize originPrice=_originPrice;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) long long productCategoryId; // @synthesize productCategoryId=_productCategoryId;
- (void).cxx_destruct;

@end

