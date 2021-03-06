//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXUIViewController.h"

#import "ContactPickerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MBProgressHUD, NSDictionary, NSMutableArray, NSString, UITableView;

@interface YXLiveSpeakerSettingViewController : YXUIViewController <UITableViewDataSource, UITableViewDelegate, ContactPickerDelegate>
{
    NSString *_teamID;
    NSMutableArray *_dataList;
    NSDictionary *_teamMembersDic;
    MBProgressHUD *_hud;
    NSMutableArray *_tempDataList;
    UITableView *_tableView;
}

@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)hideProgress;
- (void)showProgress;
- (void)modifyHosterWithInfo:(id)arg1 isFromOther:(_Bool)arg2;
- (void)modifyHosterAskNotif:(id)arg1;
- (void)modifyHosterAskNotifFromOther:(id)arg1;
- (void)contactPickerControllerDidCancel:(id)arg1;
- (void)picker:(id)arg1 didSelectedUsers:(id)arg2;
- (id)getTeamPickerData;
- (id)getExcludeUserArray;
- (void)addSpeakerButtonClick:(id)arg1;
- (void)removeButtonClick:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)initSubViews;
- (void)dealloc;
- (void)viewDidLoad;
- (_Bool)shouldShowGrayMask;
- (void)initDataList;
- (id)initWithTeamID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

