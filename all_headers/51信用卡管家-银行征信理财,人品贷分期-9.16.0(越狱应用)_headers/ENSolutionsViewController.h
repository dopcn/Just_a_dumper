//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ENBaseViewController.h"

@class ENNetworkConnectAlertView, ENSolutionsTableView, UIButton;

@interface ENSolutionsViewController : ENBaseViewController
{
    UIButton *_backButton;
    ENNetworkConnectAlertView *_alertView;
    ENSolutionsTableView *_solutionsTableView;
}

@property(retain, nonatomic) ENSolutionsTableView *solutionsTableView; // @synthesize solutionsTableView=_solutionsTableView;
@property(retain, nonatomic) ENNetworkConnectAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (void)back:(id)arg1;
- (void)viewDidLoad;

@end

