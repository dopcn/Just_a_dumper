//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "SYMediaPlayerDisplayable-Protocol.h"
#import "TYPagerControllerDataSource-Protocol.h"

@class IMYCaptionView, NSArray, NSMutableDictionary, NSString, TYTabButtonPagerController, UIViewController;

@interface SYMusicAlbumContainerVC : IMYPublicBaseViewController <TYPagerControllerDataSource, SYMediaPlayerDisplayable>
{
    _Bool isFirstMediaVC;
    NSString *_source;
    TYTabButtonPagerController *_pagerController;
    long long _currentIndex;
    NSArray *_columns;
    UIViewController *_playerVC;
    IMYCaptionView *_captionView;
    NSMutableDictionary *_viewControllers;
}

@property(retain) NSMutableDictionary *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) UIViewController *playerVC; // @synthesize playerVC=_playerVC;
@property(retain, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) TYTabButtonPagerController *pagerController; // @synthesize pagerController=_pagerController;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) _Bool isFirstMediaVC; // @synthesize isFirstMediaVC;
- (void).cxx_destruct;
- (id)pagerController:(id)arg1 controllerForIndex:(long long)arg2;
- (id)pagerController:(id)arg1 titleForIndex:(long long)arg2;
- (long long)numberOfControllersInPagerController;
- (void)showMiniPlayer;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)albumViewControllerAtIndex:(long long)arg1;
- (void)addPagerController;
- (void)setupData;
- (id)emptyModel;
- (void)viewDidLoad;
- (_Bool)enableFullPopGestureRecognizer;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

