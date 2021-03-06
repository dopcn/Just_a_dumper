//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormViewController.h"

#import "CCBUNSuccessDelegate-Protocol.h"
#import "CJSheetDidSelect-Protocol.h"

@class CCBView, CCB_4_VM_ForCollection, NSString;

@interface CCB_4_VC_ForCollection : CCBFormViewController <CJSheetDidSelect, CCBUNSuccessDelegate>
{
    _Bool _isFirstLoad;
    CCB_4_VM_ForCollection *_ViewModel;
    CCBView *_NextView;
    CCBView *_enableView;
}

@property(retain, nonatomic) CCBView *enableView; // @synthesize enableView=_enableView;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(retain, nonatomic) CCBView *NextView; // @synthesize NextView=_NextView;
@property(retain, nonatomic) CCB_4_VM_ForCollection *ViewModel; // @synthesize ViewModel=_ViewModel;
- (void).cxx_destruct;
- (void)addAccount;
- (void)selectRowCell:(long long)arg1 withSelectObjc:(id)arg2;
- (void)CCBunSuccessComplete;
- (void)gotoSuccessView:(id)arg1;
- (void)ButtonClick;
- (void)formViewCellDidClickRightButton:(id)arg1;
- (void)selectPayAccount;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)CCB_addObserverToViewMode;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

