//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AHUIFramework/AHViewController.h>

#import "AHBaseServiceDelegate-Protocol.h"
#import "AHLoadingViewDelegate-Protocol.h"
#import "AHStencilViewControllerDelegate-Protocol.h"
#import "AHStencilViewControllerLayoutDataSource-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AHLoadingView, AHStencilViewController, AHUGArticleReviewView, AHUGNewCarsView, AHUGPushLandingService, NSArray, NSString, UITableView, UIView;

@interface UG_PushLandingVC : AHViewController <UITableViewDelegate, UITableViewDataSource, AHLoadingViewDelegate, AHStencilViewControllerDelegate, AHStencilViewControllerLayoutDataSource, AHBaseServiceDelegate, UIScrollViewDelegate>
{
    AHStencilViewController *_stencilViewController;
    AHLoadingView *_loadingView;
    NSArray *_dataArr;
    AHUGPushLandingService *_service;
    AHUGNewCarsView *_headerView;
    AHUGArticleReviewView *_footerView;
    UITableView *_ahTableView;
    UIView *_mainView;
}

@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) UITableView *ahTableView; // @synthesize ahTableView=_ahTableView;
@property(retain, nonatomic) AHUGArticleReviewView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) AHUGNewCarsView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) AHUGPushLandingService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) AHLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) AHStencilViewController *stencilViewController; // @synthesize stencilViewController=_stencilViewController;
- (void).cxx_destruct;
- (void)AHLoadingViewReloadClick:(id)arg1;
- (void)netServiceError:(long long)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3;
- (void)netServiceFinished:(long long)arg1 netServiceObj:(id)arg2;
- (void)dealloc;
- (void)backButtonPressInViewController:(id)arg1;
- (int)viewModeInViewContoller:(id)arg1;
- (id)clientViewInViewContoller:(id)arg1 clientViewSize:(struct CGSize)arg2 contentInset:(struct UIEdgeInsets)arg3;
- (id)rightExtensionInViewContoller:(id)arg1;
- (id)navigationMainViewForViewController:(id)arg1 mainViewWidh:(float)arg2;
- (int)backButtonTypeInViewController:(id)arg1;
- (_Bool)hasFooterBarInViewController:(id)arg1;
- (_Bool)hasNavigationBarInViewController:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)initTableView;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

