//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString;

@interface NVModelBaseBabyPhotoAlbumCaseInfo : NVBaseModel
{
    NSString *_link;
    long long _type;
    NSString *_picPath;
    NSString *_recommendTag;
    NSArray *_tagList;
    NSString *_title;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(copy, nonatomic) NSString *recommendTag; // @synthesize recommendTag=_recommendTag;
@property(copy, nonatomic) NSString *picPath; // @synthesize picPath=_picPath;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
- (void).cxx_destruct;

@end

