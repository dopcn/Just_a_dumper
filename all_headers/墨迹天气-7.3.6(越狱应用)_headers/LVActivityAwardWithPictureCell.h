//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPCTableViewCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class LVActivityAwardWithPictureCellObject, NSString, UIButton, UICollectionView, UILabel;

@interface LVActivityAwardWithPictureCell : IPCTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    LVActivityAwardWithPictureCellObject *_object;
    UILabel *_titleLabel;
    UICollectionView *_collectionView;
    UIButton *_sourceBtn;
}

+ (double)heightForObject:(id)arg1 atIndexPath:(id)arg2 tableView:(id)arg3;
@property(retain, nonatomic) UIButton *sourceBtn; // @synthesize sourceBtn=_sourceBtn;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) LVActivityAwardWithPictureCellObject *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)sourceBtnClick;
- (_Bool)shouldUpdateCellWithObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

