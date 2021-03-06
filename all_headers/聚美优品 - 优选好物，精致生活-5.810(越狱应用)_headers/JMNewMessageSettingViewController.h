//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JMBaseViewController.h"

#import "JMNewMessagesTableViewDataSource-Protocol.h"
#import "JMNewMessagesTableViewDelegate-Protocol.h"

@class JMNewMessagesTableView, JMNewMessagesViewModel, NSDictionary, NSString;

@interface JMNewMessageSettingViewController : JMBaseViewController <JMNewMessagesTableViewDelegate, JMNewMessagesTableViewDataSource>
{
    JMNewMessagesTableView *_messagesTableView;
    NSDictionary *_oringinalTitleTextAttributes;
    JMNewMessagesViewModel *_viewModel;
}

+ (id)instantiateNewMessagesSettingViewControllerFromStoryboard;
@property(retain, nonatomic) JMNewMessagesViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSDictionary *oringinalTitleTextAttributes; // @synthesize oringinalTitleTextAttributes=_oringinalTitleTextAttributes;
@property(nonatomic) __weak JMNewMessagesTableView *messagesTableView; // @synthesize messagesTableView=_messagesTableView;
- (void).cxx_destruct;
- (void)jm_insertOrDeleteRowsWithIsOpenSaleReminder:(_Bool)arg1 atIndexPaths:(id)arg2;
- (id)titleForItemAtIndexPath:(id)arg1;
- (id)identifierForItemAtIndexPath:(id)arg1;
- (void)messagesTableView:(id)arg1 didTapSlider:(id)arg2 atIndexPath:(id)arg3;
- (void)messagesTableView:(id)arg1 didTapSwitch:(id)arg2 atIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addObserverToNotificationCenter;
- (void)configureInfos;
- (void)configureNavigationItemForTitle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

