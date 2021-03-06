//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDViewController.h"

#import "DiscussHelperMemberDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MBProgressHUD, MDDiscussProfileHelper, MDNormalButtonItem, MDReturnButtonItem, NSMutableArray, NSString, UIButton, UITableView;

@interface DiscussMembersViewController : MDViewController <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, DiscussHelperMemberDelegate>
{
    UITableView *table;
    UIButton *editButton;
    MDReturnButtonItem *returnItem;
    MDNormalButtonItem *sortItem;
    MDNormalButtonItem *completeItem;
    MDDiscussProfileHelper *discussHelper;
    int removeIndex;
    MBProgressHUD *hud;
    NSString *discussOwnerMomoid;
    NSMutableArray *membersArray;
    int sortType;
    _Bool _isFromMutilChatSetting;
    MDNormalButtonItem *_cancelItem;
}

@property(retain, nonatomic) MDNormalButtonItem *cancelItem; // @synthesize cancelItem=_cancelItem;
@property(nonatomic) _Bool isFromMutilChatSetting; // @synthesize isFromMutilChatSetting=_isFromMutilChatSetting;
@property(retain, nonatomic) NSMutableArray *membersArray; // @synthesize membersArray;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton;
@property(copy, nonatomic) NSString *discussOwnerMomoid; // @synthesize discussOwnerMomoid;
@property(retain, nonatomic) UITableView *table; // @synthesize table;
@property(retain, nonatomic) MDNormalButtonItem *sortItem; // @synthesize sortItem;
@property(retain, nonatomic) MDNormalButtonItem *completeItem; // @synthesize completeItem;
@property(retain, nonatomic) MDReturnButtonItem *returnItem; // @synthesize returnItem;
- (void)discussHelper:(id)arg1 removeMember:(int)arg2 errorCode:(unsigned long long)arg3 errorMsg:(id)arg4;
- (void)discussHelper:(id)arg1 fetchMembers:(int)arg2 errorCode:(unsigned long long)arg3 errorMsg:(id)arg4;
- (void)addNotifications;
- (void)hanleRemoveActionSheet:(id)arg1 AtIndex:(long long)arg2;
- (void)setDataSourceFromGroupMember;
- (void)hanleSortActionSheet:(id)arg1 AtIndex:(long long)arg2;
- (void)removeHud;
- (void)showHud;
- (void)changeArray:(id)arg1 orderWithKey:(id)arg2 ascending:(_Bool)arg3 moveInvisibleLast:(_Bool)arg4;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)sortItemClicked:(id)arg1;
- (void)completeItemClicked:(id)arg1;
- (void)cancelItemClicked:(id)arg1;
- (void)editButtonClicked:(id)arg1;
- (void)returnItemClicked:(id)arg1;
- (void)setupNavBar;
- (void)setNavbarTitle;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithDiscussId:(id)arg1;
- (id)initWithDiscussHelper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

