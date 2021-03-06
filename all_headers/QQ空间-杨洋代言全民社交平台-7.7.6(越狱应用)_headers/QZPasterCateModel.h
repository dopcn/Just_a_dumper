//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QZBaseModel.h"

@class NSArray, NSDictionary, NSString;

@interface QZPasterCateModel : QZBaseModel
{
    _Bool _hasMore;
    NSString *_cateID;
    NSString *_title;
    NSArray *_allPasterSetArray;
    NSString *_mapAttatchInfo;
    NSDictionary *_pasterSetIndexDic;
}

@property(copy, nonatomic) NSDictionary *pasterSetIndexDic; // @synthesize pasterSetIndexDic=_pasterSetIndexDic;
@property(copy, nonatomic) NSString *mapAttatchInfo; // @synthesize mapAttatchInfo=_mapAttatchInfo;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(copy, nonatomic) NSArray *allPasterSetArray; // @synthesize allPasterSetArray=_allPasterSetArray;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *cateID; // @synthesize cateID=_cateID;
- (void).cxx_destruct;
- (id)quickFindPasterSet:(id)arg1;
- (void)addPasterSetList:(id)arg1;
- (void)setPasterSetList:(id)arg1;

@end

