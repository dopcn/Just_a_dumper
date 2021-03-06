//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSMutableArray, NSString, TBPSHistoryErrorView, UILabel;

@interface TBPSHistoryViewController : UICollectionViewController <UIAlertViewDelegate>
{
    TBPSHistoryErrorView *_historyErrorView;
    UILabel *_tipTextLabel;
    NSMutableArray *_infoGroupArray;
}

@property(retain, nonatomic) NSMutableArray *infoGroupArray; // @synthesize infoGroupArray=_infoGroupArray;
@property(readonly, nonatomic) UILabel *tipTextLabel; // @synthesize tipTextLabel=_tipTextLabel;
@property(readonly, nonatomic) TBPSHistoryErrorView *historyErrorView; // @synthesize historyErrorView=_historyErrorView;
- (void).cxx_destruct;
- (void)showHistoryError:(_Bool)arg1;
- (void)updateInfoGroupArray;
- (void)reloadData;
- (void)deleteHistory:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setupFlowlayout;
- (void)setupDeleteItem;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

