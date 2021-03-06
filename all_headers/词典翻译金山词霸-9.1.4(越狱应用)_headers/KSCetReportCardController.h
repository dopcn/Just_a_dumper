//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

#import "KSCetReportCardCell_AdsDelegate-Protocol.h"
#import "KSCetReportCardSectionViewDelegate-Protocol.h"
#import "KSCetReportCardSectionView_DataTableDelegate-Protocol.h"
#import "KSRefreshViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class KSCetReportCardModel, KSRefreshView, NSMutableArray, NSMutableDictionary, NSString, UICollectionView;

@interface KSCetReportCardController : KSBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, KSCetReportCardCell_AdsDelegate, KSCetReportCardSectionViewDelegate, KSCetReportCardSectionView_DataTableDelegate, KSRefreshViewDelegate, UIGestureRecognizerDelegate>
{
    NSString *_cetPageId;
    NSString *_attemptTime;
    NSString *_className;
    UICollectionView *_collectionView;
    NSMutableArray *_dataArray;
    NSMutableArray *_dataScoreArray;
    NSMutableArray *_dataListenArray;
    NSMutableArray *_dataReadArray;
    NSMutableArray *_dataAdsArray;
    KSCetReportCardModel *_model;
    KSRefreshView *_refreshView;
    NSMutableDictionary *_wrongAnswerDic;
}

@property(retain, nonatomic) NSMutableDictionary *wrongAnswerDic; // @synthesize wrongAnswerDic=_wrongAnswerDic;
@property(retain, nonatomic) KSRefreshView *refreshView; // @synthesize refreshView=_refreshView;
@property(retain, nonatomic) KSCetReportCardModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSMutableArray *dataAdsArray; // @synthesize dataAdsArray=_dataAdsArray;
@property(retain, nonatomic) NSMutableArray *dataReadArray; // @synthesize dataReadArray=_dataReadArray;
@property(retain, nonatomic) NSMutableArray *dataListenArray; // @synthesize dataListenArray=_dataListenArray;
@property(retain, nonatomic) NSMutableArray *dataScoreArray; // @synthesize dataScoreArray=_dataScoreArray;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(copy, nonatomic) NSString *attemptTime; // @synthesize attemptTime=_attemptTime;
@property(copy, nonatomic) NSString *cetPageId; // @synthesize cetPageId=_cetPageId;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)showAlert;
- (void)back:(id)arg1;
- (id)getCurrentTime;
- (void)onRightBarButtonItemClickAction:(id)arg1;
- (void)didReceiveMemoryWarning;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)clickAdsWithIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)pushViewControllerSectionViewWithindexPath:(id)arg1;
- (void)pushViewControllerTableWithindexPath:(id)arg1;
- (void)pushViewControllerWithModel:(id)arg1 indexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configureCollectionView;
- (void)configure_Pop_Subviews;
- (void)configure_Show_Subviews;
- (void)configureData;
- (id)dictionaryWithJsonString:(id)arg1;
- (void)sort;
- (void)removeInteractivePopGestureRecognizer;
- (void)setInteractivePopGestureRecognizer;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didClick;
- (void)setRefreshView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

