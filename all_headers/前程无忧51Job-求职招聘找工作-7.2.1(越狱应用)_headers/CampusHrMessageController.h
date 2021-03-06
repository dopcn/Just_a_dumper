//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIBasicController.h"

#import "ListViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class ListView, NSString, UI51JobTitleView;

@interface CampusHrMessageController : UIBasicController <ListViewDelegate, UIWebViewDelegate>
{
    ListView *_hrMessageView;
    UI51JobTitleView *_navTitleView;
}

- (void).cxx_destruct;
- (void)listView:(id)arg1 selectedIndexPath:(id)arg2;
- (void)listViewData:(id)arg1 onReceived:(id)arg2;
- (id)listViewData:(id)arg1;
- (void)customView;
- (void)initNavBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

