//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BSBaseViewController.h"

#import "DictClassifiedScrollViewDelegate-Protocol.h"
#import "DictHomeTopQueryViewDelegate-Protocol.h"
#import "DictSeeWorldViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "YDDHomeQueryViewDelegate-Protocol.h"

@class DictClassifiedScrollView, DictSeeWorldViewController, NSArray, NSMutableArray, NSString, UIScrollView, YDDBriefHomeView, YDDHomeQueryView, YDInfoLineTableViewController;

@interface DictHomeViewController : BSBaseViewController <DictHomeTopQueryViewDelegate, UIScrollViewDelegate, DictClassifiedScrollViewDelegate, DictSeeWorldViewControllerDelegate, UIGestureRecognizerDelegate, YDDHomeQueryViewDelegate>
{
    _Bool _willShowSubscribeColumn;
    DictClassifiedScrollView *_classifiedScrollView;
    UIScrollView *_contentView;
    NSArray *_hotColumns;
    CDUnknownBlockType _voiceQueryClicked;
    CDUnknownBlockType _moreButtonClicked;
    YDDHomeQueryView *_queryView;
    double _lastAnimationValue;
    NSMutableArray *_contentVCArrays;
    YDInfoLineTableViewController *_needScrollToTopPage;
    DictSeeWorldViewController *_seeWorldVC;
    double _classifiedScrollViewFromSeeWordAlpha;
    YDDBriefHomeView *_briefHomeView;
}

@property(retain, nonatomic) YDDBriefHomeView *briefHomeView; // @synthesize briefHomeView=_briefHomeView;
@property(nonatomic) _Bool willShowSubscribeColumn; // @synthesize willShowSubscribeColumn=_willShowSubscribeColumn;
@property(nonatomic) double classifiedScrollViewFromSeeWordAlpha; // @synthesize classifiedScrollViewFromSeeWordAlpha=_classifiedScrollViewFromSeeWordAlpha;
@property(retain, nonatomic) DictSeeWorldViewController *seeWorldVC; // @synthesize seeWorldVC=_seeWorldVC;
@property(retain, nonatomic) YDInfoLineTableViewController *needScrollToTopPage; // @synthesize needScrollToTopPage=_needScrollToTopPage;
@property(retain, nonatomic) NSMutableArray *contentVCArrays; // @synthesize contentVCArrays=_contentVCArrays;
@property(nonatomic) double lastAnimationValue; // @synthesize lastAnimationValue=_lastAnimationValue;
@property(retain, nonatomic) YDDHomeQueryView *queryView; // @synthesize queryView=_queryView;
@property(copy, nonatomic) CDUnknownBlockType moreButtonClicked; // @synthesize moreButtonClicked=_moreButtonClicked;
@property(copy, nonatomic) CDUnknownBlockType voiceQueryClicked; // @synthesize voiceQueryClicked=_voiceQueryClicked;
@property(retain, nonatomic) NSArray *hotColumns; // @synthesize hotColumns=_hotColumns;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) DictClassifiedScrollView *classifiedScrollView; // @synthesize classifiedScrollView=_classifiedScrollView;
- (void).cxx_destruct;
- (void)updateOcrCount;
- (void)registerAdWebNotifications;
- (void)displayLaunchPopupViewAndIcon;
- (void)displayBriefHomeEntranceButton;
- (void)jumpToResultViewControllerAndVoiceRecognize;
- (id)jumpToResultViewController;
- (void)pauseVideoPlayer;
- (void)quickSearchButtonTapped;
- (id)scrollToTopView;
- (void)setScrollToTopViewShowing:(_Bool)arg1;
- (void)updateBriefViewState;
- (void)moreButtonTapped;
- (void)labelTappedWithIndex:(long long)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)infolineTableViewDidEndDecelerating:(id)arg1;
- (void)infolineTableViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)shouldBiginHideClassifiedViewWithAlpha:(double)arg1;
- (void)didTapQueryTextField;
- (void)didTapVoiceButton;
- (void)didTapCameraButton;
- (void)showSubscribeColumn;
- (void)queryWord:(id)arg1 lang:(int)arg2;
- (void)voiceQuery;
- (void)queryWord;
- (void)OCR;
- (void)setSubControllerScrollToTop;
- (void)refreshSeeWorldViewController;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)setScrollToTopWithTableViewIndex:(long long)arg1;
- (long long)statusBarStyle;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)logJumpToResulitViewControllerWithSource:(id)arg1;
- (void)logColumnShowWithName:(id)arg1 position:(id)arg2 type:(id)arg3 changeMode:(id)arg4;
- (void)logAllColumnTapped;
- (void)logScrollToTopWithType:(id)arg1;
- (void)logCameraTapped;
- (void)updateHotColumns;
- (void)updateInfolineAuto;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

