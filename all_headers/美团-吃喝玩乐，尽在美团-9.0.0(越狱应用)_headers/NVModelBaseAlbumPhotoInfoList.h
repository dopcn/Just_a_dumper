//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVModelBaseResultList.h"

@class NSArray;

@interface NVModelBaseAlbumPhotoInfoList : NVModelBaseResultList
{
    NSArray *_albumList;
    NSArray *_categoryList;
    NSArray *_list;
    NSArray *_photoTagList;
}

+ (id)metaInfo;
@property(retain, nonatomic) NSArray *photoTagList; // @synthesize photoTagList=_photoTagList;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(retain, nonatomic) NSArray *categoryList; // @synthesize categoryList=_categoryList;
@property(retain, nonatomic) NSArray *albumList; // @synthesize albumList=_albumList;
- (void).cxx_destruct;

@end

