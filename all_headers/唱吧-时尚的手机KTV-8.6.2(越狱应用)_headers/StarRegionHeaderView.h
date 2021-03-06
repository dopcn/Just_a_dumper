//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KTVBaseView.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class KTVCollectionView, KTVTableViewHeader, NSArray, NSString, UIButton, UIImageView, UILabel;
@protocol StarRegionHeaderViewDelegate;

@interface StarRegionHeaderView : KTVBaseView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    id <StarRegionHeaderViewDelegate> _delegate;
    NSArray *_dataList;
    KTVCollectionView *_collectionView;
    KTVTableViewHeader *_header;
    UIImageView *_starListIcon;
    UILabel *_starListLabel;
    UIButton *_allStarListButton;
    UIImageView *_allStarListIcon;
}

@property(retain, nonatomic) UIImageView *allStarListIcon; // @synthesize allStarListIcon=_allStarListIcon;
@property(retain, nonatomic) UIButton *allStarListButton; // @synthesize allStarListButton=_allStarListButton;
@property(retain, nonatomic) UILabel *starListLabel; // @synthesize starListLabel=_starListLabel;
@property(retain, nonatomic) UIImageView *starListIcon; // @synthesize starListIcon=_starListIcon;
@property(retain, nonatomic) KTVTableViewHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) KTVCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(nonatomic) __weak id <StarRegionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onAllStarListButtonClicked:(id)arg1;
- (id)collectionViewLayout;
- (void)setDataList:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

