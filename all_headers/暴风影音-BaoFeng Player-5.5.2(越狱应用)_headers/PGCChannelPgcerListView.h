//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PGCChannelContentView.h"

#import "PGCChannelItemCellDelegate-Protocol.h"
#import "PGCChannelPgcerCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSDateFormatter, NSString;

@interface PGCChannelPgcerListView : PGCChannelContentView <UITableViewDataSource, UITableViewDelegate, PGCChannelPgcerCellDelegate, PGCChannelItemCellDelegate>
{
    NSDateFormatter *_disPlayDateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *disPlayDateFormatter; // @synthesize disPlayDateFormatter=_disPlayDateFormatter;
- (void)PGCPgcerManagerChanged;
- (void)shareButtonAction:(id)arg1;
- (void)pgcerHeadImageTapAction:(id)arg1;
- (void)albumImageViewTapAction:(id)arg1;
- (void)morePgcerAction:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

