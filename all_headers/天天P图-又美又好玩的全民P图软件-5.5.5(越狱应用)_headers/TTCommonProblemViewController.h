//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSString;

@interface TTCommonProblemViewController : UITableViewController
{
    NSString *_buttonTitle;
    NSArray *_commonProblems;
    NSArray *_commonAnswers;
}

+ (id)getPreferencePath;
@property(retain, nonatomic) NSArray *commonAnswers; // @synthesize commonAnswers=_commonAnswers;
@property(retain, nonatomic) NSArray *commonProblems; // @synthesize commonProblems=_commonProblems;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
- (void).cxx_destruct;
- (double)getLineCount:(long long)arg1;
- (id)buttonImageFromColor:(id)arg1;
- (void)onBackButtonPressed:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_initNavigationBar;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

@end

