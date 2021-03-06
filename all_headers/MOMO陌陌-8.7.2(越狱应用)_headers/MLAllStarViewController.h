//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MLBaseViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class MLAllStarRankViewController, MLAllStarTransitionDownIndicatorView, MLAllStarTransitionIndicatorView, MLUserCardViewController, NSString, UIVisualEffectView;

@interface MLAllStarViewController : MLBaseViewController <UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>
{
    _Bool _isRoomOwner;
    _Bool _isAdminOfCurrentUser;
    _Bool _isRoomOwnerOfCurrentUser;
    _Bool _enableConference;
    _Bool _usingCameraExtension;
    _Bool _showUserCard;
    _Bool _gestureAdded;
    int _currentDirection;
    NSString *_momoId;
    NSString *_roomId;
    NSString *_showId;
    NSString *_nickName;
    NSString *_source;
    long long _silenceSec;
    long long _kickoutSec;
    CDUnknownBlockType _didSelectRankUserHandler;
    CDUnknownBlockType _closeAllStarHandler;
    unsigned long long _connectMode;
    long long _pushType;
    MLUserCardViewController *_userCardViewController;
    MLAllStarRankViewController *_userRankViewController;
    MLAllStarTransitionIndicatorView *_transitionIndicatorView;
    UIVisualEffectView *_transitionIndicatorEffectView;
    MLAllStarTransitionDownIndicatorView *_downIndicatorView;
    UIVisualEffectView *_downIndicatorViewEffectView;
    double _beginOffsetY;
}

@property(nonatomic) _Bool gestureAdded; // @synthesize gestureAdded=_gestureAdded;
@property(nonatomic) _Bool showUserCard; // @synthesize showUserCard=_showUserCard;
@property(nonatomic) int currentDirection; // @synthesize currentDirection=_currentDirection;
@property(nonatomic) double beginOffsetY; // @synthesize beginOffsetY=_beginOffsetY;
@property(retain, nonatomic) UIVisualEffectView *downIndicatorViewEffectView; // @synthesize downIndicatorViewEffectView=_downIndicatorViewEffectView;
@property(retain, nonatomic) MLAllStarTransitionDownIndicatorView *downIndicatorView; // @synthesize downIndicatorView=_downIndicatorView;
@property(retain, nonatomic) UIVisualEffectView *transitionIndicatorEffectView; // @synthesize transitionIndicatorEffectView=_transitionIndicatorEffectView;
@property(retain, nonatomic) MLAllStarTransitionIndicatorView *transitionIndicatorView; // @synthesize transitionIndicatorView=_transitionIndicatorView;
@property(retain, nonatomic) MLAllStarRankViewController *userRankViewController; // @synthesize userRankViewController=_userRankViewController;
@property(retain, nonatomic) MLUserCardViewController *userCardViewController; // @synthesize userCardViewController=_userCardViewController;
@property(nonatomic) long long pushType; // @synthesize pushType=_pushType;
@property(nonatomic) unsigned long long connectMode; // @synthesize connectMode=_connectMode;
@property(nonatomic) _Bool usingCameraExtension; // @synthesize usingCameraExtension=_usingCameraExtension;
@property(nonatomic) _Bool enableConference; // @synthesize enableConference=_enableConference;
@property(copy, nonatomic) CDUnknownBlockType closeAllStarHandler; // @synthesize closeAllStarHandler=_closeAllStarHandler;
@property(copy, nonatomic) CDUnknownBlockType didSelectRankUserHandler; // @synthesize didSelectRankUserHandler=_didSelectRankUserHandler;
@property(nonatomic) _Bool isRoomOwnerOfCurrentUser; // @synthesize isRoomOwnerOfCurrentUser=_isRoomOwnerOfCurrentUser;
@property(nonatomic) _Bool isAdminOfCurrentUser; // @synthesize isAdminOfCurrentUser=_isAdminOfCurrentUser;
@property(nonatomic) long long kickoutSec; // @synthesize kickoutSec=_kickoutSec;
@property(nonatomic) long long silenceSec; // @synthesize silenceSec=_silenceSec;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) _Bool isRoomOwner; // @synthesize isRoomOwner=_isRoomOwner;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(copy, nonatomic) NSString *momoId; // @synthesize momoId=_momoId;
- (void).cxx_destruct;
- (void)closeAnimation;
- (void)didTapClose:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)didTap:(id)arg1;
- (void)showRankAnimationWhenTap;
- (void)showCardAnimationWhenTap;
- (void)showCardAnimation;
- (void)showRankAnimation;
- (void)gestureEndedWithHalf:(_Bool)arg1;
- (void)didPan:(id)arg1;
- (void)removeTransitionIndicatorView;
- (void)removeRankView;
- (void)showRank;
- (void)addAllStarRankView;
- (void)addTransitionIndicatorView;
- (void)addUserCardView;
- (void)addTapCloseGesture;
- (void)addGesture;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

