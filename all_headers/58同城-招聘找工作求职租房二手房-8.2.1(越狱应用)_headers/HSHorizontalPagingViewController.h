//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HSInterpretationBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class HSHorizontalPagingView, NSMutableArray, NSString, UITableView, UIView;

@interface HSHorizontalPagingViewController : HSInterpretationBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    UIView *_mainView;
    UITableView *_headerView;
    HSHorizontalPagingView *_pagingView;
    NSMutableArray *_tableArray;
    NSMutableArray *_tableVCArray;
    NSString *_inPageTime;
    NSString *_outPageTime;
}

@property(retain, nonatomic) NSString *outPageTime; // @synthesize outPageTime=_outPageTime;
@property(retain, nonatomic) NSString *inPageTime; // @synthesize inPageTime=_inPageTime;
@property(retain, nonatomic) NSMutableArray *tableVCArray; // @synthesize tableVCArray=_tableVCArray;
@property(retain, nonatomic) NSMutableArray *tableArray; // @synthesize tableArray=_tableArray;
@property(retain, nonatomic) HSHorizontalPagingView *pagingView; // @synthesize pagingView=_pagingView;
@property(retain, nonatomic) UITableView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setUserLogWithAction:(id)arg1 actionDic:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)finishedRequestServe:(unsigned long long)arg1 result:(id)arg2;
- (void)viewDidLoad;
- (void)prepareTableView;
- (id)registerPrivateItemView;
- (id)registerBusinessBeans;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

