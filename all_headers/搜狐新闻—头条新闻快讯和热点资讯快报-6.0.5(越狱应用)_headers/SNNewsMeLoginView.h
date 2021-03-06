//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, SNNewsMeLoginModel, SNThirdLoginViewModel, UICollectionView, UILabel;
@protocol SNNewsMeLoginViewDelegate;

@interface SNNewsMeLoginView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <SNNewsMeLoginViewDelegate> _delegate;
    UILabel *_titleLabel;
    UICollectionView *_collectionView;
    SNNewsMeLoginModel *_loginIconModel;
    SNThirdLoginViewModel *_thirdLoginModel;
}

@property(retain, nonatomic) SNThirdLoginViewModel *thirdLoginModel; // @synthesize thirdLoginModel=_thirdLoginModel;
@property(retain, nonatomic) SNNewsMeLoginModel *loginIconModel; // @synthesize loginIconModel=_loginIconModel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <SNNewsMeLoginViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refreshTable;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)createCollectView;
- (void)createTitleLabel;
- (void)update:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

