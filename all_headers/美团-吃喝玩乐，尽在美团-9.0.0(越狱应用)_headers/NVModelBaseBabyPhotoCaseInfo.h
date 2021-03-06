//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString;

@interface NVModelBaseBabyPhotoCaseInfo : NVBaseModel
{
    NSString *_title;
    NSArray *_tagList;
    NSString *_recommendTag;
    NSString *_picPath;
    long long _type;
    NSString *_link;
    long long _caseId;
}

+ (id)metaInfo;
@property(nonatomic) long long caseId; // @synthesize caseId=_caseId;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *picPath; // @synthesize picPath=_picPath;
@property(copy, nonatomic) NSString *recommendTag; // @synthesize recommendTag=_recommendTag;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

