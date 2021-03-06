//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QzoneBaseTableViewController.h"

#import "QUIAlertViewDelegate-Protocol.h"
#import "QZWidgetManagerDelegate-Protocol.h"

@class NSString, QzoneCustomListSwitchManager;

@interface QzoneCustomSwitchSettingViewController : QzoneBaseTableViewController <QUIAlertViewDelegate, QZWidgetManagerDelegate>
{
    QzoneCustomListSwitchManager *_switchManager;
}

@property(retain, nonatomic) QzoneCustomListSwitchManager *switchManager; // @synthesize switchManager=_switchManager;
- (void).cxx_destruct;
- (void)didWidgetInfoUpdated:(int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)tipAlertUnavailableNetwork;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onSwitch:(id)arg1;
- (id)thumbUrlFor:(long long)arg1;
- (id)descFor:(long long)arg1;
- (_Bool)isOpenFor:(long long)arg1;
- (id)cellLabelFor:(long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)settingChanged:(id)arg1;
- (void)reloadTableViewDataSource;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

