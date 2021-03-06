//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSSecondLevelViewController.h"

#import "KSGrammarBookPageViewControllerDelegate-Protocol.h"
#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"

@class KSBookDetailViewModel, KSGrammarBookCatalogueCellSubModel, NSMutableArray, NSString, UIPageViewController, UIView;

@interface KSGrammarBookDetailLinkTextViewController : KSSecondLevelViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource, KSGrammarBookPageViewControllerDelegate>
{
    UIView *_contentView;
    UIPageViewController *_pageViewController;
    KSBookDetailViewModel *_viewModel;
    KSGrammarBookCatalogueCellSubModel *_subModel;
    long long _currentPage;
    long long _totalPage;
    NSMutableArray *_catalogueArray;
    long long _lastAviliableBlock;
}

@property(nonatomic) long long lastAviliableBlock; // @synthesize lastAviliableBlock=_lastAviliableBlock;
@property(retain, nonatomic) NSMutableArray *catalogueArray; // @synthesize catalogueArray=_catalogueArray;
@property(nonatomic) long long totalPage; // @synthesize totalPage=_totalPage;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) KSGrammarBookCatalogueCellSubModel *subModel; // @synthesize subModel=_subModel;
@property(retain, nonatomic) KSBookDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)configureTheme_Normal;
- (void)configureTheme_Night;
- (void)novelViewController:(id)arg1 selecteWordHelper:(id)arg2 selectedWord:(id)arg3;
- (void)novelViewController:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)novelViewController:(id)arg1 setAssistantViewHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)onLinkTextClicked:(id)arg1;
- (void)handlePageWithDirector:(long long)arg1 reloadViewModel:(_Bool)arg2 animated:(_Bool)arg3;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (long long)pageViewController:(id)arg1 spineLocationForInterfaceOrientation:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setTheme;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

