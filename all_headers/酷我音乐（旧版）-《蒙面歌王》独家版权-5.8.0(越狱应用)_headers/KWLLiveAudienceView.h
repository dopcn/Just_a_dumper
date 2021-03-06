//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BaseCellDelegate-Protocol.h"
#import "KWLRoomUserlistSourceDelegate-Protocol.h"
#import "KWLZLCellMenuViewDelegate-Protocol.h"
#import "KWLZLLoadTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class KWLRoomUserlistSource, KWLZLLoadTableView, NSMutableArray, NSString;
@protocol KWLLiveAudienceViewDelegate;

@interface KWLLiveAudienceView : UIView <UITableViewDataSource, UITableViewDelegate, BaseCellDelegate, KWLZLCellMenuViewDelegate, KWLRoomUserlistSourceDelegate, KWLZLLoadTableViewDelegate>
{
    _Bool CatalogListPicManager_clearSessionOfTasks;
    unsigned long long _roomId;
    id <KWLLiveAudienceViewDelegate> _target;
    KWLZLLoadTableView *_audienceTableView;
    KWLRoomUserlistSource *_audiencelistSource;
    NSMutableArray *_audiencelist;
}

@property(retain, nonatomic) NSMutableArray *audiencelist; // @synthesize audiencelist=_audiencelist;
@property(retain, nonatomic) KWLRoomUserlistSource *audiencelistSource; // @synthesize audiencelistSource=_audiencelistSource;
@property(retain, nonatomic) KWLZLLoadTableView *audienceTableView; // @synthesize audienceTableView=_audienceTableView;
- (void)kWLRoomUserlistSource:(id)arg1 resultUserlist:(id)arg2 success:(_Bool)arg3;
- (void)reloadAudiencelist;
- (void)onClickSendGift:(id)arg1;
- (void)onClickChatSecret:(id)arg1;
- (void)onClickChatPublic:(id)arg1;
- (void)onClickBrowseAudienceInfo:(id)arg1;
- (void)KWLZLCellMenuViewDismissed:(id)arg1;
- (void)onClickButtonCellMenu:(id)arg1 sender:(id)arg2;
- (void)kWLZLLoadTableViewDidTriggerPulldownRefresh:(id)arg1;
- (void)downloadImageByUrlCallBack:(id)arg1;
- (void)downloadImageByurl:(id)arg1 indexPath:(id)arg2;
- (id)getImageFromLocalByUrl:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 roomId:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

