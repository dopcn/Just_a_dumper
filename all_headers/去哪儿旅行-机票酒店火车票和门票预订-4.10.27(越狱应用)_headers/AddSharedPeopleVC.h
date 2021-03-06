//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NaviBarVC.h"

#import "ABPeoplePickerNavigationControllerDelegate-Protocol.h"
#import "CNContactPickerDelegate-Protocol.h"
#import "SearchNetDealPtc-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class KeyboardController, NSMutableArray, NSString, OrderManagerParam, UITableView;

@interface AddSharedPeopleVC : NaviBarVC <CNContactPickerDelegate, UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate, ABPeoplePickerNavigationControllerDelegate, UITextFieldDelegate, SearchNetDealPtc>
{
    _Bool _isFromSharedList;
    UITableView *_tableViewInfo;
    NSMutableArray *_optShareInfos;
    long long _sharedCount;
    NSString *_sourceFrom;
    OrderManagerParam *_orderManagerParam;
    NSString *_addTips;
    KeyboardController *_keyboardController;
    NSMutableArray *_contactDetailsArray;
    NSString *_linkman;
    NSString *_mobile;
    long long _clickedRow;
}

@property(nonatomic) long long clickedRow; // @synthesize clickedRow=_clickedRow;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *linkman; // @synthesize linkman=_linkman;
@property(retain, nonatomic) NSMutableArray *contactDetailsArray; // @synthesize contactDetailsArray=_contactDetailsArray;
@property(retain, nonatomic) KeyboardController *keyboardController; // @synthesize keyboardController=_keyboardController;
@property(nonatomic) _Bool isFromSharedList; // @synthesize isFromSharedList=_isFromSharedList;
@property(retain, nonatomic) NSString *addTips; // @synthesize addTips=_addTips;
@property(retain, nonatomic) OrderManagerParam *orderManagerParam; // @synthesize orderManagerParam=_orderManagerParam;
@property(copy, nonatomic) NSString *sourceFrom; // @synthesize sourceFrom=_sourceFrom;
@property(nonatomic) long long sharedCount; // @synthesize sharedCount=_sharedCount;
@property(retain, nonatomic) NSMutableArray *optShareInfos; // @synthesize optShareInfos=_optShareInfos;
@property(retain, nonatomic) UITableView *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupTableViewCellContactDetailSubs:(id)arg1 inSize:(struct CGSize *)arg2 andBusinessParam:(id)arg3;
- (void)initTableViewCellContactDetailSubs:(id)arg1;
- (void)deleteBtnClick:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)setupNaviBarSubs:(id)arg1;
- (void)tableViewInfoSetHeaderAndFooter;
- (void)setupViewRootSubs:(id)arg1;
- (void)getSearch:(id)arg1 forResult:(id)arg2 forInfo:(id)arg3;
- (void)doConfirmShared:(id)arg1;
- (void)contactPhoneFinished:(id)arg1;
- (void)contactPhoneChanged:(id)arg1;
- (void)contactPhoneBegun:(id)arg1;
- (void)contactNameFinished:(id)arg1;
- (void)contactNameChanged:(id)arg1;
- (void)contactNameBegun:(id)arg1;
- (void)quickLoginStart;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)importInformationFromAddressBook:(id)arg1;
- (void)addContactPeople;
- (void)confirmTheShared;
- (void)addNewCheckinPerson:(id)arg1;
- (void)saveInputInformation:(id)arg1 isName:(_Bool)arg2;
- (void)scrollContentView:(id)arg1;
- (void)hideKeyboard;
- (void)goBack:(id)arg1;
- (unsigned long long)rowForTableViewCell:(id)arg1;
- (id)lookForTableViewCellByAction:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

