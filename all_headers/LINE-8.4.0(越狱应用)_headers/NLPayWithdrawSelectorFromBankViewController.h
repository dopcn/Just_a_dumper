//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLPayTableViewController.h"

@class NSArray, NSString;
@protocol NLPayFlowProtocol, NLPayWithdrawSelectorFromBankViewControllerDelegate;

@interface NLPayWithdrawSelectorFromBankViewController : NLPayTableViewController
{
    id <NLPayWithdrawSelectorFromBankViewControllerDelegate> _delegate;
    NSArray *_banks;
    NSArray *_staticMenus;
    id <NLPayFlowProtocol> _childFlow;
    double _cellHeight;
}

+ (id)customViewID;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) id <NLPayFlowProtocol> childFlow; // @synthesize childFlow=_childFlow;
@property(retain, nonatomic) NSArray *staticMenus; // @synthesize staticMenus=_staticMenus;
@property(retain, nonatomic) NSArray *banks; // @synthesize banks=_banks;
@property(nonatomic) __weak id <NLPayWithdrawSelectorFromBankViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showHideEditButton;
- (void)showDeleteBankConfirmWithIndexPath:(id)arg1;
- (void)reloadWithdrawBanks;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

