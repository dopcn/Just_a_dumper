//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VFOBaseVC.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UILabel, UITableView;
@protocol VFORoomUpgradeDelegate;

@interface VFORoomUpgradeVC : VFOBaseVC <UITableViewDelegate, UITableViewDataSource>
{
    UILabel *label1;
    UILabel *label0;
    NSArray *_roomUpgradeItems;
    id <VFORoomUpgradeDelegate> _delegate;
    CDUnknownBlockType _block;
    long long _currentIndex;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) __weak id <VFORoomUpgradeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *roomUpgradeItems; // @synthesize roomUpgradeItems=_roomUpgradeItems;
- (void).cxx_destruct;
- (void)setupCell:(id)arg1 atIndexPath:(id)arg2 loadImg:(_Bool)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setupSubView;
- (void)setupNaviView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

