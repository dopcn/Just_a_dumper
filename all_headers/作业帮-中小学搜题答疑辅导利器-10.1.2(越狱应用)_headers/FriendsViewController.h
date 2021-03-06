//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HomeWorkBaseViewController.h"

#import "FriendListTableHeaderViewDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FriendListTableHeaderView, FriendsViewModel, NSString, UITableView, UIView;

@interface FriendsViewController : HomeWorkBaseViewController <UITableViewDelegate, FriendListTableHeaderViewDelegate>
{
    UITableView *_tableView;
    FriendsViewModel *_viewModel;
    FriendListTableHeaderView *_headerView;
    UIView *_noFriendView;
}

@property(retain, nonatomic) UIView *noFriendView; // @synthesize noFriendView=_noFriendView;
@property(retain, nonatomic) FriendListTableHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) FriendsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)showNoFriendView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)friendListTableHeaderViewDidTap:(id)arg1 withApplyCount:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)addFriend;
- (void)loadMore;
- (void)loadData;
- (void)addPullUpAndDown;
- (void)dealloc;
- (void)initTableView;
- (void)setNavigation;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

