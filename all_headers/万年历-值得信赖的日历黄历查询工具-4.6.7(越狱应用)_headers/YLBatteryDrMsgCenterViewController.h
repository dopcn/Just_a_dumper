//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YLToolBaseViewController.h"

#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WebViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, UIActivityIndicatorView, UIImageView, UILabel, UITableView, UIView, UIViewController;

@interface YLBatteryDrMsgCenterViewController : YLToolBaseViewController <UITableViewDataSource, UITableViewDelegate, SKStoreProductViewControllerDelegate, WebViewControllerDelegate>
{
    UITableView *_tableView;
    NSMutableArray *_dataSource;
    UIView *_mLoadingWaitView;
    UILabel *_mLoadingStatusLabel;
    UIImageView *_mNoNetworkImageView;
    UIActivityIndicatorView *_mLoadingActivityIndicator;
    UIViewController *_rootViewController;
}

@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)webViewControllerRequestOpenStoreAction:(id)arg1;
- (void)webViewControllerDidFinish:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadDataFailedWithMessage:(id)arg1;
- (void)removeLoadingMaskView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)rightBarButtonItemClick:(id)arg1;
- (void)leftBarButtonItemClick:(id)arg1;
- (void)addSubviews;
- (id)initWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

