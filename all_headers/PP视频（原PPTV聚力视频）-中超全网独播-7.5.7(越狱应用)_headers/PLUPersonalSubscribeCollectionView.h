//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PLUMySubcribleCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol PLUPersonalSubscribeCollectionViewDelegate><PLUMySubcribleCellDelegate;

@interface PLUPersonalSubscribeCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, PLUMySubcribleCellDelegate>
{
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    id <PLUPersonalSubscribeCollectionViewDelegate><PLUMySubcribleCellDelegate> _delegate;
    NSArray *_dataSource;
}

@property(copy, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PLUPersonalSubscribeCollectionViewDelegate><PLUMySubcribleCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)subcribleUserCard:(id)arg1;
- (_Bool)collectionView:(id)arg1 UICollectionViewDelegate:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setCollectionView;
- (void)setViews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

