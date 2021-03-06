//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NBNetworkResponseDelegate-Protocol.h"

@class NBSCatalogRequest, NBSoundItem, NSMutableArray, NSString;
@protocol NBSMultChapterProviderDelegate;

@interface NBSMultChapterProvider : NSObject <NBNetworkResponseDelegate>
{
    NBSoundItem *_soundItem;
    id <NBSMultChapterProviderDelegate> _delegate;
    NBSCatalogRequest *_multRequest;
    NSMutableArray *_requestTaskArray;
    NSMutableArray *_waitingList;
    long long _requestMaxPageCount;
    long long _requestMaxCount;
    long long _requestCount;
    long long _pageCount;
    long long _currentIndex;
}

@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) long long requestMaxCount; // @synthesize requestMaxCount=_requestMaxCount;
@property(nonatomic) long long requestMaxPageCount; // @synthesize requestMaxPageCount=_requestMaxPageCount;
@property(retain, nonatomic) NSMutableArray *waitingList; // @synthesize waitingList=_waitingList;
@property(retain, nonatomic) NSMutableArray *requestTaskArray; // @synthesize requestTaskArray=_requestTaskArray;
@property(retain, nonatomic) NBSCatalogRequest *multRequest; // @synthesize multRequest=_multRequest;
@property(nonatomic) id <NBSMultChapterProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NBSoundItem *soundItem; // @synthesize soundItem=_soundItem;
- (void)handleSingleTaskFinishedWithAsc:(_Bool)arg1;
- (void)handleServerDataErrorWithAsc:(_Bool)arg1;
- (void)onFinishedNotifyWithRequest:(id)arg1;
- (void)onFailedNotifyWithRequest:(id)arg1;
- (void)handleWaitingList;
- (void)executTaskWithPos:(long long)arg1;
- (void)prepareChapterItemsFromOnlineWith:(id)arg1 decItems:(id)arg2 index:(long long)arg3 pageSize:(long long)arg4 totalCount:(long long)arg5;
- (void)prepareChapterItemsFromDBWith:(long long)arg1 pageSize:(long long)arg2;
- (void)getChapterItemsFrom:(long long)arg1 pageSize:(long long)arg2;
- (void)prepareMultOnlineChapterFromRequestData:(id)arg1;
- (id)prepareRequestDataFrom:(long long)arg1 count:(long long)arg2 forQueue:(long long)arg3 isAsc:(_Bool)arg4;
- (void)configRequestSettings;
- (void)dealloc;
- (id)initWithSoundItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

