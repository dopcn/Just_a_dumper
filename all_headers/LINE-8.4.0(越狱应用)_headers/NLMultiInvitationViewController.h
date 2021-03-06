//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLViewController.h"

#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "NLMultiInvitationCellDelegate-Protocol.h"

@class CNContactStore, DEPRECATED_UISearchDisplayController, NLSearchBar, NLToolbar, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UIButton, UILabel, UITableView, UIView;

@interface NLMultiInvitationViewController : NLViewController <MFMessageComposeViewControllerDelegate, NLMultiInvitationCellDelegate>
{
    UITableView *tableView_;
    NSMutableArray *filteredExpandContent_;
    NSString *savedSearchTerm_;
    _Bool searchWasActive_;
    _Bool isShowingAuthorizationAlert_;
    _Bool _isExpandingRecords;
    _Bool shouldRestart_;
    long long currentIndex_;
    NSTimer *timer_;
    NSMutableDictionary *selectedPersons_;
    _Bool isSMSEnabled;
    _Bool isEmailEnabled;
    NLToolbar *bottomConsoleView_;
    UIButton *inviteButton_;
    UILabel *countLabel_;
    UIButton *cancelButton_;
    UIView *tableFooterView;
    DEPRECATED_UISearchDisplayController *searchDisplayController;
    _Bool addressBookIsChanged_;
    NSArray *personRecords_;
    NSMutableArray *personExpandRecords_;
    unsigned long long numContacts_;
    _Bool _isMultiSelectionEnabled;
    int _method;
    CDUnknownBlockType _pickerCallback;
    long long _maxSelectionCount;
    NLSearchBar *_searchBar;
    CNContactStore *_contactStore;
}

@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) NLSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) long long maxSelectionCount; // @synthesize maxSelectionCount=_maxSelectionCount;
@property(copy, nonatomic) CDUnknownBlockType pickerCallback; // @synthesize pickerCallback=_pickerCallback;
@property(nonatomic) int method; // @synthesize method=_method;
@property(nonatomic) _Bool isMultiSelectionEnabled; // @synthesize isMultiSelectionEnabled=_isMultiSelectionEnabled;
- (void).cxx_destruct;
- (void)onContactStoreDidChange;
- (_Bool)isAddressBookChanged;
- (void)updateBottomConsoleView;
- (id)bottomConsoleView;
- (void)onCancel:(id)arg1;
- (void)onContactsPickup:(id)arg1;
- (void)sendSMS:(id)arg1;
- (void)onSMSInvite:(id)arg1;
- (void)multiInvitationCellInviteButtonTapped:(id)arg1;
- (void)multiInvitationCellTapped:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)selectDictionaryKeyForInfo:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)personInfoAtIndex:(unsigned long long)arg1 withTableView:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)searchBarIsActive:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (long long)preferredStatusBarStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)releasePersonRecords;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateMultiSelection:(_Bool)arg1;
- (void)prepareSearchUI;
- (_Bool)isLineUser:(id)arg1;
- (id)nameForPerson:(id)arg1;
- (id)emailForPerson:(id)arg1;
- (id)phoneNumberForPerson:(id)arg1;
- (unsigned long long)numberOfPersons;
- (void)reloadPersonTable;
- (void)createDetailedRecords:(id)arg1;
- (void)startProcessingTimer;
- (void)loadPersons;
- (void)stopIndicator;
- (void)startIndicator;
- (void)closeForNoPermission;
- (void)close;
- (void)markAddressBookDirty;
- (_Bool)isPickerMode;
- (_Bool)needShowBottomView;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithMethod:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

