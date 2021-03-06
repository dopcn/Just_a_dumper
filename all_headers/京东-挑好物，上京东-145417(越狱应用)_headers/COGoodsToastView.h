//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutAbstractToastView.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDBaseToastView, NSArray, NSMutableArray, NSString, UITableView;

@interface COGoodsToastView : COCheckoutAbstractToastView <UITableViewDelegate, UITableViewDataSource, JDBaseToastViewDelegate>
{
    NSString *_title;
    NSString *_cancelButtonTitle;
    NSString *_doneButtonTitle;
    NSArray *_items;
    NSMutableArray *_layouts;
    UITableView *_tableView;
    JDBaseToastView *_toastView;
    CDUnknownBlockType _cancelHandler;
    CDUnknownBlockType _doneHandler;
    CDUnknownBlockType _touchBackgroundViewEventHandler;
}

+ (id)toastViewWithItems:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType touchBackgroundViewEventHandler; // @synthesize touchBackgroundViewEventHandler=_touchBackgroundViewEventHandler;
@property(copy, nonatomic) CDUnknownBlockType doneHandler; // @synthesize doneHandler=_doneHandler;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(retain, nonatomic) JDBaseToastView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *layouts; // @synthesize layouts=_layouts;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *doneButtonTitle; // @synthesize doneButtonTitle=_doneButtonTitle;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)computeLayoutsThen:(CDUnknownBlockType)arg1;
- (void)didClickBackgroundInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)layoutSubviews;
- (void)addTouchBackgroundViewEventHandler:(CDUnknownBlockType)arg1;
- (void)addDoneHandler:(CDUnknownBlockType)arg1;
- (void)addCancelHandler:(CDUnknownBlockType)arg1;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)show;
- (id)initWithItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

