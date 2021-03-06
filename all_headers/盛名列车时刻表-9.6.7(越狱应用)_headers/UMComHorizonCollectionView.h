//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSIndexPath, NSMutableDictionary, NSString, UICollectionViewFlowLayout, UIColor, UIImageView, UIView;
@protocol UMComHorizonCollectionViewDelegate;

@interface UMComHorizonCollectionView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _isHighLightWhenDidSelected;
    _Bool _isTheFirstTime;
    UIView *_bottomLine;
    double _itemSpace;
    long long _currentIndex;
    long long _lastIndex;
    UIColor *_titleHightColor;
    double _bottomLineHeight;
    double _indicatorLineHeight;
    double _indicatorLineWidth;
    double _indicatorLineLeftEdge;
    UIImageView *_scrollIndicatorView;
    UIView *_topLine;
    id <UMComHorizonCollectionViewDelegate> _cellDelegate;
    long long _itemCount;
    UICollectionViewFlowLayout *_currentLayout;
    NSIndexPath *_currentIndexPath;
    NSMutableDictionary *_indexPathsDict;
    struct CGSize _itemSize;
}

@property(nonatomic) _Bool isTheFirstTime; // @synthesize isTheFirstTime=_isTheFirstTime;
@property(retain, nonatomic) NSMutableDictionary *indexPathsDict; // @synthesize indexPathsDict=_indexPathsDict;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) UICollectionViewFlowLayout *currentLayout; // @synthesize currentLayout=_currentLayout;
@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) __weak id <UMComHorizonCollectionViewDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIImageView *scrollIndicatorView; // @synthesize scrollIndicatorView=_scrollIndicatorView;
@property(nonatomic) double indicatorLineLeftEdge; // @synthesize indicatorLineLeftEdge=_indicatorLineLeftEdge;
@property(nonatomic) double indicatorLineWidth; // @synthesize indicatorLineWidth=_indicatorLineWidth;
@property(nonatomic) double indicatorLineHeight; // @synthesize indicatorLineHeight=_indicatorLineHeight;
@property(nonatomic) double bottomLineHeight; // @synthesize bottomLineHeight=_bottomLineHeight;
@property(copy, nonatomic) UIColor *titleHightColor; // @synthesize titleHightColor=_titleHightColor;
@property(readonly, nonatomic) long long lastIndex; // @synthesize lastIndex=_lastIndex;
@property(readonly, nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) double itemSpace; // @synthesize itemSpace=_itemSpace;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) _Bool isHighLightWhenDidSelected; // @synthesize isHighLightWhenDidSelected=_isHighLightWhenDidSelected;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)startIndex:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 itemSize:(struct CGSize)arg2 itemCount:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 itemCount:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

