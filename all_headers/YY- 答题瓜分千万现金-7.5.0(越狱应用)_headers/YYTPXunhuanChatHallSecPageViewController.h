//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "YYTPVRSubTopicCoverViewDelegate-Protocol.h"

@class NSString, YYTPVRSubTopicCoverView, YYTPXunhuanSubTopicEntity;

@interface YYTPXunhuanChatHallSecPageViewController : UITableViewController <YYTPVRSubTopicCoverViewDelegate>
{
    unsigned long long _tid;
    YYTPXunhuanSubTopicEntity *_subTopic;
    YYTPVRSubTopicCoverView *_coverView;
}

+ (void)pushViewController;
+ (id)chatHallSecPageViewController;
@property(retain, nonatomic) YYTPVRSubTopicCoverView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) YYTPXunhuanSubTopicEntity *subTopic; // @synthesize subTopic=_subTopic;
@property(nonatomic) unsigned long long tid; // @synthesize tid=_tid;
- (void).cxx_destruct;
- (void)needLoginWithloginSucceedDismissedBlock:(CDUnknownBlockType)arg1;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)subTopicCoverViewBackBtnDidClick;
- (void)createMyRoomIfNeeded;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)_handleSubTopicList:(id)arg1;
- (void)loadSubTopicList;
- (void)hideTransparentNavBar;
- (void)showTransparentNavBar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)btnClick;
- (void)initCoverView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

