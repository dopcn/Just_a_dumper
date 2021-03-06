//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BBAComicReaderContentView.h"

#import "BBAComicReaderADCellDelegate-Protocol.h"
#import "BBAComicReaderChapterContentFailedCellDelegate-Protocol.h"
#import "BBAComicReaderImageCellDelegate-Protocol.h"
#import "BBAComicReaderPurchaseCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class BBAComicFailedView, BBAComicReaderScrollView, BBAComicTableOfContentsInfo, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, UICollectionView, UITapGestureRecognizer;
@protocol BBAComicReaderContentNAViewDelegate;

@interface BBAComicReaderContentNAView : BBAComicReaderContentView <BBAComicReaderChapterContentFailedCellDelegate, BBAComicReaderPurchaseCellDelegate, BBAComicReaderADCellDelegate, BBAComicReaderImageCellDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>
{
    _Bool _isAutoPay;
    _Bool _isScrolling;
    _Bool _isBeginDrag;
    _Bool _isFirstReaderImage;
    BBAComicTableOfContentsInfo *_chapterInfo;
    id <BBAComicReaderContentNAViewDelegate> _delegate;
    NSArray *_hotComics;
    BBAComicReaderScrollView *_bgScrollView;
    NSString *_comicId;
    NSString *_firstChapterId;
    NSString *_firstImageIndex;
    NSString *_curChapterId;
    NSIndexPath *_curIndexPath;
    UICollectionView *_collectionView;
    BBAComicFailedView *_failedView;
    NSMutableDictionary *_contentDict;
    NSMutableDictionary *_chapterLoadStatusDict;
    NSMutableArray *_sectionTypeList;
    NSMutableDictionary *_ADDict;
    NSMutableDictionary *_ADLoadStatusDict;
    NSString *_beanCount;
    long long _readPicSum;
    UITapGestureRecognizer *_singleTapGesture;
    UITapGestureRecognizer *_doubleTapGesture;
    struct CGPoint _lastContentOffset;
}

@property(nonatomic) _Bool isFirstReaderImage; // @synthesize isFirstReaderImage=_isFirstReaderImage;
@property(nonatomic) _Bool isBeginDrag; // @synthesize isBeginDrag=_isBeginDrag;
@property(nonatomic) __weak UITapGestureRecognizer *doubleTapGesture; // @synthesize doubleTapGesture=_doubleTapGesture;
@property(nonatomic) __weak UITapGestureRecognizer *singleTapGesture; // @synthesize singleTapGesture=_singleTapGesture;
@property(nonatomic) long long readPicSum; // @synthesize readPicSum=_readPicSum;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(copy, nonatomic) NSString *beanCount; // @synthesize beanCount=_beanCount;
@property(nonatomic) _Bool isAutoPay; // @synthesize isAutoPay=_isAutoPay;
@property(nonatomic) struct CGPoint lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(retain, nonatomic) NSMutableDictionary *ADLoadStatusDict; // @synthesize ADLoadStatusDict=_ADLoadStatusDict;
@property(retain, nonatomic) NSMutableDictionary *ADDict; // @synthesize ADDict=_ADDict;
@property(retain, nonatomic) NSMutableArray *sectionTypeList; // @synthesize sectionTypeList=_sectionTypeList;
@property(retain, nonatomic) NSMutableDictionary *chapterLoadStatusDict; // @synthesize chapterLoadStatusDict=_chapterLoadStatusDict;
@property(retain, nonatomic) NSMutableDictionary *contentDict; // @synthesize contentDict=_contentDict;
@property(retain, nonatomic) BBAComicFailedView *failedView; // @synthesize failedView=_failedView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSIndexPath *curIndexPath; // @synthesize curIndexPath=_curIndexPath;
@property(retain, nonatomic) NSString *curChapterId; // @synthesize curChapterId=_curChapterId;
@property(retain, nonatomic) NSString *firstImageIndex; // @synthesize firstImageIndex=_firstImageIndex;
@property(retain, nonatomic) NSString *firstChapterId; // @synthesize firstChapterId=_firstChapterId;
@property(retain, nonatomic) NSString *comicId; // @synthesize comicId=_comicId;
@property(retain, nonatomic) BBAComicReaderScrollView *bgScrollView; // @synthesize bgScrollView=_bgScrollView;
@property(copy, nonatomic) NSArray *hotComics; // @synthesize hotComics=_hotComics;
@property(nonatomic) __weak id <BBAComicReaderContentNAViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BBAComicTableOfContentsInfo *chapterInfo; // @synthesize chapterInfo=_chapterInfo;
- (void).cxx_destruct;
- (int)getChapterLoadStatus:(id)arg1;
- (id)getSource;
- (void)readChapterPicNumUbc:(long long)arg1;
- (double)getPicSpacing;
- (void)hiddenBarByDelay:(double)arg1;
- (unsigned long long)advertisementScale;
- (id)getImageItem:(id)arg1 imageIndex:(long long)arg2;
- (id)getSectionsIndexWithCid:(id)arg1;
- (id)getContentItemWithCid:(id)arg1;
- (id)getContentItemWithChapter:(id)arg1;
- (id)getEndIndexPath;
- (id)getStartIndexPath;
- (struct CGPoint)getEndPoint;
- (struct CGPoint)getStartPoint;
- (void)constructSectionTypeList;
- (void)login;
- (void)setCollectionViewScrollMode:(_Bool)arg1 collectionView:(id)arg2;
- (void)turnReadMode:(_Bool)arg1;
- (void)resetReaderZoomScale;
- (void)doubleTapAction:(id)arg1;
- (void)singleTapAction:(id)arg1;
- (double)getChapterLength:(id)arg1;
- (struct CGSize)getImageCellHeight:(id)arg1;
- (void)reloadCollectionViewWithContent:(id)arg1 cid:(id)arg2;
- (unsigned long long)collectionScrollPostion;
- (void)nextPage;
- (void)previousPage;
- (void)progressSkip:(id)arg1 destPic:(id)arg2 animated:(_Bool)arg3;
- (void)updateProgress:(id)arg1;
- (void)downloadImage:(id)arg1;
- (void)preImageData:(id)arg1 imageIndex:(long long)arg2 offset:(long long)arg3;
- (void)reloadChapterInfoAndCollectionView;
- (void)loadContentWithIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)preLoadChapterContent:(long long)arg1 offset:(long long)arg2;
- (void)loadChapterContent:(id)arg1 chapterId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadReaderContentWithId:(id)arg1 chapterCids:(id)arg2 contentCid:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)readPicNumStatistics;
- (void)handleProgressAfterRotateScreenWithIndexPath:(id)arg1;
- (void)handleBarAfterRotateScreen;
- (void)loadReaderContent;
- (void)setComicIdAndChapterId:(id)arg1 chapter:(id)arg2 image:(id)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (_Bool)addPurchaseComicToFavorite;
- (void)cancelAutoPay:(id)arg1;
- (void)showFirstAutoPayToast;
- (void)refreshUserBeanCount;
- (void)buyResult:(id)arg1;
- (void)receiveAdvertisementWithChapterID:(id)arg1;
- (void)gotoBuyMoreChpaterPageWithChapterIndex:(id)arg1;
- (void)purchaseComicWithParam:(id)arg1;
- (void)chargeAndPurchaseWithParam:(id)arg1;
- (void)purchaseFullLengthComic;
- (void)retryChapterContent:(id)arg1;
- (void)purchaseCell:(id)arg1 didClickButtonWithType:(unsigned long long)arg2;
- (void)gotoAdvertisementDetailPageWithAD:(id)arg1;
- (void)adCell:(id)arg1 didClickButtonWithType:(unsigned long long)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadCollectionView;
- (void)registerClassCollectionCell;
- (void)initCollectionView;
- (void)layoutSubviews;
- (void)initGestureRecongnizer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

