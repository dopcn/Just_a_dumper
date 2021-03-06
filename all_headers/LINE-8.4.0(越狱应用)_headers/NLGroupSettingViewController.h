//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLSettingsBaseViewController.h"

@class NSArray, NSFetchedResultsController, NSString;

@interface NLGroupSettingViewController : NLSettingsBaseViewController
{
    NSFetchedResultsController *_groupFetchedResultsController;
    NSFetchedResultsController *_otoFetchedResultsController;
    NSArray *_settingSections;
}

@property(retain, nonatomic) NSArray *settingSections; // @synthesize settingSections=_settingSections;
@property(retain, nonatomic) NSFetchedResultsController *otoFetchedResultsController; // @synthesize otoFetchedResultsController=_otoFetchedResultsController;
@property(retain, nonatomic) NSFetchedResultsController *groupFetchedResultsController; // @synthesize groupFetchedResultsController=_groupFetchedResultsController;
- (void).cxx_destruct;
- (void)controllerDidChangeContent:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)titleForHeaderInSection:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)sectionType:(long long)arg1;
- (void)setupSections;
- (void)setupNavigationBar;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

