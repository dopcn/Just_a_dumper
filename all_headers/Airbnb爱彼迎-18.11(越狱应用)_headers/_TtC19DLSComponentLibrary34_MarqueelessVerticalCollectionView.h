//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class UICollectionViewLayout;
@protocol UICollectionViewDataSource;

@interface _TtC19DLSComponentLibrary34_MarqueelessVerticalCollectionView : UICollectionView
{
    // Error parsing type: , name: style
    // Error parsing type: , name: sectionHeadersTracker
    // Error parsing type: , name: sectionFootersTracker
    // Error parsing type: , name: sectionTypesTracker
    // Error parsing type: , name: displayModesTracker
    // Error parsing type: , name: sizeCache
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)setCollectionViewLayout:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadSections:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadData;
- (void)deleteSections:(id)arg1;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)insertSections:(id)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
@property(nonatomic, retain) UICollectionViewLayout *collectionViewLayout;
@property(nonatomic) __weak id <UICollectionViewDataSource> dataSource;
- (id)initWithCoder:(id)arg1;

@end

