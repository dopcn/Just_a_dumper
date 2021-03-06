//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageBaseViewController.h"

#import "WBRouteProtocol-Protocol.h"

@class NSString, UIButton;

@interface WBSubscriptionListViewController : WBPageBaseViewController <WBRouteProtocol>
{
    UIButton *subscriptionButton;
}

+ (id)routeWithParamters:(id)arg1 extensionParamters:(id)arg2;
@property(retain, nonatomic) UIButton *subscriptionButton; // @synthesize subscriptionButton;
- (void).cxx_destruct;
- (void)reloadRequest;
- (id)navigationPopToViewController;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2;
- (void)pageLoadFinished:(id)arg1;
- (void)backAction:(id)arg1;
- (void)prepareWebView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

