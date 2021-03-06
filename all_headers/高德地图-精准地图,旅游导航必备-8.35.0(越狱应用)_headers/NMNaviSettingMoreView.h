//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMBaseView.h"

#import "NMNaviSettingItemCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class LTMNaviBar, NMBaseTableView, NMCustomeStatusView, NSArray, NSMutableDictionary, NSString, UIView;
@protocol NMNaviSetupDataSource, NMNaviSetupDelegate;

@interface NMNaviSettingMoreView : LTMBaseView <NMNaviSettingItemCellDelegate, UITableViewDelegate, UITableViewDataSource>
{
    NMBaseTableView *_tableView;
    NSMutableDictionary *_cellDict;
    UIView *_contentBackgroundView;
    NMCustomeStatusView *_statubarView;
    UIView *_alpBackGroundView;
    id <NMNaviSetupDelegate> _delegate;
    id <NMNaviSetupDataSource> _dataSource;
    NSArray *_tableItemArray;
    NSMutableDictionary *_changedSettings;
    LTMNaviBar *_naviBar;
    NSString *_bluetoothUUID;
}

@property(copy, nonatomic) NSString *bluetoothUUID; // @synthesize bluetoothUUID=_bluetoothUUID;
@property(retain, nonatomic) LTMNaviBar *naviBar; // @synthesize naviBar=_naviBar;
@property(retain, nonatomic) NSMutableDictionary *changedSettings; // @synthesize changedSettings=_changedSettings;
@property(retain, nonatomic) NSArray *tableItemArray; // @synthesize tableItemArray=_tableItemArray;
@property(nonatomic) __weak id <NMNaviSetupDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <NMNaviSetupDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)timerAction;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)cell:(id)arg1 didClickAccessoryAtIndex:(unsigned long long)arg2;
- (void)cell:(id)arg1 didClickItemAtIndex:(unsigned long long)arg2 currentSelected:(_Bool)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)switchRouteReport;
- (void)switchCameraReport;
- (void)goBackToSettingView:(id)arg1;
- (void)applyChangedSettings;
- (void)onClickFinishButton;
- (void)updateNaviBar:(id)arg1;
- (void)updateNMTheme;
- (void)updateToLandscapeSize;
- (void)updateToPortraitSize;
- (void)reloadNMData;
- (void)initUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

