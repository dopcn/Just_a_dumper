//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLViewController.h"

@class MessageViewController, NLToolbar, NSArray, NSString, UITableView;

@interface RoomMembersViewController : NLViewController
{
    _Bool shouldOpenInviteView;
    _Bool _showInviteButton;
    _Bool _exceptMyself;
    int _toType;
    NSArray *_members;
    MessageViewController *_messageViewController;
    UITableView *_tableView;
    NLToolbar *_bottomConsoleView;
}

@property(retain, nonatomic) NLToolbar *bottomConsoleView; // @synthesize bottomConsoleView=_bottomConsoleView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool exceptMyself; // @synthesize exceptMyself=_exceptMyself;
@property(nonatomic) _Bool showInviteButton; // @synthesize showInviteButton=_showInviteButton;
@property(nonatomic) int toType; // @synthesize toType=_toType;
@property(nonatomic) __weak MessageViewController *messageViewController; // @synthesize messageViewController=_messageViewController;
@property(retain, nonatomic) NSArray *members; // @synthesize members=_members;
- (void).cxx_destruct;
- (void)inviteAction:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)closeViewController;
- (void)showUserPopupWithDataObject:(id)arg1;
- (void)showDetailPopupForMyProfile;
- (long long)memberCount;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupInviteButton;
- (void)setupTableView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

