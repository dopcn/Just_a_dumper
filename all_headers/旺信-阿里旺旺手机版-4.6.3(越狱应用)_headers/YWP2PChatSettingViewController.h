//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UITableView, UITableViewCell, YWIMKit, YWP2PConversation;

@interface YWP2PChatSettingViewController : UIViewController <UIActionSheetDelegate, UITableViewDelegate, UITableViewDataSource>
{
    unsigned long long _headType;
    YWP2PConversation *_conversation;
    YWIMKit *_kitRef;
    CDUnknownBlockType _didPressAddBlock;
    NSString *_pageName;
    UITableView *_tableView;
    UITableViewCell *_avatarCell;
    UITableViewCell *_markConversationOnTopCell;
    UITableViewCell *_messagePushCell;
    UITableViewCell *_clearMessagesCell;
    CDUnknownBlockType _cellsForTableView;
    CDUnknownBlockType _tableFooterViewBlock;
    CDUnknownBlockType _didSelectCustomRowAtIndexPath;
    CDUnknownBlockType _refreshCellBlock;
    CDUnknownBlockType _didPressClearMessageBlock;
    NSArray *_staticSections;
    NSMutableArray *_heightForCells;
}

@property(retain, nonatomic) NSMutableArray *heightForCells; // @synthesize heightForCells=_heightForCells;
@property(retain, nonatomic) NSArray *staticSections; // @synthesize staticSections=_staticSections;
@property(copy, nonatomic) CDUnknownBlockType didPressClearMessageBlock; // @synthesize didPressClearMessageBlock=_didPressClearMessageBlock;
@property(copy, nonatomic) CDUnknownBlockType refreshCellBlock; // @synthesize refreshCellBlock=_refreshCellBlock;
@property(copy, nonatomic) CDUnknownBlockType didSelectCustomRowAtIndexPath; // @synthesize didSelectCustomRowAtIndexPath=_didSelectCustomRowAtIndexPath;
@property(copy, nonatomic) CDUnknownBlockType tableFooterViewBlock; // @synthesize tableFooterViewBlock=_tableFooterViewBlock;
@property(copy, nonatomic) CDUnknownBlockType cellsForTableView; // @synthesize cellsForTableView=_cellsForTableView;
@property(retain, nonatomic) UITableViewCell *clearMessagesCell; // @synthesize clearMessagesCell=_clearMessagesCell;
@property(retain, nonatomic) UITableViewCell *messagePushCell; // @synthesize messagePushCell=_messagePushCell;
@property(retain, nonatomic) UITableViewCell *markConversationOnTopCell; // @synthesize markConversationOnTopCell=_markConversationOnTopCell;
@property(retain, nonatomic) UITableViewCell *avatarCell; // @synthesize avatarCell=_avatarCell;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) CDUnknownBlockType didPressAddBlock; // @synthesize didPressAddBlock=_didPressAddBlock;
@property(readonly, nonatomic) __weak YWIMKit *kitRef; // @synthesize kitRef=_kitRef;
@property(retain, nonatomic) YWP2PConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) unsigned long long headType; // @synthesize headType=_headType;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfItemsInRow:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_actionAdd;
- (void)_actionAvatar;
- (void)reloadRecvFlagCell;
- (void)settingRecvFlagAction:(id)arg1;
- (void)clearMessagesAction:(id)arg1;
- (void)setMessagePushEnable:(_Bool)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)sessionSetMessagePushSwitchValueChanged:(id)arg1;
- (void)sessionSetTopSwitchValueChanged:(id)arg1;
- (void)setSessionSetTopFlag:(_Bool)arg1;
- (void)requestMessageSetting;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithP2PConversation:(id)arg1 kit:(id)arg2;
- (void)reloadData;
- (id)_makeHeadCell;
- (id)_makeSettingCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

