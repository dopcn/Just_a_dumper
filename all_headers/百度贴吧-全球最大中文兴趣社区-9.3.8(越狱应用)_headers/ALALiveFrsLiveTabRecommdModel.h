//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseModel.h"

@class ALALiveFrsLiveTabRecommdActivityItem, NSArray, NSMutableArray;

@interface ALALiveFrsLiveTabRecommdModel : TBCBaseModel
{
    _Bool _isLoading;
    _Bool _hasMore;
    unsigned long long _loadingPageNum;
    unsigned long long _currentPageNum;
    NSMutableArray *_liveArray;
    NSArray *_activityArray;
    ALALiveFrsLiveTabRecommdActivityItem *_activityInfo;
}

@property(retain, nonatomic) ALALiveFrsLiveTabRecommdActivityItem *activityInfo; // @synthesize activityInfo=_activityInfo;
@property(copy, nonatomic) NSArray *activityArray; // @synthesize activityArray=_activityArray;
@property(retain, nonatomic) NSMutableArray *liveArray; // @synthesize liveArray=_liveArray;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) unsigned long long currentPageNum; // @synthesize currentPageNum=_currentPageNum;
@property(nonatomic) unsigned long long loadingPageNum; // @synthesize loadingPageNum=_loadingPageNum;
- (void).cxx_destruct;
- (void)handleParsedData:(id)arg1;
- (void)loadNextPage;
- (void)loadData;
- (void)getDataWithPage:(unsigned long long)arg1;
- (id)init;

@end

