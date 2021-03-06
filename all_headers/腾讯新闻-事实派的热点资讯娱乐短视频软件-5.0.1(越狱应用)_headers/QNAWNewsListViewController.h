//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QNRootViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSString, UITableView;

@interface QNAWNewsListViewController : QNRootViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isNoPictureMode;
    NSArray *_listItems;
    UITableView *_tableView;
    NSString *_timeStamp;
    NSIndexPath *_lastSelectedIndexPath;
}

@property(retain, nonatomic) NSIndexPath *lastSelectedIndexPath; // @synthesize lastSelectedIndexPath=_lastSelectedIndexPath;
@property(nonatomic) _Bool isNoPictureMode; // @synthesize isNoPictureMode=_isNoPictureMode;
@property(retain, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *listItems; // @synthesize listItems=_listItems;
- (void).cxx_destruct;
- (void)p_dismissWaitingView;
- (void)p_showWaitingView;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)p_showSecondLevelCompleted;
- (void)controllerContentDidShowSucess:(id)arg1;
- (void)scroll2Top;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)onBack:(id)arg1;
- (void)do_viewWillDestroy;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

