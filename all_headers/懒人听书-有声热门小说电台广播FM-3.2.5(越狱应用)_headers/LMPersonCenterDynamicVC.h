//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LMSegmentBaseVC.h"

#import "LMMsgCommentCellDelegate-Protocol.h"

@class LMLoadingWaitingView, LMPersonalCenterVC, NSMutableDictionary, NSString;

@interface LMPersonCenterDynamicVC : LMSegmentBaseVC <LMMsgCommentCellDelegate>
{
    LMPersonalCenterVC *_superVC;
    LMLoadingWaitingView *_loadingWaitingView;
    NSMutableDictionary *_cellHeightDic;
}

@property(retain, nonatomic) NSMutableDictionary *cellHeightDic; // @synthesize cellHeightDic=_cellHeightDic;
@property(retain, nonatomic) LMLoadingWaitingView *loadingWaitingView; // @synthesize loadingWaitingView=_loadingWaitingView;
@property(nonatomic) __weak LMPersonalCenterVC *superVC; // @synthesize superVC=_superVC;
- (void).cxx_destruct;
- (void)didClickWholeEntityViewInCell:(id)arg1;
- (void)didClickEntityCoverInCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setMyTableViewRefreshTailView;
- (void)refreshViewFrame:(struct CGRect)arg1;
- (double)calculateCellHeightWithIndexRow:(long long)arg1;
- (void)loadDynamicDataWithReferId:(long long)arg1 pageSize:(long long)arg2;
- (void)requestDataSource;
- (void)showContentWithType:(long long)arg1;
- (void)addLoadingWaitingView;
- (void)handleDynamicDelete:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

