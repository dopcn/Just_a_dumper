//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBoxSharePersonBaseViewController.h"

#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UIImageView, UILabel, UITableView, UIView;

@interface MBoxShareContactViewController : MBoxSharePersonBaseViewController <UITableViewDataSource, UITableViewDelegate, MFMessageComposeViewControllerDelegate>
{
    UITableView *_contactsTable;
    UIView *_blankView;
    UIImageView *_failImageview;
    UILabel *_failLabel;
    UIButton *_settingButton;
    NSMutableArray *_listContent;
}

@property(retain, nonatomic) NSMutableArray *listContent; // @synthesize listContent=_listContent;
@property(retain, nonatomic) UIButton *settingButton; // @synthesize settingButton=_settingButton;
@property(retain, nonatomic) UILabel *failLabel; // @synthesize failLabel=_failLabel;
@property(retain, nonatomic) UIImageView *failImageview; // @synthesize failImageview=_failImageview;
@property(retain, nonatomic) UIView *blankView; // @synthesize blankView=_blankView;
@property(retain, nonatomic) UITableView *contactsTable; // @synthesize contactsTable=_contactsTable;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)loadRelationContacts;
- (void)setupData;
- (void)updateFailedView:(_Bool)arg1;
- (void)openAppSettings:(id)arg1;
- (void)setupBlankView;
- (void)zeroFooterView;
- (void)setupTableView;
- (void)setupNavItem;
- (void)checkAddressBookAuthorization;
- (void)showAlerForAuth;
- (void)setupView;
- (void)contactsCellRefefresh:(id)arg1;
- (void)handleFollowNeedVcode:(id)arg1;
- (void)mboxAddFollowVerify:(id)arg1;
- (id)addFollowCackBackWithUserModel:(id)arg1;
- (void)mboxContactsFollow:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)mboxContactsInvite:(id)arg1;
- (void)mboxContactsRefefresh:(id)arg1;
- (void)mboxUserRefefresh:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)didReceiveMemoryWarning;
- (void)addNotification;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

