//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQPimBaseViewController.h"

#import "QQPimPlusCustomMenuDelegate-Protocol.h"

@class NSString, QQPimLoginWaitingView, QQPimTimeLinePreviewController, QQPimTimeMechineNode;
@protocol QQPimTimeLinePreContainnerViewControllerDelegate;

@interface QQPimTimeLinePreContainnerViewController : QQPimBaseViewController <QQPimPlusCustomMenuDelegate>
{
    QQPimTimeLinePreviewController *_preController;
    QQPimTimeMechineNode *_timeMachineNode;
    id <QQPimTimeLinePreContainnerViewControllerDelegate> _delegate;
    QQPimLoginWaitingView *_waitingView;
}

@property(retain, nonatomic) QQPimLoginWaitingView *waitingView; // @synthesize waitingView=_waitingView;
@property(nonatomic) __weak id <QQPimTimeLinePreContainnerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QQPimTimeMechineNode *timeMachineNode; // @synthesize timeMachineNode=_timeMachineNode;
@property(retain, nonatomic) QQPimTimeLinePreviewController *preController; // @synthesize preController=_preController;
- (void).cxx_destruct;
- (void)versionDeleteNotification:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)plusCustomMenuTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showPlusCustomMenu;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

