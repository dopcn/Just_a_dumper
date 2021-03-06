//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BMFavRenameViewDelegate-Protocol.h"
#import "PageResultDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BMDefaultEmptyView, BMHighlightSubviewBtn, BMNODelayTouchesTableView, NSMutableArray, NSString;

@interface BMFavGroupView : UIView <UITableViewDelegate, UITableViewDataSource, PageResultDelegate, BMFavRenameViewDelegate>
{
    _Bool _isHasRoute;
    BMNODelayTouchesTableView *_groupTableView;
    NSMutableArray *_groupData;
    BMHighlightSubviewBtn *_addGroupBtn;
    BMDefaultEmptyView *_noContentView;
}

@property(retain, nonatomic) BMDefaultEmptyView *noContentView; // @synthesize noContentView=_noContentView;
@property(nonatomic) _Bool isHasRoute; // @synthesize isHasRoute=_isHasRoute;
@property(retain, nonatomic) BMHighlightSubviewBtn *addGroupBtn; // @synthesize addGroupBtn=_addGroupBtn;
@property(retain, nonatomic) NSMutableArray *groupData; // @synthesize groupData=_groupData;
@property(retain, nonatomic) BMNODelayTouchesTableView *groupTableView; // @synthesize groupTableView=_groupTableView;
- (void).cxx_destruct;
- (void)onCreateGroup:(id)arg1 styleId:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isRoute:(id)arg1 rowAtIndexPath:(id)arg2;
- (_Bool)forbidCreatGroup;
- (_Bool)validString:(id)arg1;
- (void)getPoiWithTag:(id)arg1;
- (void)getGroupData;
- (void)initData;
- (void)addGroup;
- (id)getFont:(double)arg1;
- (void)restoreData;
- (void)pageResult:(int)arg1 requestCode:(int)arg2 data:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

