//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNThemeTableViewController.h"

#import "SNEmbededActivityIndicatorDelegate-Protocol.h"

@class SNEmbededActivityIndicator;

@interface SNTableViewController : SNThemeTableViewController <SNEmbededActivityIndicatorDelegate>
{
    SNEmbededActivityIndicator *_loadView;
}

- (void).cxx_destruct;
- (void)didTapRetry;
- (struct CGRect)rectForLoadingView;
- (void)showEmpty:(_Bool)arg1;
- (void)showError:(_Bool)arg1;
- (void)hideKeyboard;
- (void)showLoading:(_Bool)arg1;
- (id)defaultTitleForLoading;
- (void)dealloc;
- (void)loadView;

@end

