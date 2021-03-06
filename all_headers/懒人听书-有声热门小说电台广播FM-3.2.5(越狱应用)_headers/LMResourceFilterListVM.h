//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LMPageTabBarControllerChildVM.h"

@class LMFilterResourceApiHelper, NSArray, NSMutableArray;

@interface LMResourceFilterListVM : LMPageTabBarControllerChildVM
{
    long long _entityType;
    long long _entityId;
    _Bool _needCache;
    _Bool _isAllTab;
    _Bool _hasMoreData;
    _Bool _needRefreshFilters;
    NSArray *_filterData;
    NSArray *_currentSelectFilters;
    unsigned long long _resourceCount;
    LMFilterResourceApiHelper *_resouceApiHelper;
}

@property(retain, nonatomic) LMFilterResourceApiHelper *resouceApiHelper; // @synthesize resouceApiHelper=_resouceApiHelper;
@property(nonatomic) _Bool needRefreshFilters; // @synthesize needRefreshFilters=_needRefreshFilters;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(nonatomic) unsigned long long resourceCount; // @synthesize resourceCount=_resourceCount;
@property(nonatomic) _Bool isAllTab; // @synthesize isAllTab=_isAllTab;
@property(nonatomic) _Bool needCache; // @synthesize needCache=_needCache;
@property(retain, nonatomic) NSArray *currentSelectFilters; // @synthesize currentSelectFilters=_currentSelectFilters;
@property(retain, nonatomic) NSArray *filterData; // @synthesize filterData=_filterData;
- (void).cxx_destruct;
- (id)getObjectFromCache;
- (id)currentSelectedFilterItemsValue;
- (_Bool)isAllFilterIsDefault;
- (void)requestResourcesIdsWithPageNumber:(unsigned long long)arg1 showFilters:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 cache:(_Bool)arg5;
@property(readonly, nonatomic) long long showCount;
@property(readonly, nonatomic) NSMutableArray *resourceData;
- (unsigned long long)getResourceType;
- (long long)getEntityType;
- (id)getEntityId;
- (id)init;

@end

