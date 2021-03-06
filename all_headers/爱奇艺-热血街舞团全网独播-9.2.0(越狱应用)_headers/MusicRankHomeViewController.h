//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCommonViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class CommonTabView, MusicRankCurrentViewController, MusicRankFansViewController, MusicRankHistoryViewController, NSString, UIScrollView;
@protocol musicRankDelegate;

@interface MusicRankHomeViewController : QYCommonViewController <UIScrollViewDelegate>
{
    MusicRankCurrentViewController *currentViewController;
    MusicRankHistoryViewController *historyViewController;
    MusicRankFansViewController *fansViewController;
    id <musicRankDelegate> _delegate;
    CommonTabView *_rankTabView;
    UIScrollView *_rankScrollView;
}

@property(retain, nonatomic) UIScrollView *rankScrollView; // @synthesize rankScrollView=_rankScrollView;
@property(retain, nonatomic) CommonTabView *rankTabView; // @synthesize rankTabView=_rankTabView;
@property(nonatomic) __weak id <musicRankDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)rankTabSelectIndex:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)setUpFansView;
- (void)setUpHistoryView;
- (void)setUpCurrentView;
- (void)setUpScrollView;
- (void)setUpRankTabView;
- (void)clean;
- (void)showInParentController:(id)arg1;
- (void)toBack;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

