//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "View.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIColor, UITableView;
@protocol NWSingleListViewDelegate;

@interface NWSingleListView : View <UITableViewDataSource, UITableViewDelegate>
{
    UIColor *_cellNormalColor;
    UIColor *_cellSelectedColor;
    id <NWSingleListViewDelegate> _delegate;
    UITableView *_tableView;
    NSArray *_dataSource;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <NWSingleListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *cellSelectedColor; // @synthesize cellSelectedColor=_cellSelectedColor;
@property(retain, nonatomic) UIColor *cellNormalColor; // @synthesize cellNormalColor=_cellNormalColor;
- (void).cxx_destruct;
- (void)setTableViewSelectRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeConstraints;
- (id)initWithSize:(struct CGSize)arg1 items:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

