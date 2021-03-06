//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;
@protocol IGDimmedOverlayViewControllerDelegate;

@interface IGDimmedOverlayViewController : UIViewController
{
    UIView *_grayOverlayView;
    id <IGDimmedOverlayViewControllerDelegate> _delegate;
    long long _statusBarStyle;
}

@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) __weak id <IGDimmedOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleViewSwipedDown;
- (void)handleGrayOverlayViewTapped;
- (void)setDimmedOverlayAlpha:(double)arg1;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

