//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NTESNBALReadBasicViewController.h"

#import "NetworkRefreshDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UICollectionView, UICollectionViewFlowLayout;

@interface NTESNBALMySubscribeViewController : NTESNBALReadBasicViewController <NetworkRefreshDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _isHaveLoadSubs;
    _Bool _isNeedRefreshRecommend;
    UICollectionView *_subscribeCollectionView;
    UICollectionViewFlowLayout *_subscribeFlowLayout;
    NSMutableArray *_myReaderArray;
    NSMutableDictionary *_collectionHeaderDict;
    NSArray *_currentMediaSubs;
    double _itemLeading;
    NSArray *_oldReadArray;
}

@property(retain, nonatomic) NSArray *oldReadArray; // @synthesize oldReadArray=_oldReadArray;
@property(nonatomic) double itemLeading; // @synthesize itemLeading=_itemLeading;
@property(nonatomic) _Bool isNeedRefreshRecommend; // @synthesize isNeedRefreshRecommend=_isNeedRefreshRecommend;
@property(nonatomic) _Bool isHaveLoadSubs; // @synthesize isHaveLoadSubs=_isHaveLoadSubs;
@property(retain, nonatomic) NSArray *currentMediaSubs; // @synthesize currentMediaSubs=_currentMediaSubs;
@property(retain, nonatomic) NSMutableDictionary *collectionHeaderDict; // @synthesize collectionHeaderDict=_collectionHeaderDict;
@property(retain, nonatomic) NSMutableArray *myReaderArray; // @synthesize myReaderArray=_myReaderArray;
@property(nonatomic) __weak UICollectionViewFlowLayout *subscribeFlowLayout; // @synthesize subscribeFlowLayout=_subscribeFlowLayout;
@property(nonatomic) __weak UICollectionView *subscribeCollectionView; // @synthesize subscribeCollectionView=_subscribeCollectionView;
- (void).cxx_destruct;
- (void)initCollectionView;
- (void)updateViewConstraints;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)toNewsContentController:(id)arg1 withTopicId:(id)arg2;
- (void)toSubscribeListController:(id)arg1;
- (id)subscribeHeaderFromIndexPath:(id)arg1;
- (void)parseMyReaderList:(id)arg1;
- (void)loadLocalData;
- (void)refreshCompletionFailure:(id)arg1 error:(id)arg2 refreshType:(long long)arg3 identifier:(id)arg4;
- (void)refreshCompletionSuccess:(id)arg1 respObject:(id)arg2 refreshType:(long long)arg3 identifier:(id)arg4;
- (id)refreshIdentifier;
- (id)networkRequestWithRefreshType:(long long)arg1;
- (id)getMedidFavoriteTopicUrl;
- (void)refreshMySubscribe;
- (void)userAccountChanged:(id)arg1;
- (void)updateSubscribeHeaderControlsColor:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

