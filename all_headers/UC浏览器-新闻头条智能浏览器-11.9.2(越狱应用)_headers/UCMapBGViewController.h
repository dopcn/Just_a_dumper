//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WebPageExtendConDelegate-Protocol.h"

@class NSString, UIImageView, UIView;

@interface UCMapBGViewController : UIViewController <WebPageExtendConDelegate>
{
    _Bool _showingPicVC;
    _Bool _statusBarHidden;
    UIImageView *_bgImageView;
    long long _statusBarStyle;
    long long _statusBarAnimation;
    UIView *_viewForPic;
}

@property(nonatomic) UIView *viewForPic; // @synthesize viewForPic=_viewForPic;
@property(nonatomic) long long statusBarAnimation; // @synthesize statusBarAnimation=_statusBarAnimation;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) _Bool showingPicVC; // @synthesize showingPicVC=_showingPicVC;
- (void)didDismissController:(id)arg1;
- (void)cancelDismissController:(id)arg1;
- (void)beginDismissController:(id)arg1;
- (void)didPresentController:(id)arg1;
- (void)willPresentController:(id)arg1;
- (void)controller:(id)arg1 openUrlInWebPage:(id)arg2 animated:(_Bool)arg3 andExcludeHomePage:(_Bool)arg4;
- (void)resetStatusBarStyle:(id)arg1;
- (void)updateStatusBarStyle:(id)arg1;
- (void)updateStatusBarHidden:(id)arg1;
- (void)setStatusBarStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)setStatusBarHidden:(_Bool)arg1 withAnimation:(long long)arg2;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)viewForPicVC;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

