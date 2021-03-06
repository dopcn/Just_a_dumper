//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, NSTimer, PodBeautyMallSDK_BeautyCamera_BTScrollBannerPageControl, UICollectionView;
@protocol BTScrollBannerDelegate;

@interface PodBeautyMallSDK_BeautyCamera_BTScrollBanner : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate>
{
    _Bool _isCancelAutoNextPage;
    _Bool _isCancelPageControl;
    _Bool _isCancelInfiniteBanner;
    _Bool _isPause;
    _Bool _isNetworkding;
    id <BTScrollBannerDelegate> _delegate;
    NSArray *_originalArr;
    UICollectionView *_collectionView;
    NSMutableArray *_imagesArray;
    NSString *_placeholderImageName;
    PodBeautyMallSDK_BeautyCamera_BTScrollBannerPageControl *_pageControl;
    NSTimer *_timer;
    UIView *_pageIndicatorView;
    UIView *_currentPageIndicatorView;
}

@property(retain, nonatomic) UIView *currentPageIndicatorView; // @synthesize currentPageIndicatorView=_currentPageIndicatorView;
@property(retain, nonatomic) UIView *pageIndicatorView; // @synthesize pageIndicatorView=_pageIndicatorView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) PodBeautyMallSDK_BeautyCamera_BTScrollBannerPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) _Bool isNetworkding; // @synthesize isNetworkding=_isNetworkding;
@property(retain, nonatomic) NSString *placeholderImageName; // @synthesize placeholderImageName=_placeholderImageName;
@property(retain, nonatomic) NSMutableArray *imagesArray; // @synthesize imagesArray=_imagesArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *originalArr; // @synthesize originalArr=_originalArr;
@property(nonatomic) __weak id <BTScrollBannerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isPause; // @synthesize isPause=_isPause;
@property(nonatomic) _Bool isCancelInfiniteBanner; // @synthesize isCancelInfiniteBanner=_isCancelInfiniteBanner;
@property(nonatomic) _Bool isCancelPageControl; // @synthesize isCancelPageControl=_isCancelPageControl;
@property(nonatomic) _Bool isCancelAutoNextPage; // @synthesize isCancelAutoNextPage=_isCancelAutoNextPage;
- (void).cxx_destruct;
- (void)setupCollectionView;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)nextPage:(id)arg1;
- (void)refreshViewWithDataSource:(id)arg1;
- (void)initView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 imageUrlsArray:(id)arg2 placeholderImageName:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

