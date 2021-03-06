//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASDisplayNode.h"

#import "ASRangeControllerUpdateRangeProtocol-Protocol.h"

@class ASCollectionView, NSArray, NSString, _ASCollectionPendingState;
@protocol ASCollectionDataSource, ASCollectionDelegate;

@interface ASCollectionNode : ASDisplayNode <ASRangeControllerUpdateRangeProtocol>
{
    struct RecursiveMutex _environmentStateLock;
    _ASCollectionPendingState *_pendingState;
}

@property(retain, nonatomic) _ASCollectionPendingState *pendingState; // @synthesize pendingState=_pendingState;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)propertiesForDebugDescription;
- (void)setPrimitiveTraitCollection:(struct ASPrimitiveTraitCollection)arg1;
- (void)updateCurrentRangeWithMode:(unsigned long long)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)reloadSections:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)insertSections:(id)arg1;
- (void)endUpdatesAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)endUpdatesAnimated:(_Bool)arg1;
- (void)beginUpdates;
- (void)reloadDataImmediately;
- (void)relayoutItems;
- (void)reloadData;
- (void)reloadDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)waitUntilAllUpdatesAreCommitted;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performBatchAnimated:(_Bool)arg1 updates:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerSupplementaryNodeOfKind:(id)arg1;
- (id)contextForSection:(long long)arg1;
- (id)cellForItemAtIndexPath:(id)arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) NSArray *indexPathsForVisibleItems;
- (id)indexPathForNode:(id)arg1;
- (id)nodeForItemAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSArray *visibleNodes;
@property(readonly, nonatomic) long long numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (void)reloadDataInitiallyIfNeeded;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)deselectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
@property(readonly, nonatomic) NSArray *indexPathsForSelectedItems;
- (void)setTuningParameters:(CDStruct_c3b9c2ee)arg1 forRangeMode:(unsigned long long)arg2 rangeType:(long long)arg3;
- (CDStruct_c3b9c2ee)tuningParametersForRangeMode:(unsigned long long)arg1 rangeType:(long long)arg2;
- (void)setTuningParameters:(CDStruct_c3b9c2ee)arg1 forRangeType:(long long)arg2;
- (CDStruct_c3b9c2ee)tuningParametersForRangeType:(long long)arg1;
@property(nonatomic) _Bool allowsMultipleSelection;
@property(nonatomic) _Bool allowsSelection;
@property(nonatomic) __weak id <ASCollectionDataSource> dataSource;
@property(nonatomic) __weak id <ASCollectionDelegate> delegate;
@property(nonatomic) _Bool inverted;
- (id)rangeController;
- (id)dataController;
- (void)interfaceStateDidChange:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)didExitPreloadState;
- (void)clearContents;
@property(readonly, nonatomic) ASCollectionView *view;
- (void)didLoad;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2 layoutFacilitator:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

