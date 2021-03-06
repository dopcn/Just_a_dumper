//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IQYDataLoadManagerDelegate-Protocol.h"
#import "PPBaseCardDataDelegate-Protocol.h"
#import "PPPlayerDispatcherV3Delegate-Protocol.h"
#import "QYPPTabBarDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IQYCard3URLManager, NSArray, NSMutableArray, NSString, NotesView, QYPPNavigationBar, QYPPTabBar, QYUPageDataV3, UICollectionView, UIView;

@interface PPTabCardViewController : UIViewController <IQYDataLoadManagerDelegate, QYPPTabBarDelegate, UICollectionViewDataSource, PPBaseCardDataDelegate, PPPlayerDispatcherV3Delegate, UICollectionViewDelegate>
{
    _Bool _directScroll;
    QYPPNavigationBar *_navbar;
    QYPPTabBar *_tabbar;
    NSArray *_tabs;
    UICollectionView *_collectionView;
    NotesView *_loadingView;
    IQYCard3URLManager *_card3URLManager;
    QYUPageDataV3 *_pageData;
    NSMutableArray *_cardViewControllers;
    UIView *_statusBarView;
    double _lastOffsetY;
}

@property(nonatomic) _Bool directScroll; // @synthesize directScroll=_directScroll;
@property(nonatomic) double lastOffsetY; // @synthesize lastOffsetY=_lastOffsetY;
@property(retain, nonatomic) UIView *statusBarView; // @synthesize statusBarView=_statusBarView;
@property(retain, nonatomic) NSMutableArray *cardViewControllers; // @synthesize cardViewControllers=_cardViewControllers;
@property(retain, nonatomic) QYUPageDataV3 *pageData; // @synthesize pageData=_pageData;
@property(retain, nonatomic) IQYCard3URLManager *card3URLManager; // @synthesize card3URLManager=_card3URLManager;
@property(retain, nonatomic) NotesView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
@property(retain, nonatomic) QYPPTabBar *tabbar; // @synthesize tabbar=_tabbar;
@property(retain, nonatomic) QYPPNavigationBar *navbar; // @synthesize navbar=_navbar;
- (void).cxx_destruct;
- (void)baseCardViewControllerDelayRefreshFailed:(id)arg1;
- (void)baseCardViewControllerDelayRefreshAndLoadMoreFinished:(id)arg1;
- (void)baseCardViewController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)baseCardViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)baseCardViewController:(id)arg1 scrollViewDidEndDragging:(id)arg2 willDecelerate:(_Bool)arg3;
- (void)__adjustNavigationBar:(id)arg1;
- (double)bottomHeight;
- (double)topHeight;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)cardViewControllerOfIndex:(long long)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)didSelectIndex:(long long)arg1;
- (void)willDeselectIndex:(long long)arg1;
- (void)tabBar:(id)arg1 didSelectBarItem:(id)arg2;
- (void)__scrollToContent:(_Bool)arg1;
- (void)__scrollView:(id)arg1 toFolded:(_Bool)arg2;
- (_Bool)__canScrollToFolded:(id)arg1;
- (_Bool)__isFolded;
- (void)tabBar:(id)arg1 willDeselectBarItem:(id)arg2;
- (void)__sendClickPingback:(id)arg1;
- (_Bool)__shouldDisplayTabbar;
- (void)__setupTabs:(id)arg1 index:(long long)arg2;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)handleBackAction;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithPageURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

