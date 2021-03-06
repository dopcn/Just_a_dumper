//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMCommonViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UIPageControl, UIScrollView, UIView, UIWindow;

@interface FMNewUserWelcomePageController : FMCommonViewController <UIScrollViewDelegate>
{
    struct CGRect pageFrame;
    UIScrollView *welcomeScrollView;
    UIPageControl *pageControlView;
    UIImageView *pageStep1;
    UIImageView *pageStep2;
    UIImageView *pageStep3;
    UIImageView *pageStep4;
    UIView *page1;
    UIView *page2;
    UIView *page3;
    UIView *page4;
    UIButton *enterMailButton;
    UIWindow *window;
    _Bool isForUpgrade;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)scaleImageWithOriginImage:(id)arg1 scaleToSize:(struct CGSize)arg2;
- (void)enterMailHandle:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showWelcomeView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewDidLoad;
- (id)init:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

