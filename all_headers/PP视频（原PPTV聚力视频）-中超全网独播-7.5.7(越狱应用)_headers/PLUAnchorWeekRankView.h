//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PLUClickUserProtocol-Protocol.h"
#import "PLUEaeningRankListCollectionViewDelegate-Protocol.h"
#import "PLUTapRefreshViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, PLUTapRefreshView, UITableView;
@protocol PLUEaeningRankListCollectionViewDelegate><PLUClickUserProtocol><PLUTapRefreshMoreViewStateDelegate;

@interface PLUAnchorWeekRankView : UIView <UIScrollViewDelegate, PLUEaeningRankListCollectionViewDelegate, UITableViewDelegate, UITableViewDataSource, PLUClickUserProtocol, PLUTapRefreshViewDelegate>
{
    UITableView *_dataTableView;
    NSArray *_dataSource;
    id <PLUEaeningRankListCollectionViewDelegate><PLUClickUserProtocol><PLUTapRefreshMoreViewStateDelegate> _delegate;
    unsigned long long _followStatu;
    PLUTapRefreshView *_tapRefreshView;
    unsigned long long _state;
    long long _selectIndex;
}

@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) PLUTapRefreshView *tapRefreshView; // @synthesize tapRefreshView=_tapRefreshView;
@property(nonatomic) unsigned long long followStatu; // @synthesize followStatu=_followStatu;
@property(nonatomic) __weak id <PLUEaeningRankListCollectionViewDelegate><PLUClickUserProtocol><PLUTapRefreshMoreViewStateDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *dataTableView; // @synthesize dataTableView=_dataTableView;
- (void).cxx_destruct;
- (void)dologinAction;
- (void)flowPersonModel:(id)arg1 index:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tapRefreshViewToRequestData;
- (void)headerAction;
- (void)setViews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

