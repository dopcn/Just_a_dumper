//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseViewController.h"

#import "FMShareUIComponentDelegate-Protocol.h"
#import "TBCVVideoPlaybackContext-Protocol.h"
#import "TBCVVideoPlaybackViewDataSource-Protocol.h"
#import "TBCVVideoPlaybackViewDelegate-Protocol.h"
#import "TBCVVideoPlaybakBottomViewDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class FMShareUIComponent, NSArray, NSString, TBCBaseModel, TBCCommonZanModel, TBCFavoriateModel, TBCPersonalInfoModel, TBCVVideoPlaybackTransitionManager, TBCVVideoPlaybackView, TBCVVideoPlaybakBottomView, UISwipeGestureRecognizer, UIView;
@protocol TBCVVideoPlaybackContextDelegate;

@interface TBCVVideoPlaybackViewController : TBCBaseViewController <TBCVVideoPlaybackViewDataSource, TBCVVideoPlaybackViewDelegate, UINavigationControllerDelegate, TBCVVideoPlaybakBottomViewDelegate, FMShareUIComponentDelegate, TBCVVideoPlaybackContext>
{
    _Bool _isCancelTransition;
    _Bool _useCustomTransition;
    id <TBCVVideoPlaybackContextDelegate> _delegate;
    NSArray *_playdataArray;
    NSArray *_playdataItems;
    long long _playingIndex;
    TBCVVideoPlaybackTransitionManager *_transitionManager;
    TBCVVideoPlaybackView *_playbackView;
    UIView *_transitionViewSnapshot;
    UIView *_snapshotView;
    UIView *_transitionView;
    TBCVVideoPlaybakBottomView *_bottomView;
    UIView *_coverView;
    UISwipeGestureRecognizer *_rightHalfSwipeGR;
    unsigned long long _enterPosition;
    TBCBaseModel *_checkRealNameModel;
    TBCPersonalInfoModel *_followModel;
    TBCCommonZanModel *_likeModel;
    TBCFavoriateModel *_favoriteModel;
    FMShareUIComponent *_component;
}

+ (void)load;
@property(retain, nonatomic) FMShareUIComponent *component; // @synthesize component=_component;
@property(retain, nonatomic) TBCFavoriateModel *favoriteModel; // @synthesize favoriteModel=_favoriteModel;
@property(retain, nonatomic) TBCCommonZanModel *likeModel; // @synthesize likeModel=_likeModel;
@property(retain, nonatomic) TBCPersonalInfoModel *followModel; // @synthesize followModel=_followModel;
@property(retain, nonatomic) TBCBaseModel *checkRealNameModel; // @synthesize checkRealNameModel=_checkRealNameModel;
@property(nonatomic) unsigned long long enterPosition; // @synthesize enterPosition=_enterPosition;
@property(retain, nonatomic) UISwipeGestureRecognizer *rightHalfSwipeGR; // @synthesize rightHalfSwipeGR=_rightHalfSwipeGR;
@property(nonatomic) _Bool useCustomTransition; // @synthesize useCustomTransition=_useCustomTransition;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) TBCVVideoPlaybakBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) _Bool isCancelTransition; // @synthesize isCancelTransition=_isCancelTransition;
@property(nonatomic) __weak UIView *transitionView; // @synthesize transitionView=_transitionView;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) UIView *transitionViewSnapshot; // @synthesize transitionViewSnapshot=_transitionViewSnapshot;
@property(retain, nonatomic) TBCVVideoPlaybackView *playbackView; // @synthesize playbackView=_playbackView;
@property(nonatomic) __weak TBCVVideoPlaybackTransitionManager *transitionManager; // @synthesize transitionManager=_transitionManager;
@property(nonatomic) long long playingIndex; // @synthesize playingIndex=_playingIndex;
@property(copy, nonatomic) NSArray *playdataItems; // @synthesize playdataItems=_playdataItems;
@property(copy, nonatomic) NSArray *playdataArray; // @synthesize playdataArray=_playdataArray;
@property(nonatomic) __weak id <TBCVVideoPlaybackContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)handlePanGesture:(id)arg1;
- (void)handelTapGesture:(id)arg1;
- (void)rightHalfSwipeAction:(id)arg1;
- (void)playbackButtomViewTouchCancle;
- (void)dissmissBottomView;
- (void)showBottomView;
- (void)playbackButtomViewTouchEvent:(unsigned long long)arg1;
- (_Bool)isCurrentVideoFavorited;
- (_Bool)checkLogin;
- (_Bool)checkNetwork;
- (_Bool)checkNetworkWithToast;
- (void)delayShowFavoriteRequestStatus:(_Bool)arg1;
- (void)handleRemoveFavoriteWithModel:(id)arg1 videoInfo:(id)arg2;
- (void)handleAddFavoriteWithModel:(id)arg1 videoInfo:(id)arg2;
- (void)collectVideo;
- (void)reportVideo;
- (void)favorVideo;
- (void)personFollowUpdate:(id)arg1;
- (void)followAuthor;
- (void)pushToActivity;
- (void)pushToUserCenter;
- (void)pushToPB:(_Bool)arg1;
- (void)videoPlaybackView:(id)arg1 didTouchedAssistViewForType:(unsigned long long)arg2;
- (_Bool)videoPlaybackView:(id)arg1 shouldTouchAssistViewForType:(unsigned long long)arg2;
- (void)loadVideoDetail:(id)arg1;
- (void)videoPlaybackView:(id)arg1 playVideoIndex:(long long)arg2;
- (void)videoPlaybackView:(id)arg1 clickMoreButton:(id)arg2;
- (void)videoPlaybackView:(id)arg1 clickBackButton:(id)arg2;
- (_Bool)prefersStatusBarHidden;
- (long long)videoPlaybackIndexForPlaybackView:(id)arg1;
- (id)videoInfoForPlaybackView:(id)arg1;
- (void)reloadData;
- (void)addNotifacations;
- (void)removeNotifications;
- (void)reloadVideoOtherInfo:(id)arg1;
- (void)addBottomView;
- (void)addSwipeGesture;
- (void)initUI;
- (void)resetStatusBar:(_Bool)arg1;
- (void)hideStatusBar:(_Bool)arg1;
- (void)resetNavigationBar:(_Bool)arg1;
- (void)hideNavigationBar:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)originThreadInfoWithVideoInfo:(id)arg1;
- (void)handleClickInsideRepostImageView:(id)arg1;
- (id)createForumShareContentWithType:(int)arg1 shareContent:(id)arg2;
- (id)contentForType:(int)arg1;
- (void)shareVideo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

