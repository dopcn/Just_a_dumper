//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "KTVHomeAdvertViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class KTVBannerPageControl, KTVHomeAdvertView, KTVHomeConfigButton, KTVHomeMenuButton, NSMutableArray, NSString, NSTimer, UIScrollView;
@protocol KTVHomeHeaderViewDelegate;

@interface KTVHomeHeaderView : UIView <UIScrollViewDelegate, KTVHomeAdvertViewDelegate>
{
    UIScrollView *bannerScrollView;
    KTVBannerPageControl *pageControl;
    NSMutableArray *bannerInfoArray;
    NSTimer *_timer;
    _Bool isFirstIn;
    id <KTVHomeHeaderViewDelegate> _delegate;
    KTVHomeAdvertView *_adsView;
    KTVHomeMenuButton *_kSongBtn;
    KTVHomeMenuButton *_friendBtn;
    KTVHomeMenuButton *_mineBtn;
    KTVHomeConfigButton *_firstConfigBtn;
    KTVHomeConfigButton *_secondConfigBtn;
    UIView *_contentView;
}

@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak KTVHomeConfigButton *secondConfigBtn; // @synthesize secondConfigBtn=_secondConfigBtn;
@property(nonatomic) __weak KTVHomeConfigButton *firstConfigBtn; // @synthesize firstConfigBtn=_firstConfigBtn;
@property(nonatomic) __weak KTVHomeMenuButton *mineBtn; // @synthesize mineBtn=_mineBtn;
@property(nonatomic) __weak KTVHomeMenuButton *friendBtn; // @synthesize friendBtn=_friendBtn;
@property(nonatomic) __weak KTVHomeMenuButton *kSongBtn; // @synthesize kSongBtn=_kSongBtn;
@property(retain, nonatomic) KTVHomeAdvertView *adsView; // @synthesize adsView=_adsView;
@property(nonatomic) __weak id <KTVHomeHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)interruptAdScrolling;
- (void)startShowAds;
- (void)setAdsInfo:(id)arg1;
- (void)actionConfig:(id)arg1;
- (void)actionMine:(id)arg1;
- (void)actionFriend:(id)arg1;
- (void)actionKSong:(id)arg1;
- (void)rotateMineWithKNum:(_Bool)arg1;
- (void)updateEntrance1:(long long)arg1 entrance2:(long long)arg2;
- (void)showJudgeTipIcon:(_Bool)arg1;
- (void)showCompetetionTipIcon:(_Bool)arg1;
- (void)showNewIcon:(_Bool)arg1;
- (void)showCompetitionRedDot:(_Bool)arg1;
- (void)showFriendRedDot:(_Bool)arg1;
- (void)showFriendNum:(long long)arg1;
- (void)showJudgeRedDot:(_Bool)arg1;
- (void)showCompetitonRedDot:(_Bool)arg1;
- (void)dealloc;
- (void)goTimerScroll;
- (void)stopGoTimer;
- (void)startGoTimer;
- (void)actionBanner:(id)arg1;
- (void)setBannerInfo:(id)arg1;
- (void)adsView:(id)arg1 didClickAdsViewWithAdsInfo:(id)arg2;
- (void)homeConfigChange;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

