//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormViewController.h"

@class CCB_7_VM_ImplementDetailsPage;

@interface CCB_7_VC_ImplementDetailsPage : CCBFormViewController
{
    CDUnknownBlockType _pushBlock;
    CCB_7_VM_ImplementDetailsPage *_viewModel;
}

+ (void)jumpToMe:(id)arg1;
@property(retain, nonatomic) CCB_7_VM_ImplementDetailsPage *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType pushBlock; // @synthesize pushBlock=_pushBlock;
- (void).cxx_destruct;
- (void)viewModel:(id)arg1 request:(id)arg2 didFinished:(id)arg3;
- (void)viewModel:(id)arg1 requestFailed:(id)arg2 error:(id)arg3;
- (void)jumpToNextPage;
- (void)formViewCell:(id)arg1 didClickButtonAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)CCB_addObserverToViewMode;
- (void)configTableView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

