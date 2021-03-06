//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NMActionSheetBackgroundView, NMTableViewContainer, NSString, UITableView;

@interface NMCommonActionView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    UIView *_maskView;
    NMActionSheetBackgroundView *_bgView;
    NMTableViewContainer *_tableViewContainer;
}

- (void).cxx_destruct;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)showInView:(id)arg1 tableViewHeight:(double)arg2;
- (void)showInView:(id)arg1;
- (void)reloadTableHeight;
- (void)tap:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableViewHeight;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

