//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "NVBaseCellProtocol-Protocol.h"
#import "SEARCHBaseCollectionViewDelegate-Protocol.h"

@class NSString, NVPageControl, SEARCHBaseCollectionView;

@interface DEFCarouselView : UITableViewCell <SEARCHBaseCollectionViewDelegate, NVBaseCellProtocol>
{
    _Bool _pageControlHidden;
    SEARCHBaseCollectionView *_collectView;
    NVPageControl *_pageControl;
}

+ (id)cellReuseId:(id)arg1;
+ (double)cellHeight:(id)arg1;
@property(nonatomic) _Bool pageControlHidden; // @synthesize pageControlHidden=_pageControlHidden;
@property(retain, nonatomic) NVPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) SEARCHBaseCollectionView *collectView; // @synthesize collectView=_collectView;
- (void).cxx_destruct;
- (void)searchscrollViewDidEndScrollingAnimation:(long long)arg1 actualIndex:(long long)arg2;
- (void)searchscrollViewDidEndDecelerating:(long long)arg1 actualIndex:(long long)arg2;
- (id)searchcollectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 index:(long long)arg3;
- (void)gaLog:(long long)arg1 actualIndex:(long long)arg2;
- (void)setData:(id)arg1;
- (void)layoutSubviews;
- (void)initializeCollectionView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

