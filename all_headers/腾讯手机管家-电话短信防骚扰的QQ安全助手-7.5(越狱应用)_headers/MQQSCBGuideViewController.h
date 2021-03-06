//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

#import "MQQAlertViewDelegate-Protocol.h"
#import "MQQScrollablePagesViewDataSource-Protocol.h"

@class MQQAlertView, MQQScrollablePagesView, NSString, UIControl;

@interface MQQSCBGuideViewController : MQQBaseViewController <MQQAlertViewDelegate, MQQScrollablePagesViewDataSource>
{
    _Bool _isJumperSupported;
    MQQScrollablePagesView *_pagesView;
    MQQAlertView *_alertView;
    UIControl *_maskView;
}

@property(retain, nonatomic) UIControl *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) MQQAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) MQQScrollablePagesView *pagesView; // @synthesize pagesView=_pagesView;
- (void)mqqAlertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)settingButtonClicked;
- (void)rightButtonCLicked:(id)arg1;
- (void)backButtonClicked:(id)arg1;
- (void)dismissMaskView;
- (void)showMaskView;
- (void)addTransition;
- (id)scrollabledPagesView:(id)arg1 titleForIndex:(long long)arg2;
- (id)scrollabledPagesView:(id)arg1 imageForIndex:(long long)arg2;
- (long long)numberOfPagesForScrollabledPagesView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadBackgroundView;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

