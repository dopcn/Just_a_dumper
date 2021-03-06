//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NetErrorViewDelegate-Protocol.h"
#import "TVLiveChannelListCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class HeartActivityIndicatorView, NSString, NetErrorView, TVLiveChannelListInfo, TVLiveProgramInfo, UITableView;
@protocol TVLiveChannelListViewDelegate;

@interface TVLiveChannelListView : UIView <NetErrorViewDelegate, UITableViewDelegate, UITableViewDataSource, TVLiveChannelListCellDelegate>
{
    NetErrorView *netErrorView;
    HeartActivityIndicatorView *heartActivityIndicatorView;
    UITableView *listTableView;
    TVLiveChannelListInfo *_listInfo;
    id <TVLiveChannelListViewDelegate> _delegate;
    TVLiveProgramInfo *_playingProgram;
}

@property(retain, nonatomic) TVLiveProgramInfo *playingProgram; // @synthesize playingProgram=_playingProgram;
@property(nonatomic) id <TVLiveChannelListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TVLiveChannelListInfo *listInfo; // @synthesize listInfo=_listInfo;
- (void)reloadData;
- (void)popChannelView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)retry;
- (void)showNetError:(_Bool)arg1;
- (void)showHeartActivity:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

