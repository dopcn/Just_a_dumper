//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDSBaseViewController.h"

@class WDSWeiboAuthModel;

@interface WDSWeiboAuthViewController : WDSBaseViewController
{
    _Bool isFirstInitUI;
    WDSWeiboAuthModel *_viewModel;
}

@property(retain, nonatomic) WDSWeiboAuthModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)clickUnbindWeibo;
- (void)showUnbindButton:(_Bool)arg1;
- (id)weiboAuthTopView;
- (void)showVAuthView;
- (void)showUnbindView;
- (void)initViewModel;
- (void)viewDidLoad;
- (void)parseBusParams:(id)arg1 isInit:(_Bool)arg2;

@end

