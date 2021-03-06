//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol HBTagsAdapterDelegate;

@interface HBTagsAdapter : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    NSMutableDictionary *_dataSource;
    NSMutableArray *_sortedKeys;
    double _constraintWidth;
    id <HBTagsAdapterDelegate> _delegate;
}

@property(nonatomic) __weak id <HBTagsAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double constraintWidth; // @synthesize constraintWidth=_constraintWidth;
@property(retain, nonatomic) NSMutableArray *sortedKeys; // @synthesize sortedKeys=_sortedKeys;
@property(retain, nonatomic) NSMutableDictionary *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (Class)cellClass;
- (struct CGSize)estimatedSize;
- (void)updateTagsInfoWithTags:(id)arg1;
- (id)initWithTags:(id)arg1 constraintWidth:(double)arg2;
- (void)removeObjectForKey:(id)arg1 atIndex:(long long)arg2;
- (id)objectsForKey:(id)arg1;
- (id)keyAtIndex:(long long)arg1;
- (long long)indexOfKey:(id)arg1;
- (id)dataAtIndexPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

