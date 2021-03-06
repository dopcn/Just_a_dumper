//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPTBaseListViewController.h"

#import "WBLoginSDKDelegate-Protocol.h"
#import "WBPTBaseTableViewSourceDelegate-Protocol.h"
#import "WBPTQjzWalletHeaderViewDelegate-Protocol.h"

@class NSString, WBPTQjzWalletHeaderView, WBPTQjzWalletTableViewSource;

@interface WBPTQjzWalletViewController : WBPTBaseListViewController <WBPTBaseTableViewSourceDelegate, WBPTQjzWalletHeaderViewDelegate, WBLoginSDKDelegate>
{
    WBPTQjzWalletHeaderView *_topView;
}

@property(retain, nonatomic) WBPTQjzWalletHeaderView *topView; // @synthesize topView=_topView;
- (void).cxx_destruct;
- (void)WBPTQjzWalletHeaderViewDidClickWithdrawButton;
- (void)SDKBindPhoneFinished:(id)arg1;
- (void)tableSourceDidFinishLoadMore:(id)arg1;
- (void)tableSourceDidFinishRefresh:(id)arg1;
- (void)tableSource:(id)arg1 loadMoreError:(id)arg2;
- (void)tableSource:(id)arg1 refreshError:(id)arg2;
- (id)canWithdraw;
- (void)initTableViewSource;
- (void)initTableView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) WBPTQjzWalletTableViewSource *tableViewSource; // @dynamic tableViewSource;

@end

