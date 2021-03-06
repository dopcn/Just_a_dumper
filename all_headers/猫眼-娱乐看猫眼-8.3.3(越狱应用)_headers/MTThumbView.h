//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView;
@protocol MTThumbViewDataSource, MTThumbViewDelegate;

@interface MTThumbView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    id _mtDelegate;
    UIView *_tableHeaderView;
    _Bool _editing;
    UITableView *_tableView;
    id <MTThumbViewDataSource> _mtDataSource;
    NSMutableArray *_reusableCells;
}

@property(retain, nonatomic) NSMutableArray *reusableCells; // @synthesize reusableCells=_reusableCells;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) __weak id <MTThumbViewDelegate> mtDelegate; // @synthesize mtDelegate=_mtDelegate;
@property(nonatomic) __weak id <MTThumbViewDataSource> mtDataSource; // @synthesize mtDataSource=_mtDataSource;
- (void).cxx_destruct;
- (void)dealloc;
- (void)toggleSelectAction:(id)arg1 selected:(_Bool)arg2;
- (double)heightForFooterOfSection:(unsigned long long)arg1;
- (double)heightForHeaderOfSection:(unsigned long long)arg1;
- (double)heightForSection:(unsigned long long)arg1;
- (_Bool)canEditColumnAtIndexPath:(id)arg1;
- (id)cellFromDataSourceForColumnAtIndexPath:(id)arg1;
- (id)cellFromDataSourceForColumnAtIndexPath:(id)arg1 bigSection:(unsigned long long)arg2;
- (long long)numberOfRowsInSection:(unsigned long long)arg1;
- (long long)numberOfColumnsInSection:(unsigned long long)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)deleteSections:(id)arg1 withAnimation:(long long)arg2;
- (void)reloadSections:(id)arg1 withAnimation:(long long)arg2;
- (void)insertSections:(id)arg1 withAnimation:(long long)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)deleteColumnsAtIndexPaths:(id)arg1;
- (void)deselectColumnAtIndexPath:(id)arg1;
- (void)selectColumnAtIndexPath:(id)arg1;
- (id)visibleCells;
- (id)cellForColumnAtIndexPath:(id)arg1;
- (id)indexPathForCell:(id)arg1;
- (void)scrolltoTop;
- (void)reloadData;
- (void)enqueueReusableCells:(id)arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
@property(retain, nonatomic) UIView *tableHeaderView;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

