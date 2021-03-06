//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCTableViewController.h"

#import "TBCPermissionDelegate-Protocol.h"

@class NSString, TBCPermissionManager;
@protocol TBCPrivatePermissionSettingDelegate;

@interface TBCPrivatePermissionSettingViewController : TBCTableViewController <TBCPermissionDelegate>
{
    int _settingViewType;
    id <TBCPrivatePermissionSettingDelegate> _delegate;
    long long _selectIndex;
    TBCPermissionManager *_permissionManager;
    long long _permission;
}

+ (void)pushWithNavigationController:(id)arg1 withTitle:(id)arg2 withType:(int)arg3 permission:(id)arg4 delegate:(id)arg5;
@property(nonatomic) long long permission; // @synthesize permission=_permission;
@property(nonatomic) TBCPermissionManager *permissionManager; // @synthesize permissionManager=_permissionManager;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(nonatomic) id <TBCPrivatePermissionSettingDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int settingViewType; // @synthesize settingViewType=_settingViewType;
- (void)operationFailed:(id)arg1;
- (void)operationIsCompleted;
- (id)getOperationName;
- (void)changePermission:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableDataSource;
- (void)createDataSource;
- (void)didReceiveMemoryWarning;
- (void)setupTableView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

