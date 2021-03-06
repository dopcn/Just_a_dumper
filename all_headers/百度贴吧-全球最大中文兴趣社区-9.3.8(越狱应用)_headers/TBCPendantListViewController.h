//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCSlideBackViewController.h"

#import "TBCThemeRecommendViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSMutableArray, NSString, TBCPendantModel, TBCThemeRecommendView, UICollectionView;

@interface TBCPendantListViewController : TBCSlideBackViewController <UICollectionViewDataSource, UICollectionViewDelegate, TBCThemeRecommendViewDelegate>
{
    unsigned long long _type;
    TBCThemeRecommendView *_recommendView;
    UICollectionView *_pendantCollectionView;
    TBCPendantModel *_pendantModel;
    NSMutableArray *_titleArray;
    NSMutableArray *_categoryArray;
    NSString *_currentPendantID;
    double _itemWidth;
    double _interItemSpacing;
}

+ (void)pushPendantListViewController:(id)arg1 title:(id)arg2 type:(unsigned long long)arg3 animated:(_Bool)arg4;
+ (void)load;
@property(nonatomic) double interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(copy, nonatomic) NSString *currentPendantID; // @synthesize currentPendantID=_currentPendantID;
@property(retain, nonatomic) NSMutableArray *categoryArray; // @synthesize categoryArray=_categoryArray;
@property(retain, nonatomic) NSMutableArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) TBCPendantModel *pendantModel; // @synthesize pendantModel=_pendantModel;
@property(retain, nonatomic) UICollectionView *pendantCollectionView; // @synthesize pendantCollectionView=_pendantCollectionView;
@property(retain, nonatomic) TBCThemeRecommendView *recommendView; // @synthesize recommendView=_recommendView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)handleHintButtonClicked;
- (id)hintButtonTitleText;
- (id)hintTitleText;
- (id)emotionPromptImage;
- (unsigned long long)emotionPromptStyle;
- (void)tbcThemeRecommendViewDidClick:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)showMemberMessage:(id)arg1 buttonText:(id)arg2;
- (void)showSubviews:(_Bool)arg1;
- (void)requestDataFail;
- (void)requestDataSuccess;
- (void)requestPendantChange;
- (void)requestPendantList;
- (_Bool)networkHasProblem;
- (void)setupModel;
- (void)setupSubviews;
- (void)setupConfig;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

