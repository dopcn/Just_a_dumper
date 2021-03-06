//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SNBAction, UITableView;

@interface SNBActionSheet : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>
{
    NSMutableArray *_actionArray;
    NSString *_title;
    UITableView *_tableView;
    long long _type;
    SNBAction *_selectAction;
    UIView *_containerView;
    CDUnknownBlockType _dissmissHandler;
}

+ (id)actionSheetWithTitle:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType dissmissHandler; // @synthesize dissmissHandler=_dissmissHandler;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) SNBAction *selectAction; // @synthesize selectAction=_selectAction;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSMutableArray *actionArray; // @synthesize actionArray=_actionArray;
- (void).cxx_destruct;
- (void)_snb_dismiss;
- (void)_snb_cleanSelectState;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)_snb_heightForActionSheetView;
- (struct CGRect)_snb_frameForActionSheetView;
- (struct CGRect)_snb_dissmissFrameForActionSheetView;
- (void)_snb_configSubviews;
- (void)addWillDismissBlock:(CDUnknownBlockType)arg1;
- (void)show;
- (void)addCancelActionWithHandler:(CDUnknownBlockType)arg1;
- (void)addAction:(id)arg1;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

