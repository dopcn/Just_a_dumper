//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCB_2_baseSubViewController.h"

#import "RightButtonHandlerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CCBTableView, NSArray, NSString;

@interface CCB_7_VC_MyFocusFinancialArea : CCB_2_baseSubViewController <RightButtonHandlerProtocol, UITableViewDataSource, UITableViewDelegate>
{
    CCBTableView *_tableView;
    NSArray *_dataArray;
    NSArray *_tempArray;
}

@property(retain, nonatomic) NSArray *tempArray; // @synthesize tempArray=_tempArray;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) CCBTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)rightButtonDidClick;
- (void)setDataArr:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addObserverForViewModel;
- (void)viewDidLoad;
- (void)drawMyFoxView;
- (id)init;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

