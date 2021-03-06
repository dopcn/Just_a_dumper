//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FAViewController.h"

#import "FARankingListViewDelegate-Protocol.h"
#import "FARankingManagerObserver-Protocol.h"

@class FARankingListView, NSString;

@interface FAMobileRankingViewController : FAViewController <FARankingListViewDelegate, FARankingManagerObserver>
{
    FARankingListView *_currentView;
}

@property(retain, nonatomic) FARankingListView *currentView; // @synthesize currentView=_currentView;
- (void).cxx_destruct;
- (id)getDataForCellWithType:(unsigned long long)arg1;
- (void)didRankItemSelectType:(unsigned long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)startRefershData;
- (void)didGetMobileChartFailWithError:(id)arg1;
- (void)didGetMobileChartSuccess;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

