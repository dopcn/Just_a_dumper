//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DEFBaseViewController.h"

@class DEFHomePageExplorationViewController, DEFHomePageHeaderPicassoViewModel, DEFPicassoViewModel, NSArray, PicassoInput, PicassoView;

@interface DEFHomePageHeaderPicassoViewController : DEFBaseViewController
{
    _Bool _isHomeHeaderRBTPicasso;
    _Bool _mgeViewActionExecute;
    DEFHomePageHeaderPicassoViewModel *_viewModel;
    double _viewHeight;
    DEFHomePageExplorationViewController *_explorationViewController;
    PicassoView *_picassoView;
    DEFPicassoViewModel *_picassoViewModel;
    PicassoInput *_picassoInput;
    double _webviewHeight;
    double _picassoViewHeight;
    NSArray *_viewGAUserInfos;
    double _time;
}

@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic, getter=isMgeViewActionExecuted) _Bool mgeViewActionExecute; // @synthesize mgeViewActionExecute=_mgeViewActionExecute;
@property(copy, nonatomic) NSArray *viewGAUserInfos; // @synthesize viewGAUserInfos=_viewGAUserInfos;
@property(nonatomic) _Bool isHomeHeaderRBTPicasso; // @synthesize isHomeHeaderRBTPicasso=_isHomeHeaderRBTPicasso;
@property(nonatomic) double picassoViewHeight; // @synthesize picassoViewHeight=_picassoViewHeight;
@property(nonatomic) double webviewHeight; // @synthesize webviewHeight=_webviewHeight;
@property(retain, nonatomic) PicassoInput *picassoInput; // @synthesize picassoInput=_picassoInput;
@property(retain, nonatomic) DEFPicassoViewModel *picassoViewModel; // @synthesize picassoViewModel=_picassoViewModel;
@property(retain, nonatomic) PicassoView *picassoView; // @synthesize picassoView=_picassoView;
@property(retain, nonatomic) DEFHomePageExplorationViewController *explorationViewController; // @synthesize explorationViewController=_explorationViewController;
@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(readonly, nonatomic) DEFHomePageHeaderPicassoViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (double)getPicassoViewHeightWithPicassoInput:(id)arg1;
- (void)removeWebview;
- (void)addWebview;
- (void)removePicassoView;
- (void)addPicassoView;
- (_Bool)p_isOnScreen;
- (void)mgeViewActionIfNeeded;
- (void)viewDidLoad;
- (id)init;

@end

