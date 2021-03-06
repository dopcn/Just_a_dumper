//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UIButton, UITableView;

@interface WMPickBaseView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    double _tableViewHeight;
    UIView *_headerView;
    UIView *_bgView;
    UIView *_contentView;
    UITableView *_tableView;
    UIButton *_cancelButton;
}

@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) double tableViewHeight; // @synthesize tableViewHeight=_tableViewHeight;
- (void).cxx_destruct;
- (void)didClickCancelButton:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)showInAnimation;
- (void)refreshPickView;
- (Class)getTableViewCellClass;
- (void)tableViewDidSelectRowAtIndexPath:(id)arg1;
- (void)loadCellWithIndexPath:(id)arg1 cell:(id)arg2;
- (id)getTableViewCellClassStr;
- (long long)numberOfRowsInTableView;
- (void)dismiss;
- (void)showWithSelectedIndex:(long long)arg1;
- (void)show;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

