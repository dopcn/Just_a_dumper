//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormViewController.h"

#import "CCBFormViewCellDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class CCBSwitchFormItem, CCB_13_VM_SecurityTouchIDManager, NSString;

@interface CCB_13_VC_SecurityTouchIDManager : CCBFormViewController <CCBFormViewCellDelegate, UIAlertViewDelegate>
{
    CCBSwitchFormItem *clickSwitchItem;
    _Bool isShowAlert;
    CCB_13_VM_SecurityTouchIDManager *_touchIDManagerViewModel;
}

+ (void)jumpToMe:(id)arg1;
@property(retain, nonatomic) CCB_13_VM_SecurityTouchIDManager *touchIDManagerViewModel; // @synthesize touchIDManagerViewModel=_touchIDManagerViewModel;
- (void).cxx_destruct;
- (void)formViewCellValueDidChanged:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

