//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol TBNewbiePreferenceViewControllerDelegate;

@interface TBNewbiePreferenceViewController : UIViewController
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: themeStyle
    // Error parsing type: , name: _titleBarOverlayView
    // Error parsing type: , name: _titleBarSeparatorView
    // Error parsing type: , name: _titleBarView
    // Error parsing type: , name: _titleLabel
    // Error parsing type: , name: _popButton
    // Error parsing type: , name: _webView
    // Error parsing type: , name: _errorView
    // Error parsing type: , name: _activityIndicatorView
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)errorView:(id)arg1 didClickRefreshButton:(id)arg2 withEvent:(id)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)_didClickWithPopButton:(id)arg1 with:(id)arg2;
- (void)rk_willBePresentedAnimated:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
@property(nonatomic) __weak id <TBNewbiePreferenceViewControllerDelegate> delegate; // @synthesize delegate;

@end

