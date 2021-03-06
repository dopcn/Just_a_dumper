//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "NVBaseCellProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, NVModelBaseMTOVChannelSecScreenItem, UICollectionView;

@interface OSSTravelActivityCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate, NVBaseCellProtocol>
{
    CDUnknownBlockType _didShowActivity;
    CDUnknownBlockType _didSelectedActivity;
    CDUnknownBlockType _didDraggedToShowMoreActivities;
    UICollectionView *_collectionView;
    NVModelBaseMTOVChannelSecScreenItem *_item;
}

+ (id)cellReuseId:(id)arg1;
+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) NVModelBaseMTOVChannelSecScreenItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType didDraggedToShowMoreActivities; // @synthesize didDraggedToShowMoreActivities=_didDraggedToShowMoreActivities;
@property(copy, nonatomic) CDUnknownBlockType didSelectedActivity; // @synthesize didSelectedActivity=_didSelectedActivity;
@property(copy, nonatomic) CDUnknownBlockType didShowActivity; // @synthesize didShowActivity=_didShowActivity;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

