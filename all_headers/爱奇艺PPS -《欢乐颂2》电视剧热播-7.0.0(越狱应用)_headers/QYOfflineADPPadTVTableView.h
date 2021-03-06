//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DEpisodeTvCellDelegate-Protocol.h"
#import "QYOfflineADPHeaderViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, QYOfflineADPHeaderView, UITableView;
@protocol QYOfflineADPPadTVTableViewDelegate;

@interface QYOfflineADPPadTVTableView : UIView <UITableViewDelegate, UITableViewDataSource, DEpisodeTvCellDelegate, QYOfflineADPHeaderViewDelegate>
{
    long long _fromType;
    NSIndexPath *_currentSelIndexPath;
    long long _currentSelColumn;
    NSString *_currentPlayerId;
    long long _tvCellColoum;
    double _cellHeight;
    double _cellWidth;
    id <QYOfflineADPPadTVTableViewDelegate> _delegate;
    NSMutableArray *_dataArray;
    long long _locationWIndex;
    long long _locationNIndex;
    UITableView *_myListView;
    QYOfflineADPHeaderView *_myHeaderView;
}

@property(retain, nonatomic) QYOfflineADPHeaderView *myHeaderView; // @synthesize myHeaderView=_myHeaderView;
@property(retain, nonatomic) UITableView *myListView; // @synthesize myListView=_myListView;
@property(nonatomic) long long locationNIndex; // @synthesize locationNIndex=_locationNIndex;
@property(nonatomic) long long locationWIndex; // @synthesize locationWIndex=_locationWIndex;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) __weak id <QYOfflineADPPadTVTableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didSelectADImageWithInfoDic:(id)arg1;
- (void)loadADImageResult:(long long)arg1 infoDic:(id)arg2;
- (void)clickTvButton:(id)arg1 indexPath:(id)arg2 column:(long long)arg3 WithCellIV:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)dataWithIndexPath:(id)arg1 column:(long long)arg2;
- (id)getTVOneRowArrayWithIndex:(long long)arg1;
- (void)reloadDataLocation;
- (void)refreshCurPlayByEpisodeId:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (void)loadADModel:(id)arg1;
- (void)reloadTableHeaderView;
- (void)reloadData;
- (void)addHeaderTableView;
- (id)initWithFrame:(struct CGRect)arg1 fromType:(long long)arg2 currnetPlayId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

