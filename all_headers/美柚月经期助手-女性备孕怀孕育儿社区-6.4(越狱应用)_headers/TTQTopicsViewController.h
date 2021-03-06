//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQTableViewController.h"

@class TTQActionTopDropMenu, TTQForumHeaderView, TTQTopicsViewModel;
@protocol IMYITableViewAdManager;

@interface TTQTopicsViewController : TTQTableViewController
{
    _Bool _loadMore;
    TTQTopicsViewModel *_viewModel;
    TTQActionTopDropMenu *_topDropMenu;
    TTQForumHeaderView *_headerView;
    id <IMYITableViewAdManager> _adManager;
}

@property(nonatomic) _Bool loadMore; // @synthesize loadMore=_loadMore;
@property(retain, nonatomic) id <IMYITableViewAdManager> adManager; // @synthesize adManager=_adManager;
@property(retain, nonatomic) TTQForumHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) TTQActionTopDropMenu *topDropMenu; // @synthesize topDropMenu=_topDropMenu;
@property(retain, nonatomic) TTQTopicsViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)goLoginWithText:(id)arg1;
- (void)updateCaptionSuperView;
- (void)finishedRequest:(id)arg1;
- (void)joinForum;
- (void)setupTopRightButton;
- (void)setupSegment;
- (long long)segmentIndexWithFilter:(long long)arg1;
- (long long)filterWithSegmentIndex:(long long)arg1;
- (void)setupTableHeader;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)presetTableView:(id)arg1 cell:(id)arg2 model:(id)arg3 indexPath:(id)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableViewStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initADManager;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)bindViewModel;
- (id)ga_appendParams;

@end

