//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HLBaseViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class HLAchieveListViewModel, HighLadderErrorView, HighLadderIndexViewModel, NSString, UICollectionView, UICollectionViewFlowLayout, UILabel, ZDGameUserInfo;

@interface HLAchieveListViewController : HLBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    HighLadderIndexViewModel *_HLIndexViewModel;
    ZDGameUserInfo *_preloadUserinfo;
    HLAchieveListViewModel *_viewModel;
    long long _cid;
    CDUnknownBlockType _getRewardBlock;
    long long _unreadCount;
    UICollectionViewFlowLayout *_flowLayout;
    UICollectionView *_achieveColView;
    UILabel *_noDataLabel;
    HighLadderErrorView *_errorView;
}

@property(retain, nonatomic) HighLadderErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UILabel *noDataLabel; // @synthesize noDataLabel=_noDataLabel;
@property(nonatomic) __weak UICollectionView *achieveColView; // @synthesize achieveColView=_achieveColView;
@property(nonatomic) __weak UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(copy, nonatomic) CDUnknownBlockType getRewardBlock; // @synthesize getRewardBlock=_getRewardBlock;
@property(nonatomic) long long cid; // @synthesize cid=_cid;
@property(retain, nonatomic) HLAchieveListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) ZDGameUserInfo *preloadUserinfo; // @synthesize preloadUserinfo=_preloadUserinfo;
@property(nonatomic) __weak HighLadderIndexViewModel *HLIndexViewModel; // @synthesize HLIndexViewModel=_HLIndexViewModel;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)addErrorView;
- (void)addNoDataLabel;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setUpViewModel;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

