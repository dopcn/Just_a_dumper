//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QZPhotoModuleViewController.h"

#import "QZPhotoClassifySummaryViewCellDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface QZPhotoClassifyViewController : QZPhotoModuleViewController <QZPhotoClassifySummaryViewCellDelegate>
{
    long long _selectIndex;
    long long _classifyIndex;
    NSString *_attachInfo;
    long long _classifyType;
    long long _getAllCategoryRequestID;
    long long _categoryOperationRequestID;
    NSMutableArray *_summaryModels;
    long long _cacheNum;
    long long _emptyState;
}

+ (id)emptyCell:(id)arg1 type:(long long)arg2 state:(long long)arg3;
+ (id)secendTextFromType:(long long)arg1;
+ (id)firstTextFromType:(long long)arg1;
+ (long long)tranferCategoryDefine:(long long)arg1;
+ (id)cacheKeyWithType:(long long)arg1;
@property(nonatomic) long long emptyState; // @synthesize emptyState=_emptyState;
@property(nonatomic) long long cacheNum; // @synthesize cacheNum=_cacheNum;
@property(retain, nonatomic) NSMutableArray *summaryModels; // @synthesize summaryModels=_summaryModels;
@property(nonatomic) long long categoryOperationRequestID; // @synthesize categoryOperationRequestID=_categoryOperationRequestID;
@property(nonatomic) long long getAllCategoryRequestID; // @synthesize getAllCategoryRequestID=_getAllCategoryRequestID;
@property(nonatomic) long long classifyType; // @synthesize classifyType=_classifyType;
@property(copy, nonatomic) NSString *attachInfo; // @synthesize attachInfo=_attachInfo;
- (void)onMutltiMembersSelected:(id)arg1;
- (void)photoClassifySummaryViewCelladdNickClick:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)cacheKey;
- (void)loadCache;
- (void)updateCacheClassifyData;
- (void)cacheAllClassifyData:(id)arg1;
- (void)categoryOperator:(id)arg1;
- (void)getAllClassifyListNotify:(id)arg1;
- (void)removeClassifyPhotoSuccessNoti:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (_Bool)onHasMore;
- (_Bool)hasNoFeeds;
- (_Bool)onLoadMore;
- (_Bool)onRefresh;
- (void)setTitle:(id)arg1;
- (_Bool)shouldAutoRefresh;
- (void)clickRightBtn:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)initNotificationObservers:(id)arg1;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

