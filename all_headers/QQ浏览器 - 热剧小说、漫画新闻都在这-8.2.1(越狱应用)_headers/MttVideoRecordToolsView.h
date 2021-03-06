//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class MttVideoRecordWidgetView, NSMutableArray, NSString, UICollectionView, UILabel;
@protocol MttVideoRecordToolsViewDelegate;

@interface MttVideoRecordToolsView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <MttVideoRecordToolsViewDelegate> _delegate;
    UICollectionView *_collectionView;
    MttVideoRecordWidgetView *_selectedView;
    NSMutableArray *_widgets;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSMutableArray *widgets; // @synthesize widgets=_widgets;
@property(retain, nonatomic) MttVideoRecordWidgetView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <MttVideoRecordToolsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setUnuseItemEnable;
- (void)setCellEnable:(id)arg1 widget:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setupItemsWithWidgets:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 widgets:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

