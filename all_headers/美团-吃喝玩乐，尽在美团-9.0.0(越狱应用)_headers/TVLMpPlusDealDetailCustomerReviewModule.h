//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModule.h"

@class TPKMpPlusDealDetailTitleItem, TPKMpPlusDealDetailViewModel, TVLCustomerReviewChildViewController, UITableViewCell;

@interface TVLMpPlusDealDetailCustomerReviewModule : GCBaseModule
{
    _Bool _isDisplay;
    TPKMpPlusDealDetailViewModel *_mpPlusViewModel;
    UITableViewCell *_singleCell;
    TPKMpPlusDealDetailTitleItem *_titleItem;
    TVLCustomerReviewChildViewController *_reviewChildController;
}

@property(nonatomic) _Bool isDisplay; // @synthesize isDisplay=_isDisplay;
@property(retain, nonatomic) TVLCustomerReviewChildViewController *reviewChildController; // @synthesize reviewChildController=_reviewChildController;
@property(retain, nonatomic) TPKMpPlusDealDetailTitleItem *titleItem; // @synthesize titleItem=_titleItem;
@property(retain, nonatomic) UITableViewCell *singleCell; // @synthesize singleCell=_singleCell;
@property(retain, nonatomic) TPKMpPlusDealDetailViewModel *mpPlusViewModel; // @synthesize mpPlusViewModel=_mpPlusViewModel;
- (void).cxx_destruct;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)setupUI;
- (_Bool)shouldShow;
- (void)setupModule;

@end

