//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, SAKCity, TPKCategoryAnimationEmotionalConfiguration, TPKCategoryDefaultIconEmotionalConfiguration, TPKHomeCategoryCellConfig, TPKHomeCategoryViewConfig, TPKHomeSeasonView, TPKHorizontalCollectionViewLayout, UICollectionView, UIImageView, UIPageControl, UIViewController;

@interface TPKHomeCategoryView : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _showPageControl;
    _Bool _shown;
    _Bool _canPushVC;
    NSString *_originEntrance;
    TPKHomeCategoryViewConfig *_categoryViewConfig;
    UIViewController *_sourceViewController;
    SAKCity *_sessionCity;
    NSArray *_seasonArray;
    NSArray *_categoryArray;
    NSString *_destinationCity;
    TPKCategoryAnimationEmotionalConfiguration *_categoryAnimationEmotionalConfiguration;
    TPKCategoryDefaultIconEmotionalConfiguration *_categoryDefaultIconEmotionalConfiguration;
    NSString *_backgroundImgURL;
    CDUnknownBlockType _didClickCategotyCell;
    CDUnknownBlockType _didShowCategotyCell;
    CDUnknownBlockType _didClickSeasonButton;
    UICollectionView *_collectionView;
    UIPageControl *_pageControl;
    UIImageView *_backgroundImageView;
    TPKHomeSeasonView *_seasonView;
    TPKHomeCategoryCellConfig *_cellConfig;
    TPKHorizontalCollectionViewLayout *_flowLayout;
}

@property(nonatomic) _Bool canPushVC; // @synthesize canPushVC=_canPushVC;
@property(nonatomic) _Bool shown; // @synthesize shown=_shown;
@property(retain, nonatomic) TPKHorizontalCollectionViewLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) TPKHomeCategoryCellConfig *cellConfig; // @synthesize cellConfig=_cellConfig;
@property(retain, nonatomic) TPKHomeSeasonView *seasonView; // @synthesize seasonView=_seasonView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool showPageControl; // @synthesize showPageControl=_showPageControl;
@property(copy, nonatomic) CDUnknownBlockType didClickSeasonButton; // @synthesize didClickSeasonButton=_didClickSeasonButton;
@property(copy, nonatomic) CDUnknownBlockType didShowCategotyCell; // @synthesize didShowCategotyCell=_didShowCategotyCell;
@property(copy, nonatomic) CDUnknownBlockType didClickCategotyCell; // @synthesize didClickCategotyCell=_didClickCategotyCell;
@property(copy, nonatomic) NSString *backgroundImgURL; // @synthesize backgroundImgURL=_backgroundImgURL;
@property(retain, nonatomic) TPKCategoryDefaultIconEmotionalConfiguration *categoryDefaultIconEmotionalConfiguration; // @synthesize categoryDefaultIconEmotionalConfiguration=_categoryDefaultIconEmotionalConfiguration;
@property(retain, nonatomic) TPKCategoryAnimationEmotionalConfiguration *categoryAnimationEmotionalConfiguration; // @synthesize categoryAnimationEmotionalConfiguration=_categoryAnimationEmotionalConfiguration;
@property(retain, nonatomic) NSString *destinationCity; // @synthesize destinationCity=_destinationCity;
@property(retain, nonatomic) NSArray *categoryArray; // @synthesize categoryArray=_categoryArray;
@property(retain, nonatomic) NSArray *seasonArray; // @synthesize seasonArray=_seasonArray;
@property(retain, nonatomic) SAKCity *sessionCity; // @synthesize sessionCity=_sessionCity;
@property(nonatomic) __weak UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(retain, nonatomic) TPKHomeCategoryViewConfig *categoryViewConfig; // @synthesize categoryViewConfig=_categoryViewConfig;
@property(copy, nonatomic) NSString *originEntrance; // @synthesize originEntrance=_originEntrance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(readonly, nonatomic) double cellHeight;
- (void)updateConstraints;
- (void)resetPageControl;
- (void)commonInit;
- (id)initWithCategoryArray:(id)arg1;
- (id)initWithAddtionalSettings:(CDUnknownBlockType)arg1;
- (id)initWithCategoryArray:(id)arg1 andAddtionalSettings:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

