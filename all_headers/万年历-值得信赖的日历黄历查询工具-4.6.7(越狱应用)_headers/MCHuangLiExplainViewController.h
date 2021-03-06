//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MCAlmanac, NSArray, NSDictionary, NSLayoutConstraint, NSString, UICollectionView, UITableView;

@interface MCHuangLiExplainViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _lastSectionPaddingAdded;
    _Bool _showSideBar;
    MCAlmanac *_almanac;
    long long _toIndex;
    NSString *_date;
    NSString *_index;
    UITableView *_tableView;
    UICollectionView *_sideCollection;
    NSLayoutConstraint *_sideCollectionWidth;
    NSLayoutConstraint *_sideCollectionHeight;
    NSLayoutConstraint *_sideCollectionTrailing;
    NSDictionary *_allInfo;
    NSArray *_headerArray;
    NSArray *_headerShortArray;
    NSArray *_sideBtnImages;
    long long _previousIndex;
    long long _currentIndex;
    long long _toToIndex;
}

+ (id)getController;
@property(nonatomic) _Bool showSideBar; // @synthesize showSideBar=_showSideBar;
@property(nonatomic) long long toToIndex; // @synthesize toToIndex=_toToIndex;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) long long previousIndex; // @synthesize previousIndex=_previousIndex;
@property(retain, nonatomic) NSArray *sideBtnImages; // @synthesize sideBtnImages=_sideBtnImages;
@property(copy, nonatomic) NSArray *headerShortArray; // @synthesize headerShortArray=_headerShortArray;
@property(copy, nonatomic) NSArray *headerArray; // @synthesize headerArray=_headerArray;
@property(copy, nonatomic) NSDictionary *allInfo; // @synthesize allInfo=_allInfo;
@property(nonatomic) __weak NSLayoutConstraint *sideCollectionTrailing; // @synthesize sideCollectionTrailing=_sideCollectionTrailing;
@property(nonatomic) __weak NSLayoutConstraint *sideCollectionHeight; // @synthesize sideCollectionHeight=_sideCollectionHeight;
@property(nonatomic) __weak NSLayoutConstraint *sideCollectionWidth; // @synthesize sideCollectionWidth=_sideCollectionWidth;
@property(nonatomic) __weak UICollectionView *sideCollection; // @synthesize sideCollection=_sideCollection;
@property(nonatomic) _Bool lastSectionPaddingAdded; // @synthesize lastSectionPaddingAdded=_lastSectionPaddingAdded;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(nonatomic) long long toIndex; // @synthesize toIndex=_toIndex;
@property(retain, nonatomic) MCAlmanac *almanac; // @synthesize almanac=_almanac;
- (void).cxx_destruct;
- (id)i18nTextImage:(id)arg1;
- (id)translateHuangLiArray:(id)arg1;
- (void)resetShowupSideBar;
- (void)scroll2Section:(long long)arg1 animated:(_Bool)arg2;
- (void)scroll2Section:(long long)arg1;
- (void)reloadSideCollectionCellAtIndex:(long long)arg1;
- (void)hideSideBar;
- (void)showupSideBar;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)returnYArrayWithKey:(id)arg1;
- (void)initAllSubViewsAndData;
- (void)setupSideCollection;
- (void)rightBarButtonItemClick:(id)arg1;
- (void)leftBarButtonItemClick:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)marginSpace;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

