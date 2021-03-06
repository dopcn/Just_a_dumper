//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseUIViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class MBProgressHUD, NSMutableArray, NSString, SCItemFindBusiness, UICollectionView;

@interface SCIemFindDetailCategoryViewController : SCBaseUIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSString *_titleName;
    NSString *_ID;
    NSString *_fromWhere;
    NSString *_pageFlag;
    unsigned long long _type;
    SCItemFindBusiness *_findBusiness;
    MBProgressHUD *_hudView;
    NSMutableArray *_itemArray;
    UICollectionView *_detailcategoryCollectionView;
}

@property(retain, nonatomic) UICollectionView *detailcategoryCollectionView; // @synthesize detailcategoryCollectionView=_detailcategoryCollectionView;
@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
@property(retain, nonatomic) MBProgressHUD *hudView; // @synthesize hudView=_hudView;
@property(retain, nonatomic) SCItemFindBusiness *findBusiness; // @synthesize findBusiness=_findBusiness;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *pageFlag; // @synthesize pageFlag=_pageFlag;
@property(copy, nonatomic) NSString *fromWhere; // @synthesize fromWhere=_fromWhere;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(retain, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)createCollectionView;
- (void)reloadDetailDataSource;
- (void)rightBarButtonItemSlot;
- (id)rightBarButtonItem;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

