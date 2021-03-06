//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UITableView, VSAfterSaleViewModel, VSTableDelegate;

@interface VSAfterSaleDetailViewController : UIViewController
{
    VSAfterSaleViewModel *_viewModel;
    UITableView *_tableView;
    VSTableDelegate *_tableViewDelegate;
}

@property(retain, nonatomic) VSTableDelegate *tableViewDelegate; // @synthesize tableViewDelegate=_tableViewDelegate;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) VSAfterSaleViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)addObserver;
- (void)loadData;
- (void)setUpUI;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)navigateBack;
- (id)notificationName;
- (id)initWithViewModel:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

