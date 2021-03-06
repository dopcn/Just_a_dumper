//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CustomerActivityIndicatorView, NSArray, NSMutableArray, NSString, SearchHotRecomReq, SearchHotRecommendGroups, UITableView;
@protocol SearchHotRecommendViewDelegate;

@interface SearchHotRecommendView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    int currentTag;
    UITableView *mHotRecommendTBview;
    NSArray *mDataArray;
    UIView *separateLine;
    CustomerActivityIndicatorView *mIndicatoryView;
    NSArray *mGuessYouLikeList;
    NSMutableArray *mBtnArray;
    id <SearchHotRecommendViewDelegate> delegate;
    SearchHotRecomReq *searchHotRecomReq;
    SearchHotRecommendGroups *mHotRecommendGroups;
}

@property(retain, nonatomic) SearchHotRecommendGroups *mHotRecommendGroups; // @synthesize mHotRecommendGroups;
@property(retain, nonatomic) SearchHotRecomReq *searchHotRecomReq; // @synthesize searchHotRecomReq;
@property(nonatomic) id <SearchHotRecommendViewDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSMutableArray *mBtnArray; // @synthesize mBtnArray;
@property(retain, nonatomic) NSArray *mGuessYouLikeList; // @synthesize mGuessYouLikeList;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)changeBtnState:(int)arg1;
- (void)selectorTypeAction:(id)arg1;
- (void)dealloc;
- (void)SHRConnectionDidFail;
- (void)SHRConnectionDidFinish:(id)arg1;
- (void)requestSearchHotRecommendData;
- (void)updateHotRecommendData;
- (void)updateViewWithRequest;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

