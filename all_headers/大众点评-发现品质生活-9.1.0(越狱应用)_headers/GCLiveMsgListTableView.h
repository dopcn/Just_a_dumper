//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GCFrequeControl, NSMutableArray, NSString;

@interface GCLiveMsgListTableView : UITableView <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isInPIP;
    _Bool _canScrollToBottom;
    NSMutableArray *_unSendMsgs;
    NSMutableArray *_msgInfos;
    GCFrequeControl *_freqControlForMsg;
}

@property(retain, nonatomic) GCFrequeControl *freqControlForMsg; // @synthesize freqControlForMsg=_freqControlForMsg;
@property(nonatomic) _Bool canScrollToBottom; // @synthesize canScrollToBottom=_canScrollToBottom;
@property(retain, nonatomic) NSMutableArray *msgInfos; // @synthesize msgInfos=_msgInfos;
@property(retain, nonatomic) NSMutableArray *unSendMsgs; // @synthesize unSendMsgs=_unSendMsgs;
@property(nonatomic) _Bool isInPIP; // @synthesize isInPIP=_isInPIP;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollToBottom;
- (void)initialize;
- (void)sendMessage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

