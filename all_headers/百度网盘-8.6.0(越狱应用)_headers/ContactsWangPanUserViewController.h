//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, UIButton, UITableView, UIToolbar;

@interface ContactsWangPanUserViewController : BaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_userList;
    UIToolbar *_toolbarView;
    UIButton *_confirmButton;
    UITableView *_contactsTable;
    NSMutableDictionary *_seletedData;
}

@property(retain, nonatomic) NSMutableDictionary *seletedData; // @synthesize seletedData=_seletedData;
@property(retain, nonatomic) UITableView *contactsTable; // @synthesize contactsTable=_contactsTable;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIToolbar *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain, nonatomic) NSArray *userList; // @synthesize userList=_userList;
- (void).cxx_destruct;
- (void)handleGroupWith:(id)arg1;
- (void)handleDoubleChatWith:(id)arg1;
- (void)handleMessageNeedOpenBind;
- (void)handleCreateGroupNeedVcode:(id)arg1;
- (void)sendGroupMessageWithVcode:(id)arg1 input:(id)arg2;
- (void)setBtnEnable;
- (void)setupToolBar;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)okBtnClick:(id)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

