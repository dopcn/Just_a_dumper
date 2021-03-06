//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MLBaseTableViewController.h"

@class CAGradientLayer, KnowledgeUniverseViewModel, MLFMBar;

@interface MLMyKnowledgeUniverseViewController : MLBaseTableViewController
{
    MLFMBar *_FMBar;
    CAGradientLayer *_gradientLayer;
    double _topMargin;
    double _curTime;
    _Bool _hasFMCatch;
    KnowledgeUniverseViewModel *_viewModel;
}

@property(nonatomic) _Bool hasFMCatch; // @synthesize hasFMCatch=_hasFMCatch;
@property(retain, nonatomic) KnowledgeUniverseViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addCellAction;
- (void)loadMoreData:(id)arg1;
- (void)reloadDataSource;
- (void)loadTableViewWithData:(id)arg1;
- (void)setupMyCourseListAndUpgradSwitch;
- (void)stopLoadingWithError:(id)arg1;
- (void)startLoading;
- (void)requestHomeData;
- (void)dataRequest;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)baseConfig;
- (void)addSubView;
- (void)viewDidLoad;
- (id)init;

@end

