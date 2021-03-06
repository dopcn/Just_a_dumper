//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGMediaThumbnailSectionControllerSelectionDelegate-Protocol.h"
#import "IGSavedMediaCollectionChangeCoverViewDelegate-Protocol.h"
#import "IGTextFieldDelegate-Protocol.h"

@class IGSaveCollectionTitleFieldValidator, IGSavedMediaCollection, IGSavedMediaCollectionChangeCoverView, IGSavedMediaGridSingleSelectionViewController, IGSelectableSavedMediaGridViewController, IGTextField, IGUserSession, NSArray, NSString;
@protocol IGSavedMediaCollectionCreatorDelegate;

@interface IGSavedMediaCollectionEditViewController : IGGroupedTableViewController <IGMediaThumbnailSectionControllerSelectionDelegate, IGSavedMediaCollectionChangeCoverViewDelegate, IGTextFieldDelegate>
{
    _Bool _isCollectionEmpty;
    _Bool _userHasSavedMedia;
    _Bool _requestInProgress;
    id <IGSavedMediaCollectionCreatorDelegate> _creatorDelegate;
    IGUserSession *_userSession;
    IGSavedMediaCollection *_collection;
    IGSavedMediaCollectionChangeCoverView *_changeCoverView;
    NSString *_pendingCoverMediaId;
    IGSaveCollectionTitleFieldValidator *_titleValidator;
    IGTextField *_collectionName;
    IGSelectableSavedMediaGridViewController *_selectionViewController;
    IGSavedMediaGridSingleSelectionViewController *_changeCoverViewController;
    NSArray *_sections;
}

@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) IGSavedMediaGridSingleSelectionViewController *changeCoverViewController; // @synthesize changeCoverViewController=_changeCoverViewController;
@property(retain, nonatomic) IGSelectableSavedMediaGridViewController *selectionViewController; // @synthesize selectionViewController=_selectionViewController;
@property(readonly, nonatomic) IGTextField *collectionName; // @synthesize collectionName=_collectionName;
@property(readonly, nonatomic) IGSaveCollectionTitleFieldValidator *titleValidator; // @synthesize titleValidator=_titleValidator;
@property(copy, nonatomic) NSString *pendingCoverMediaId; // @synthesize pendingCoverMediaId=_pendingCoverMediaId;
@property(readonly, nonatomic) IGSavedMediaCollectionChangeCoverView *changeCoverView; // @synthesize changeCoverView=_changeCoverView;
@property(nonatomic) _Bool requestInProgress; // @synthesize requestInProgress=_requestInProgress;
@property(nonatomic) _Bool userHasSavedMedia; // @synthesize userHasSavedMedia=_userHasSavedMedia;
@property(readonly, nonatomic) _Bool isCollectionEmpty; // @synthesize isCollectionEmpty=_isCollectionEmpty;
@property(readonly, nonatomic) IGSavedMediaCollection *collection; // @synthesize collection=_collection;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGSavedMediaCollectionCreatorDelegate> creatorDelegate; // @synthesize creatorDelegate=_creatorDelegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)showNetworkResponseErrorAndResetRightButton:(id)arg1;
- (void)deletePressed;
- (void)nextPressed;
- (void)doneCreatingPressed;
- (void)doneEditingPressed;
- (void)cancelPressed;
- (_Bool)isEditingExistingCollection;
- (_Bool)supportsChangingCoverMedia;
- (void)didSelectFeedItem:(id)arg1;
- (void)didSelectChangeCover;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)configureTableView;
- (void)setupCollectionNameTextField;
- (void)setupTableSections;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 collection:(id)arg2;
- (id)initForCreatingWithUserSession:(id)arg1;
- (id)initForEditingWithUserSession:(id)arg1 collection:(id)arg2 isCollectionEmpty:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

