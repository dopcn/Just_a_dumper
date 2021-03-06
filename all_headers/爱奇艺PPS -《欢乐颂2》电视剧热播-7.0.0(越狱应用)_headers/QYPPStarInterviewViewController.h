//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PPBaseCardDataDelegate-Protocol.h"

@class NSString, PPBaseCardViewController, QYPPNavigationBar;

@interface QYPPStarInterviewViewController : UIViewController <PPBaseCardDataDelegate>
{
    PPBaseCardViewController *_cardViewController;
    QYPPNavigationBar *_navigationBar;
}

@property(retain, nonatomic) QYPPNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) PPBaseCardViewController *cardViewController; // @synthesize cardViewController=_cardViewController;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)baseCardViewControllerLoadFinished;
- (void)feedDataLoadFaild;
- (void)baseCardViewControllerDelayLoadMoreFailed;
- (void)baseCardViewControllerDelayRefreshFailed;
- (void)initFeedTableView;
- (void)setNavigationTitle:(id)arg1;
- (void)initNavigationBar;
- (void)handleBackAction;
- (void)fetchFeedData;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

