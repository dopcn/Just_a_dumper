//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QLBaseViewController.h"

#import "QLJumpObjectOpenUrlDelegate-Protocol.h"
#import "QLLiveQAGameTopViewProtocol-Protocol.h"
#import "QLPlayerViewControllerDelegate-Protocol.h"
#import "QLQAGameLiveManagerDelegate-Protocol.h"

@class NSString, QLPlayerViewController, QLQAGameLiveManager;
@protocol QLQAGameLiveViewControllerActionDelegate;

@interface QLQAGameLiveViewController : QLBaseViewController <QLQAGameLiveManagerDelegate, QLPlayerViewControllerDelegate, QLJumpObjectOpenUrlDelegate, QLLiveQAGameTopViewProtocol>
{
    _Bool _viewAppear;
    _Bool _isLoadDataSuccess;
    id <QLQAGameLiveViewControllerActionDelegate> _actionDelegate;
    QLQAGameLiveManager *_liveDetailManager;
    QLPlayerViewController *_playerController;
    long long _retryInterval;
}

+ (_Bool)OpenJumpUrlWithobject;
@property(nonatomic) _Bool isLoadDataSuccess; // @synthesize isLoadDataSuccess=_isLoadDataSuccess;
@property(nonatomic) _Bool viewAppear; // @synthesize viewAppear=_viewAppear;
@property(nonatomic) long long retryInterval; // @synthesize retryInterval=_retryInterval;
@property(retain, nonatomic) QLPlayerViewController *playerController; // @synthesize playerController=_playerController;
@property(retain, nonatomic) QLQAGameLiveManager *liveDetailManager; // @synthesize liveDetailManager=_liveDetailManager;
@property(nonatomic) __weak id <QLQAGameLiveViewControllerActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void).cxx_destruct;
- (_Bool)isLiveQAGameViewController;
- (void)showLiveContent:(long long)arg1;
- (void)shouldShowLoadingView:(_Bool)arg1;
- (void)shouldShowErrorViewWithError:(id)arg1;
- (void)loadMainData;
- (void)tryToDismissViewControllerWithLiveStatus:(long long)arg1;
- (void)playerOnBackClicked:(id)arg1;
- (void)startCreatePlayerToPlay;
- (void)resetRetryInterval;
- (void)retryDown:(id)arg1;
- (void)backClicked:(id)arg1;
- (void)popUp:(_Bool)arg1;
- (void)updateNavBarShowState;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)imageForError:(id)arg1;
- (_Bool)responseDragbackAtScreenPoint:(struct CGPoint)arg1;
- (unsigned long long)pageViewUIStyle;
- (long long)qlStausBarStyle;
- (_Bool)hideTabBarWhenPushed;
- (void)jumpToLiveQAGame:(id)arg1 liveQAGame:(id)arg2;
- (void)openQAGamePlayerWithLiveModel:(id)arg1;
- (void)createDetailManagerWithFinishedLoadedModel:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

