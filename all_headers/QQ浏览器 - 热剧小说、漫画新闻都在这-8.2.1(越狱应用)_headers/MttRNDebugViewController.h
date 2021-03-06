//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UISettingBaseController.h"

#import "MttActionSheetDelegate-Protocol.h"
#import "MttAlertPasswordViewDelegate-Protocol.h"
#import "MttAlertViewDelegate-Protocol.h"

@class MttAlertPasswordAlert, NSArray, NSString;

@interface MttRNDebugViewController : UISettingBaseController <MttAlertViewDelegate, MttAlertPasswordViewDelegate, MttActionSheetDelegate>
{
    MttAlertPasswordAlert *_pullAlert;
    NSArray *_settingGroup;
}

@property(retain, nonatomic) NSArray *settingGroup; // @synthesize settingGroup=_settingGroup;
@property(retain, nonatomic) MttAlertPasswordAlert *pullAlert; // @synthesize pullAlert=_pullAlert;
- (void).cxx_destruct;
- (void)mttActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)switchValueChanged:(id)arg1;
- (void)mttAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)mttAlertView:(id)arg1 passwordFieldShouldReturn:(id)arg2;
- (void)pullFeedsWithTabId:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)initSettingData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

