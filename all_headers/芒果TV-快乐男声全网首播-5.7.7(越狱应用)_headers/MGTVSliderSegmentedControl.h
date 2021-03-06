//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSMutableArray, NSNumber, NSString, UICollectionView, UIFont;
@protocol MGTVSliderSegmentedControlDelegate;

@interface MGTVSliderSegmentedControl : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _widthFull;
    _Bool _isHideSegmentLine;
    id <MGTVSliderSegmentedControlDelegate> _delegate;
    long long _currentSelectedIndex;
    NSString *_cellBackgroundImageName;
    UICollectionView *_collectionView;
    NSArray *_titleArray;
    NSMutableArray *_itemWidthArray;
    NSMutableArray *_itemSumWidthArray;
    UIView *_animatedLineView;
    NSNumber *_fixedItemWidth;
    double _contentAreaWidth;
    double _animatedLineViewWidth;
    NSString *_titleSelectColorName;
    NSString *_titleNormalColorName;
    NSString *_animatedLineViewDefaultColorName;
    UIFont *_normalFont;
    UIFont *_selectedFont;
}

@property(nonatomic) _Bool isHideSegmentLine; // @synthesize isHideSegmentLine=_isHideSegmentLine;
@property(retain, nonatomic) UIFont *selectedFont; // @synthesize selectedFont=_selectedFont;
@property(retain, nonatomic) UIFont *normalFont; // @synthesize normalFont=_normalFont;
@property(retain, nonatomic) NSString *animatedLineViewDefaultColorName; // @synthesize animatedLineViewDefaultColorName=_animatedLineViewDefaultColorName;
@property(retain, nonatomic) NSString *titleNormalColorName; // @synthesize titleNormalColorName=_titleNormalColorName;
@property(retain, nonatomic) NSString *titleSelectColorName; // @synthesize titleSelectColorName=_titleSelectColorName;
@property(nonatomic) _Bool widthFull; // @synthesize widthFull=_widthFull;
@property(nonatomic) double animatedLineViewWidth; // @synthesize animatedLineViewWidth=_animatedLineViewWidth;
@property(nonatomic) double contentAreaWidth; // @synthesize contentAreaWidth=_contentAreaWidth;
@property(retain, nonatomic) NSNumber *fixedItemWidth; // @synthesize fixedItemWidth=_fixedItemWidth;
@property(retain, nonatomic) UIView *animatedLineView; // @synthesize animatedLineView=_animatedLineView;
@property(retain, nonatomic) NSMutableArray *itemSumWidthArray; // @synthesize itemSumWidthArray=_itemSumWidthArray;
@property(retain, nonatomic) NSMutableArray *itemWidthArray; // @synthesize itemWidthArray=_itemWidthArray;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSString *cellBackgroundImageName; // @synthesize cellBackgroundImageName=_cellBackgroundImageName;
@property(nonatomic) long long currentSelectedIndex; // @synthesize currentSelectedIndex=_currentSelectedIndex;
@property(nonatomic) __weak id <MGTVSliderSegmentedControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)changeTheme;
- (void)didMoveToItem:(long long)arg1;
- (void)updateLineView:(double)arg1;
- (void)calculateItemWidthWithItemTitle:(id)arg1 screenFull:(_Bool)arg2;
- (void)initCollectionView;
- (void)resetOffset;
- (void)hiddenCurrentSelect:(_Bool)arg1;
- (void)sliderSegmentDidEndMoveToIndex:(double)arg1;
- (void)sliderSegmentDidMove:(double)arg1;
- (void)setDefaultSelectedIndex:(long long)arg1;
- (void)setIsCAPEnabled:(_Bool)arg1;
- (void)setNormalFont:(id)arg1 selectedFont:(id)arg2;
- (void)setTitles:(id)arg1;
- (id)initWithXFrame:(struct CGRect)arg1 fixedItemWidth:(id)arg2 widthFullScreen:(_Bool)arg3 itemTitles:(id)arg4 tilteNormalColorName:(id)arg5 tilteSelectColorName:(id)arg6 lineViewDefaultColorName:(id)arg7;
- (id)initWithFrame:(struct CGRect)arg1 fixedItemWidth:(id)arg2 widthFullScreen:(_Bool)arg3 itemTitles:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

