//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModule.h"

@class NSArray, NSDictionary, NSMutableArray;

@interface DEFShikeDealListModule : NVBaseModule
{
    NSMutableArray *_realDataSource;
    NSDictionary *_dataSourceDic;
    NSMutableArray *_currentDataSource;
    long long _currentIndex;
    NSArray *_tabList;
}

@property(retain, nonatomic) NSArray *tabList; // @synthesize tabList=_tabList;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *currentDataSource; // @synthesize currentDataSource=_currentDataSource;
@property(retain, nonatomic) NSDictionary *dataSourceDic; // @synthesize dataSourceDic=_dataSourceDic;
@property(retain, nonatomic) NSMutableArray *realDataSource; // @synthesize realDataSource=_realDataSource;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)needLoadMore;
- (id)updateLoadingMoreStatus:(id)arg1;
- (_Bool)isValidDataSource;
- (void)setupData;
- (void)setupModule;
- (_Bool)needAutoModuleCellView;
- (_Bool)shouldShow;

@end

