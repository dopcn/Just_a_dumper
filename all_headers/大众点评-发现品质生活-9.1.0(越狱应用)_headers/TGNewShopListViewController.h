//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModulesTableViewController.h"

@interface TGNewShopListViewController : NVBaseModulesTableViewController
{
    long long _categoryid;
}

@property(nonatomic) long long categoryid; // @synthesize categoryid=_categoryid;
- (void)updateUserActivityState:(id)arg1;
- (_Bool)shouldUseSearchableUserActivity;
- (id)refreshShopListForMainController:(id)arg1;
- (id)refreshShopListFail:(id)arg1;
- (id)refreshShopListSuccess:(id)arg1;
- (id)modules;
- (void)viewDidLoad;
- (_Bool)handleWithURLAction:(id)arg1;
- (_Bool)ga_isPageController;
- (id)ga_label;

@end

