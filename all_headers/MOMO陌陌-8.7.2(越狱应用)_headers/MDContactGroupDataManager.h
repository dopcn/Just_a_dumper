//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MDGroupApi, NSMutableArray, NSString;
@protocol MDContactGroupDataManagerDelegate;

@interface MDContactGroupDataManager : NSObject
{
    _Bool _isHasMoreData;
    _Bool _isLoading;
    id <MDContactGroupDataManagerDelegate> _dataManagerDelegate;
    unsigned long long _requestIndex;
    NSString *_preFileCategoryStr;
    NSMutableArray *_dataArray;
    MDGroupApi *_groupApi;
}

@property(retain, nonatomic) MDGroupApi *groupApi; // @synthesize groupApi=_groupApi;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(copy, nonatomic) NSString *preFileCategoryStr; // @synthesize preFileCategoryStr=_preFileCategoryStr;
@property(nonatomic) unsigned long long requestIndex; // @synthesize requestIndex=_requestIndex;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isHasMoreData; // @synthesize isHasMoreData=_isHasMoreData;
@property(nonatomic) __weak id <MDContactGroupDataManagerDelegate> dataManagerDelegate; // @synthesize dataManagerDelegate=_dataManagerDelegate;
- (void).cxx_destruct;
- (void)loadFileCategoryGroupError:(id)arg1;
- (void)loadFileCategoryGroupFaile:(id)arg1;
- (void)loadFilerCategoryGroupSuccess:(id)arg1;
- (void)loadDataFaile:(id)arg1;
- (void)loadDataError:(id)arg1;
- (void)loadDataSuccess:(id)arg1;
- (void)getRecommendGroupError:(id)arg1;
- (void)getRecommendGroupFail:(id)arg1;
- (void)getRecommendGroupSuccess:(id)arg1;
- (void)requestGroupWithFileCategory:(id)arg1 withIndex:(unsigned long long)arg2;
- (void)loadFileCategoryGroupFromServer;
- (void)loadFromServer;
- (void)loadFromCache;
- (void)loadMoreData;
- (void)loadRecommendData;

@end

