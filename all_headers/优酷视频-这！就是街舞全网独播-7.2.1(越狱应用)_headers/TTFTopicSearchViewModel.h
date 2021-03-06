//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTFTopicBaseViewModel.h"

@class YKFCommunityTopicServiceSearchTopicsAPI;

@interface TTFTopicSearchViewModel : TTFTopicBaseViewModel
{
    long long _totalTopicCount;
    YKFCommunityTopicServiceSearchTopicsAPI *_api;
    long long _curPage;
}

@property(nonatomic) long long curPage; // @synthesize curPage=_curPage;
@property(retain, nonatomic) YKFCommunityTopicServiceSearchTopicsAPI *api; // @synthesize api=_api;
@property(nonatomic) long long totalTopicCount; // @synthesize totalTopicCount=_totalTopicCount;
- (void).cxx_destruct;
- (void)loadMoreData;
- (void)loadMoreSearchData;
- (void)refreshData;
- (void)search:(id)arg1;
- (void)createSearchApi;
- (id)init;

@end

