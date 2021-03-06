//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHDownloadAutoDeleteBaseVC.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSAttributedString, NSString, UITableView, UIView;

@interface SHDownloadAutoDeleteCleanAnimationVC : SHDownloadAutoDeleteBaseVC <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_models;
    UITableView *_tb;
    UIView *_progressView;
    UIView *_finishView;
    double _startPercent;
    double _endPercent;
    NSAttributedString *_cleantip;
    unsigned long long _flagCount;
}

@property(nonatomic) unsigned long long flagCount; // @synthesize flagCount=_flagCount;
@property(copy, nonatomic) NSAttributedString *cleantip; // @synthesize cleantip=_cleantip;
@property(nonatomic) double endPercent; // @synthesize endPercent=_endPercent;
@property(nonatomic) double startPercent; // @synthesize startPercent=_startPercent;
@property(retain, nonatomic) UIView *finishView; // @synthesize finishView=_finishView;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UITableView *tb; // @synthesize tb=_tb;
@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
- (void).cxx_destruct;
- (void)doNotShowMeAgain;
- (void)animationDidEnd;
- (void)beginMoveLeftAnimation:(id)arg1 delay:(double)arg2;
- (void)visibleRowsBeginAnimation;
- (void)cancelMoveLeftAnimate;
- (void)dealloc;
- (void)beginAnimationAfterDely:(double)arg1;
- (void)finishShowBeginCleanAnimaiton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateViews;
- (void)setupSubViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

