//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCCaptureVideoCollectionPanel.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString;

@interface TBCCaptureVideoStickerPanel : TBCCaptureVideoCollectionPanel <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _hasSetNone;
    long long _selectedIndex;
}

@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) _Bool hasSetNone; // @synthesize hasSetNone=_hasSetNone;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dealloc;
- (void)reloadCellForItem:(id)arg1;
- (void)resetCollectionViewSelection:(id)arg1;
- (void)resetCollectionViewSelection;
- (void)reloadAndResetSelection;
- (void)resetCorrectSelectIndex:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)itemSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

