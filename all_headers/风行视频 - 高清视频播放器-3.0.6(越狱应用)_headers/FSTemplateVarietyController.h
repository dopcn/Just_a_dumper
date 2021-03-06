//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FspTemplateFiltePageBaseController.h"

#import "FSChannelDetailItemProtocol-Protocol.h"
#import "FspChannelRequestDataProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString;

@interface FSTemplateVarietyController : FspTemplateFiltePageBaseController <UITableViewDelegate, UITableViewDataSource, FSChannelDetailItemProtocol, FspChannelRequestDataProtocol>
{
}

- (void)channelDetailListItemTouched:(id)arg1;
- (void)repTryRequestData:(id)arg1;
- (void)reloadData_RequestFail:(id)arg1;
- (void)reloadData_RequestFinish:(id)arg1;
- (void)requestData:(unsigned long long)arg1;
- (void)requestDataWithLoadingIndicator;
- (void)requestNextPageData;
- (void)reloadTableViewDataSourcePullup:(id)arg1;
- (_Bool)shouldReloadMore:(id)arg1;
- (void)reloadTableViewDataSourcePullDown:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)requestData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)initFrame;
- (id)initWithChannel:(id)arg1 channelId:(id)arg2;
- (void)didReceiveMemoryWarning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

