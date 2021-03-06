//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSIndexPath, NSMutableArray;
@protocol TTSimpleItemCollectionLayoutDelegate;

@interface TTSimpleItemCollectionLayout : UICollectionViewLayout
{
    float _systemVer;
    id <TTSimpleItemCollectionLayoutDelegate> _delegate;
    NSIndexPath *_selectIndexPath;
    NSMutableArray *_sectionAttributes;
    NSMutableArray *_allAttributes;
    struct CGSize _maxSize;
    struct UIEdgeInsets _contentInset;
}

@property(retain, nonatomic) NSMutableArray *allAttributes; // @synthesize allAttributes=_allAttributes;
@property(retain, nonatomic) NSMutableArray *sectionAttributes; // @synthesize sectionAttributes=_sectionAttributes;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(retain, nonatomic) NSIndexPath *selectIndexPath; // @synthesize selectIndexPath=_selectIndexPath;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) __weak id <TTSimpleItemCollectionLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 frame:(struct CGRect)arg3;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)init;

@end

