//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseViewController.h"

#import "TBCScrollMenuViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, TBCVidSqrDiffLiveAggreScrollPage, TBCVidSqrDiffLiveAggreTabMenuView, UIView;

@interface TBCVidSqrDiffLiveAggreViewController : TBCBaseViewController <TBCScrollMenuViewDelegate, UIScrollViewDelegate>
{
    TBCVidSqrDiffLiveAggreTabMenuView *_scrollMenuView;
    TBCVidSqrDiffLiveAggreScrollPage *_scrollPage;
    unsigned long long _currentTagIndex;
    TBCBaseViewController *_selectViewController;
    TBCBaseViewController *_tempViewController;
    TBCBaseViewController *_hotestViewController;
    UIView *_tempHotestView;
    TBCBaseViewController *_latestViewController;
    UIView *_tempLatestView;
    NSString *_entryName;
    NSString *_entryId;
    NSString *_labelName;
    NSString *_bitmapRatio;
    double _entryTime;
    double _backgroundTime;
}

+ (void)load;
@property(nonatomic) double backgroundTime; // @synthesize backgroundTime=_backgroundTime;
@property(nonatomic) double entryTime; // @synthesize entryTime=_entryTime;
@property(copy, nonatomic) NSString *bitmapRatio; // @synthesize bitmapRatio=_bitmapRatio;
@property(copy, nonatomic) NSString *labelName; // @synthesize labelName=_labelName;
@property(copy, nonatomic) NSString *entryId; // @synthesize entryId=_entryId;
@property(copy, nonatomic) NSString *entryName; // @synthesize entryName=_entryName;
@property(retain, nonatomic) UIView *tempLatestView; // @synthesize tempLatestView=_tempLatestView;
@property(retain, nonatomic) TBCBaseViewController *latestViewController; // @synthesize latestViewController=_latestViewController;
@property(retain, nonatomic) UIView *tempHotestView; // @synthesize tempHotestView=_tempHotestView;
@property(retain, nonatomic) TBCBaseViewController *hotestViewController; // @synthesize hotestViewController=_hotestViewController;
@property(nonatomic) __weak TBCBaseViewController *tempViewController; // @synthesize tempViewController=_tempViewController;
@property(nonatomic) __weak TBCBaseViewController *selectViewController; // @synthesize selectViewController=_selectViewController;
@property(nonatomic) unsigned long long currentTagIndex; // @synthesize currentTagIndex=_currentTagIndex;
@property(retain, nonatomic) TBCVidSqrDiffLiveAggreScrollPage *scrollPage; // @synthesize scrollPage=_scrollPage;
@property(retain, nonatomic) TBCVidSqrDiffLiveAggreTabMenuView *scrollMenuView; // @synthesize scrollMenuView=_scrollMenuView;
- (void).cxx_destruct;
- (void)changeScrollToTop;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didSelectTabButton:(id)arg1;
- (void)didSelectTabMenuButton:(id)arg1;
- (void)showSubMenu:(_Bool)arg1 atIndex:(long long)arg2 withButton:(id)arg3;
- (void)didSelectTag:(long long)arg1 needLog:(_Bool)arg2;
- (void)resoureManagerDelegate;
- (void)selectLatestTab;
- (void)createLatestTabViewController;
- (void)selectHotestTab;
- (void)createHotestTabViewController;
- (void)didEnterCurrentViewController:(_Bool)arg1;
- (void)willEnterCurrentViewController:(_Bool)arg1;
- (void)didQuitCurrentViewController:(_Bool)arg1;
- (void)willQuitCurrentViewController:(_Bool)arg1;
- (void)createScrollPage;
- (void)createScrollMenu;
- (void)didReceiveMemoryWarning;
- (void)backgroundToForeground;
- (void)foregroundToBackground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setEntryName:(id)arg1 andLabelName:(id)arg2 andBitmapRatio:(id)arg3;
- (id)init;
- (void)goToDiffLiveAggregationByTag:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

