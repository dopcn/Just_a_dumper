//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XSTViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "XSTSwipeTableCellDelegate-Protocol.h"

@class NSMutableArray, NSString, UIColor, UITableView;

@interface XSTChatMainViewController : XSTViewController <UITableViewDelegate, UITableViewDataSource, XSTSwipeTableCellDelegate>
{
    UITableView *_tableView;
    NSMutableArray *_normalArr;
    NSMutableArray *_flagArr;
    UIColor *_mainColor;
}

@property(retain, nonatomic) UIColor *mainColor; // @synthesize mainColor=_mainColor;
@property(retain, nonatomic) NSMutableArray *flagArr; // @synthesize flagArr=_flagArr;
@property(retain, nonatomic) NSMutableArray *normalArr; // @synthesize normalArr=_normalArr;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)mutableAttributedStringWithMessageText:(id)arg1 sendState:(unsigned long long)arg2 senderID:(id)arg3;
- (id)getSubtitleWithDic:(id)arg1 nickname:(id)arg2;
- (void)dismissBtnAction:(id)arg1;
- (id)swipeTableCell:(id)arg1 swipeButtonsfromDirection:(long long)arg2 swipeSettings:(id)arg3 expansionSettings:(id)arg4;
- (_Bool)swipeTableCell:(id)arg1 canSwipe:(long long)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updatChatListShowCount:(id)arg1;
- (void)updateFriendList:(id)arg1;
- (void)themeSkinManagerNotificationThemeSkinChanged:(id)arg1;
- (void)setBarNumWithCount:(long long)arg1 preeId:(id)arg2 isGroup:(_Bool)arg3;
- (void)fetchAllList;
- (void)fetchList;
- (void)initUI;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

