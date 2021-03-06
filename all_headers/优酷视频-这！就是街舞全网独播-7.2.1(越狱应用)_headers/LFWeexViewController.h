//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXViewController.h"

#import "LFAuthViewController-Protocol.h"
#import "LFWeexViewControllerProtocol-Protocol.h"

@class NSString;
@protocol LFAuthViewControllerDelegate, LFWeexViewControllerProtocol;

@interface LFWeexViewController : WXViewController <LFWeexViewControllerProtocol, LFAuthViewController>
{
    _Bool _navigationBarHidden;
    id <LFWeexViewControllerProtocol> _delegate;
    id <LFAuthViewControllerDelegate> _authDelegate;
    long long _orangeStatusBarStyle;
    long long _style;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long orangeStatusBarStyle; // @synthesize orangeStatusBarStyle=_orangeStatusBarStyle;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(nonatomic) __weak id <LFAuthViewControllerDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
@property(nonatomic) __weak id <LFWeexViewControllerProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)weexPageCloseOnClick:(id)arg1;
- (_Bool)wxNavbarIsHidden;
- (_Bool)wxCheckIsSecurityDomain:(id)arg1;
- (void)wxRemoveChildViewController:(id)arg1;
- (void)wxAddChildViewController:(id)arg1;
- (id)wxChildViewControllers;
- (id)wxNavigationController;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

