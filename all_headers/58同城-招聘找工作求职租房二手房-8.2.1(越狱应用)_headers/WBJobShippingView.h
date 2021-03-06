//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSDictionary, NSString, UITableView, WBJobListCollectCell, WBJobShippingBottomCell, WBJobShippingModel, WBListLoadMoreView;
@protocol WBJobShippingViewDelegate;

@interface WBJobShippingView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isCollect;
    _Bool _lastPage;
    _Bool _loading;
    int _cateIndex;
    int _pageIndex;
    id <WBJobShippingViewDelegate> _delegate;
    UITableView *_tableView;
    WBJobShippingModel *_model;
    NSString *_nextCateName;
    WBListLoadMoreView *_loadMoreView;
    WBJobListCollectCell *_lastOpenCell;
    WBJobShippingBottomCell *_bottomCell;
    NSDictionary *_bottomAction;
}

@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool lastPage; // @synthesize lastPage=_lastPage;
@property(nonatomic) int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) NSDictionary *bottomAction; // @synthesize bottomAction=_bottomAction;
@property(retain, nonatomic) WBJobShippingBottomCell *bottomCell; // @synthesize bottomCell=_bottomCell;
@property(retain, nonatomic) WBJobListCollectCell *lastOpenCell; // @synthesize lastOpenCell=_lastOpenCell;
@property(retain, nonatomic) WBListLoadMoreView *loadMoreView; // @synthesize loadMoreView=_loadMoreView;
@property(nonatomic) _Bool isCollect; // @synthesize isCollect=_isCollect;
@property(copy, nonatomic) NSString *nextCateName; // @synthesize nextCateName=_nextCateName;
@property(retain, nonatomic) WBJobShippingModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) int cateIndex; // @synthesize cateIndex=_cateIndex;
@property(nonatomic) __weak id <WBJobShippingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)openListCell:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)bindingData:(id)arg1;
- (void)requestData;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

