//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MttCartoonChapterLoadingCellDelegate-Protocol.h"
#import "MttCartoonPlaceHolderViewDelegate-Protocol.h"
#import "MttCartoonReaderBannerCircleCellDelegate-Protocol.h"
#import "MttCartoonReaderBuyViewDelegate-Protocol.h"
#import "MttCartoonReaderCellDelegate-Protocol.h"
#import "MttCartoonReaderCellScrollViewDelegate-Protocol.h"
#import "MttCartoonReaderCircleCellDelegate-Protocol.h"
#import "MttCartoonReaderLastCircleCellDelegate-Protocol.h"
#import "MttCartoonReaderPlaceHolderCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class MttCartoonPlaceHolderView, MttCartoonReaderContentCircleManager, MttCartoonReaderPageLoadInfo, NSArray, NSString, UICollectionView;
@protocol MttCartoonReaderViewDelegate;

@interface MttCartoonReaderView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MttCartoonReaderCellScrollViewDelegate, MttCartoonReaderPlaceHolderCellDelegate, MttCartoonReaderBuyViewDelegate, MttCartoonPlaceHolderViewDelegate, MttCartoonChapterLoadingCellDelegate, MttCartoonReaderCellDelegate, MttCartoonReaderCircleCellDelegate, MttCartoonReaderLastCircleCellDelegate, MttCartoonReaderBannerCircleCellDelegate>
{
    MttCartoonReaderPageLoadInfo *_pageLoadInfo;
    id <MttCartoonReaderViewDelegate> _delegate;
    long long _currentTurnPageType;
    long long _currentReadDirectionType;
    NSArray *_chapterRichInfos;
    UICollectionView *_collectionView;
    NSArray *_comicPageInfos;
    MttCartoonPlaceHolderView *_loadErrorView;
    NSString *_currentReadChapterID;
    NSString *_preReadChapterID;
    MttCartoonReaderContentCircleManager *_contentCircleManager;
}

@property(retain, nonatomic) MttCartoonReaderContentCircleManager *contentCircleManager; // @synthesize contentCircleManager=_contentCircleManager;
@property(retain, nonatomic) NSString *preReadChapterID; // @synthesize preReadChapterID=_preReadChapterID;
@property(retain, nonatomic) NSString *currentReadChapterID; // @synthesize currentReadChapterID=_currentReadChapterID;
@property(retain, nonatomic) MttCartoonPlaceHolderView *loadErrorView; // @synthesize loadErrorView=_loadErrorView;
@property(retain, nonatomic) NSArray *comicPageInfos; // @synthesize comicPageInfos=_comicPageInfos;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *chapterRichInfos; // @synthesize chapterRichInfos=_chapterRichInfos;
@property(nonatomic) long long currentReadDirectionType; // @synthesize currentReadDirectionType=_currentReadDirectionType;
@property(nonatomic) long long currentTurnPageType; // @synthesize currentTurnPageType=_currentTurnPageType;
@property(nonatomic) __weak id <MttCartoonReaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MttCartoonReaderPageLoadInfo *pageLoadInfo; // @synthesize pageLoadInfo=_pageLoadInfo;
- (void).cxx_destruct;
- (void)onReaderRecommendAddShelfButtonClicked:(id)arg1;
- (void)onReaderRecommendThumbViewClicked:(id)arg1;
- (void)onBannerAddSelfToShelfButtonClicked;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)onCartoonLogin:(id)arg1;
- (void)onBuyMoreChapter:(id)arg1;
- (void)onBuyChapter:(id)arg1;
- (void)onReloadChapter:(id)arg1;
- (void)onChapterLoadingPageTap:(id)arg1 touchPoint:(struct CGPoint)arg2;
- (void)onReaderPageTap:(id)arg1 touchPoint:(struct CGPoint)arg2;
- (void)onTouchPoint:(struct CGPoint)arg1;
- (void)cartoonReaderPageClicked:(id)arg1 touchPoint:(struct CGPoint)arg2;
- (void)onReaderAfterViewGoCatelog:(id)arg1;
- (void)onReaderAfterViewGoTop:(id)arg1;
- (void)onReaderCircelMoreComment:(id)arg1;
- (void)onReaderCircelWrite:(id)arg1;
- (void)onReaderCircelPrise:(id)arg1;
- (void)cartoonReaderCircelClicked:(id)arg1 touchPoint:(struct CGPoint)arg2;
- (void)onReaderErrorView:(id)arg1 touchPoint:(struct CGPoint)arg2;
- (void)loadNextChapter;
- (void)loadPreChapter;
- (_Bool)atTheLastChapter;
- (_Bool)atTheFirstChapter;
- (void)callbackPageAndCheckChapterChanged;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setReaderContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)contentOffsetFor:(long long)arg1 pageSeq:(long long)arg2;
- (struct CGPoint)contentOffsetForCellIndex:(long long)arg1;
- (struct CGPoint)currentCellContentOffsetToTop;
- (struct CGPoint)currentCellContentOffset;
- (void)reportCartoonReaderPV:(id)arg1;
- (void)checkChapterChanged;
- (id)currentIndexPath;
- (long long)currentPageIndex;
- (long long)currentPageSeq;
- (_Bool)isShowLoadingOrErrorView;
- (id)currentPageInfo;
- (long long)currentChapterPageCount;
- (id)currentChapterID;
- (long long)currentChapterSeq;
- (void)turnToPage:(long long)arg1 reverseIndex:(_Bool)arg2 animated:(_Bool)arg3;
- (void)turnToPrePage;
- (void)turnToNextPage;
- (long long)totalPageCount;
- (long long)currentPage;
- (void)onTapLoadErrorView:(id)arg1;
- (void)onGoButtonClicked:(id)arg1;
- (void)removeLoadErrorView;
- (void)showDataLoadErrorView;
- (void)reloadData;
- (void)reverseComicPageInfosForRightToLeftMode;
- (id)flowLayoutForTurnPageType:(long long)arg1;
- (void)createSubViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 turnPageType:(long long)arg2 readDirectionType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

