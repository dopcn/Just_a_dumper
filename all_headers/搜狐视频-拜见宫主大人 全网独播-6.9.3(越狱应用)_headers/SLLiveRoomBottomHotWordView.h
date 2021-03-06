//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIControl, UITableView;

@interface SLLiveRoomBottomHotWordView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UIControl *_bgCtrl;
    CDUnknownBlockType _dismissBlock;
    CDUnknownBlockType _didClickedHotWord;
    UITableView *_contentTableView;
    NSMutableArray *_hotWords;
}

@property(retain, nonatomic) NSMutableArray *hotWords; // @synthesize hotWords=_hotWords;
@property(nonatomic) __weak UITableView *contentTableView; // @synthesize contentTableView=_contentTableView;
@property(copy, nonatomic) CDUnknownBlockType didClickedHotWord; // @synthesize didClickedHotWord=_didClickedHotWord;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
- (void).cxx_destruct;
- (void)dismiss;
- (void)clickedBg:(id)arg1;
- (void)didMoveToSuperview;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)prepareViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 hotWords:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

