//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YLToolBaseViewController.h"

@class UITableView;

@interface CalenderTypeSettingViewController : YLToolBaseViewController
{
    _Bool _selectFoli;
    UITableView *_mainTableView;
}

@property(nonatomic) _Bool selectFoli; // @synthesize selectFoli=_selectFoli;
@property(nonatomic) __weak UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
- (void).cxx_destruct;
- (void)willDismissView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

@end

