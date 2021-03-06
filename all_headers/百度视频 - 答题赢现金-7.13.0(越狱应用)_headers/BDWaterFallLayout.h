//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;
@protocol BDWaterFallLayoutDelegate;

@interface BDWaterFallLayout : UICollectionViewLayout
{
    struct {
        unsigned int didRespondColumnCount:1;
        unsigned int didRespondColumnMargin:1;
        unsigned int didRespondRowMargin:1;
        unsigned int didRespondEdgeInsets:1;
        unsigned int didRespondHeaderHeight:1;
    } _delegateFlags;
    id <BDWaterFallLayoutDelegate> _delegate;
    NSMutableArray *_attrsArray;
    NSMutableArray *_columnHeights;
    double _maxY;
}

@property(nonatomic) double maxY; // @synthesize maxY=_maxY;
@property(retain, nonatomic) NSMutableArray *columnHeights; // @synthesize columnHeights=_columnHeights;
@property(retain, nonatomic) NSMutableArray *attrsArray; // @synthesize attrsArray=_attrsArray;
@property(nonatomic) __weak id <BDWaterFallLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)headerHeight;
- (struct UIEdgeInsets)edgeInsets;
- (double)rowMargin;
- (double)columnMargin;
- (unsigned long long)columnCount;
- (void)setupAttrsArray;
- (void)setupColumnHeightsArray;
- (double)maxYWithColumnHeightsArray:(id)arg1;
- (void)setupDelegateFlags;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForHeaderAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;

@end

