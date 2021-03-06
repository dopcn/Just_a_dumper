//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, NSMapTable;

@interface MTGroupedItemCollectionViewLayout : UICollectionViewLayout
{
    _Bool _shouldDisplayGroupFooterView;
    double _spacingBetweenItems;
    double _groupFooterViewHeight;
    NSArray *_arrCollectionViewLayoutAttributes;
    NSMapTable *_collectionViewCellLayoutAttributesMapTable;
    NSMapTable *_collectionViewGroupFooterViewLayoutAttributesMapTable;
    NSMapTable *_collectionViewGroupHeaderViewLayoutAttributesMapTable;
    struct CGSize _itemSize;
    struct CGSize _groupHeaderViewSize;
    struct CGSize _contentSize;
    struct UIEdgeInsets _groupInset;
}

@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) NSMapTable *collectionViewGroupHeaderViewLayoutAttributesMapTable; // @synthesize collectionViewGroupHeaderViewLayoutAttributesMapTable=_collectionViewGroupHeaderViewLayoutAttributesMapTable;
@property(retain, nonatomic) NSMapTable *collectionViewGroupFooterViewLayoutAttributesMapTable; // @synthesize collectionViewGroupFooterViewLayoutAttributesMapTable=_collectionViewGroupFooterViewLayoutAttributesMapTable;
@property(retain, nonatomic) NSMapTable *collectionViewCellLayoutAttributesMapTable; // @synthesize collectionViewCellLayoutAttributesMapTable=_collectionViewCellLayoutAttributesMapTable;
@property(retain, nonatomic) NSArray *arrCollectionViewLayoutAttributes; // @synthesize arrCollectionViewLayoutAttributes=_arrCollectionViewLayoutAttributes;
@property(nonatomic) _Bool shouldDisplayGroupFooterView; // @synthesize shouldDisplayGroupFooterView=_shouldDisplayGroupFooterView;
@property(nonatomic) double groupFooterViewHeight; // @synthesize groupFooterViewHeight=_groupFooterViewHeight;
@property(nonatomic) struct UIEdgeInsets groupInset; // @synthesize groupInset=_groupInset;
@property(nonatomic) double spacingBetweenItems; // @synthesize spacingBetweenItems=_spacingBetweenItems;
@property(nonatomic) struct CGSize groupHeaderViewSize; // @synthesize groupHeaderViewSize=_groupHeaderViewSize;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (void).cxx_destruct;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (double)groupFooterViewMinFrameY;

@end

