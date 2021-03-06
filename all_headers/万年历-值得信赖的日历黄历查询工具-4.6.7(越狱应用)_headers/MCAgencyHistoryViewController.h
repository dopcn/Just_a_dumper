//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YLToolBaseViewController.h"

#import "MCAgencyRealEditViewControllerDelegate-Protocol.h"
#import "ReminderListAgencyCellDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSMutableArray, NSString, UILabel, UINavigationController, UIPopoverController, UITableView, UIView;

@interface MCAgencyHistoryViewController : YLToolBaseViewController <UITableViewDataSource, UITableViewDelegate, ReminderListAgencyCellDelegate, MCAgencyRealEditViewControllerDelegate, UIPopoverControllerDelegate>
{
    UITableView *_tableView;
    UILabel *_emptyLabel;
    UIView *_maskView;
    NSMutableArray *_allCompleteAgencys;
    NSMutableArray *_allCompleteDates;
    UINavigationController *_iPadNav;
    UIPopoverController *_pop;
    NSLayoutConstraint *_tableBottomConstraint;
}

+ (id)controller;
@property(nonatomic) __weak NSLayoutConstraint *tableBottomConstraint; // @synthesize tableBottomConstraint=_tableBottomConstraint;
@property(retain, nonatomic) UIPopoverController *pop; // @synthesize pop=_pop;
@property(retain, nonatomic) UINavigationController *iPadNav; // @synthesize iPadNav=_iPadNav;
@property(retain, nonatomic) NSMutableArray *allCompleteDates; // @synthesize allCompleteDates=_allCompleteDates;
@property(retain, nonatomic) NSMutableArray *allCompleteAgencys; // @synthesize allCompleteAgencys=_allCompleteAgencys;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) __weak UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)agencyRealEditViewController:(id)arg1 savelClick:(id)arg2;
- (void)agencyRealEditViewController:(id)arg1 cancelClick:(id)arg2;
- (void)onReminderListAgencyCellCancelCompleteAgency:(id)arg1 indexPath:(id)arg2;
- (void)onReminderListAgencyCellCompleteAgency:(id)arg1 indexPath:(id)arg2;
- (void)onDeleteButtonClickedInReminderListAgencyCell:(id)arg1;
- (void)onShareButtonClickedInReminderListAgencyCell:(id)arg1;
- (void)onEditButtonClickedInReminderListAgencyCell:(id)arg1;
- (void)showTXDetailVCWithAg:(id)arg1 withCell:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadAgencyNotifaction:(id)arg1;
- (void)initAllData;
- (void)initAllSubView;
- (void)initAllSubViewAndData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

