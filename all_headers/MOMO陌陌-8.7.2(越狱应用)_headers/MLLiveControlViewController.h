//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MLBroadcastBaseViewController.h"

#import "MLLiveControlMessageViewDelegate-Protocol.h"

@class MLLeftBackgroundView, MLLeftContainerView, NSString;

@interface MLLiveControlViewController : MLBroadcastBaseViewController <MLLiveControlMessageViewDelegate>
{
    CDUnknownBlockType _showCardBlockByMessage;
    CDUnknownBlockType _viewAnimationFinishBlock;
    MLLeftContainerView *_leftContainerView;
    MLLeftBackgroundView *_leftBackgroundView;
}

@property(retain, nonatomic) MLLeftBackgroundView *leftBackgroundView; // @synthesize leftBackgroundView=_leftBackgroundView;
@property(retain, nonatomic) MLLeftContainerView *leftContainerView; // @synthesize leftContainerView=_leftContainerView;
@property(copy, nonatomic) CDUnknownBlockType viewAnimationFinishBlock; // @synthesize viewAnimationFinishBlock=_viewAnimationFinishBlock;
@property(copy, nonatomic) CDUnknownBlockType showCardBlockByMessage; // @synthesize showCardBlockByMessage=_showCardBlockByMessage;
- (void).cxx_destruct;
- (void)addMessage:(id)arg1;
- (void)endSwipeLiveControlView:(double)arg1;
- (void)swipeLiveControlView:(struct CGPoint)arg1;
- (void)getHeaderViewDataError:(id)arg1;
- (void)getHeaderViewDataFail:(id)arg1;
- (void)getHeaderViewDataSuccess:(id)arg1;
- (void)loadHeaderViewDataWithRoomId:(id)arg1;
- (void)showUserCardByMomoid:(id)arg1;
- (void)hideViewAnimation;
- (void)setupUI;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

