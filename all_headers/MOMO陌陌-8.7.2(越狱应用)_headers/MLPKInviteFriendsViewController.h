//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MLViewController.h"

#import "MLPKInviteTableViewCellDelegate-Protocol.h"
#import "MLSegmentContentViewControllerProtocol-Protocol.h"
#import "MLShouldResponseGesture-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MLBroadcasterPKProcedureDataSource, MLPKFriendSection, NSString, UIImageView, UILabel, UITableView, UIView;
@protocol MLPKInviteFriendsViewControllerDelegate;

@interface MLPKInviteFriendsViewController : MLViewController <UITableViewDelegate, UITableViewDataSource, MLPKInviteTableViewCellDelegate, MLShouldResponseGesture, MLSegmentContentViewControllerProtocol>
{
    MLBroadcasterPKProcedureDataSource *_pkProcedureDataSource;
    MLPKFriendSection *_sectionModel;
    id <MLPKInviteFriendsViewControllerDelegate> _delegate;
    UIView *_containerView;
    UITableView *_tableView;
    UILabel *_blankTipLabel;
    UIImageView *_blankImageView;
}

@property(retain, nonatomic) UIImageView *blankImageView; // @synthesize blankImageView=_blankImageView;
@property(retain, nonatomic) UILabel *blankTipLabel; // @synthesize blankTipLabel=_blankTipLabel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <MLPKInviteFriendsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MLPKFriendSection *sectionModel; // @synthesize sectionModel=_sectionModel;
@property(retain, nonatomic) MLBroadcasterPKProcedureDataSource *pkProcedureDataSource; // @synthesize pkProcedureDataSource=_pkProcedureDataSource;
- (void).cxx_destruct;
- (void)reloadContentViewController;
- (void)cancelInviteFriendPK:(id)arg1 friendItem:(id)arg2;
- (void)inviteFriendPK:(id)arg1 friendItem:(id)arg2;
- (void)agreeFriendApplyPK:(id)arg1 friendItem:(id)arg2;
- (void)refuseFriendApplyPK:(id)arg1 friendItem:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)clearBlankTipView;
- (void)setupBlankTipView;
- (void)setupTableView;
- (_Bool)shouldResponseGestureInLocation:(struct CGPoint)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

