//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class UIButton;

@interface CTPCNavigationController : UINavigationController
{
    UIButton *_loadingButton;
}

@property(retain, nonatomic) UIButton *loadingButton; // @synthesize loadingButton=_loadingButton;
- (void).cxx_destruct;
- (void)stopNavigationBarLeftLoading;
- (void)showNavigationBarLeftLoading;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;

@end

