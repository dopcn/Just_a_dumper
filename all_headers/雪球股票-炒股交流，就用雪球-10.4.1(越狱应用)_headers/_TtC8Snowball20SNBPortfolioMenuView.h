//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UICollectionView, UICollectionViewFlowLayout;

@interface _TtC8Snowball20SNBPortfolioMenuView : UIView
{
    // Error parsing type: , name: items
    // Error parsing type: , name: layout
    // Error parsing type: , name: collectionView
    // Error parsing type: , name: didSelectIndex
}

- (CDUnknownBlockType).cxx_destruct;
- (void)updateTheme:(_Bool)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, copy) CDUnknownBlockType didSelectIndex; // @synthesize didSelectIndex;
@property(nonatomic, readonly) UICollectionView *collectionView; // @synthesize collectionView;
@property(nonatomic, readonly) UICollectionViewFlowLayout *layout; // @synthesize layout;
@property(nonatomic, copy) NSArray *items; // @synthesize items;

@end

