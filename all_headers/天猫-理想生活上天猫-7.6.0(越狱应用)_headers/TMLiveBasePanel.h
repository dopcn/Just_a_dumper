//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMLiveBaseComponent.h"

#import "NIFAEKeyboardView_HDelegate-Protocol.h"
#import "TMBarrageEventDelegate-Protocol.h"
#import "TMLiveCommodityViewDelegate-Protocol.h"
#import "TMLiveSkinManagerDelegate-Protocol.h"
#import "TMPlayerGoodsViewDelegate-Protocol.h"
#import "ThumbUpViewDelegate-Protocol.h"

@class NIFAEKeyboardView_H, NIFAEShowView, NIFThumbUpView, NSString, TMBarrageView, TMLiveBuyButton, TMLiveCommodityView, TMLivePlayerModel, TMLiveSkinManager, TMLiveStatus, TMPlayerGoodsView, UIButton, UIImageView, UILabel, UIView;
@protocol TMLiveBasePanelDelegate;

@interface TMLiveBasePanel : TMLiveBaseComponent <ThumbUpViewDelegate, TMBarrageEventDelegate, TMPlayerGoodsViewDelegate, TMLiveSkinManagerDelegate, TMLiveCommodityViewDelegate, NIFAEKeyboardView_HDelegate>
{
    _Bool _controlIsShown;
    _Bool _isSliderAway;
    id <TMLiveBasePanelDelegate> _delegate;
    TMLiveStatus *_statusModel;
    TMLivePlayerModel *_liveModel;
    UIImageView *_shadowView;
    UIButton *_backButton;
    UILabel *_videoTypeLabel;
    UILabel *_videoTitle;
    UILabel *_roomIdLabel;
    UIButton *_shareButton;
    UIButton *_moreButton;
    UIButton *_columnButton;
    UIButton *_resolutionButton;
    TMBarrageView *_barrageView;
    NIFAEKeyboardView_H *_kissView;
    NIFAEShowView *_kissShowView;
    TMPlayerGoodsView *_goodList;
    UIView *_sliderView;
    TMLiveBuyButton *_buyButton;
    TMLiveCommodityView *_commodityTipView;
    NIFThumbUpView *_thumbUpView;
    long long _likeCount;
    UIView *_testLine;
    UIImageView *_nineGridButton;
    UILabel *_nineGridLabel;
    TMLiveSkinManager *_skinManager;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) TMLiveSkinManager *skinManager; // @synthesize skinManager=_skinManager;
@property(retain, nonatomic) UILabel *nineGridLabel; // @synthesize nineGridLabel=_nineGridLabel;
@property(retain, nonatomic) UIImageView *nineGridButton; // @synthesize nineGridButton=_nineGridButton;
@property(retain, nonatomic) UIView *testLine; // @synthesize testLine=_testLine;
@property(nonatomic) _Bool isSliderAway; // @synthesize isSliderAway=_isSliderAway;
@property(nonatomic) _Bool controlIsShown; // @synthesize controlIsShown=_controlIsShown;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) NIFThumbUpView *thumbUpView; // @synthesize thumbUpView=_thumbUpView;
@property(retain, nonatomic) TMLiveCommodityView *commodityTipView; // @synthesize commodityTipView=_commodityTipView;
@property(retain, nonatomic) TMLiveBuyButton *buyButton; // @synthesize buyButton=_buyButton;
@property(retain, nonatomic) UIView *sliderView; // @synthesize sliderView=_sliderView;
@property(retain, nonatomic) TMPlayerGoodsView *goodList; // @synthesize goodList=_goodList;
@property(retain, nonatomic) NIFAEShowView *kissShowView; // @synthesize kissShowView=_kissShowView;
@property(retain, nonatomic) NIFAEKeyboardView_H *kissView; // @synthesize kissView=_kissView;
@property(retain, nonatomic) TMBarrageView *barrageView; // @synthesize barrageView=_barrageView;
@property(retain, nonatomic) UIButton *resolutionButton; // @synthesize resolutionButton=_resolutionButton;
@property(retain, nonatomic) UIButton *columnButton; // @synthesize columnButton=_columnButton;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UILabel *roomIdLabel; // @synthesize roomIdLabel=_roomIdLabel;
@property(retain, nonatomic) UILabel *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(retain, nonatomic) UILabel *videoTypeLabel; // @synthesize videoTypeLabel=_videoTypeLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) TMLivePlayerModel *liveModel; // @synthesize liveModel=_liveModel;
@property(retain, nonatomic) TMLiveStatus *statusModel; // @synthesize statusModel=_statusModel;
@property __weak id <TMLiveBasePanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestCommentListDataWithCid:(id)arg1;
- (void)requestPraiseCountWithCid:(id)arg1;
- (void)tm_commodityView:(id)arg1 showGoodDetail:(id)arg2;
- (void)skinManager:(id)arg1 didLoadSkinForType:(long long)arg2;
- (void)loadSkinInfo;
- (void)tm_goodView:(id)arg1 getFirstGoodItem:(id)arg2;
- (void)enterBtnClickWithModel:(id)arg1;
- (void)toyBtnClicked:(id)arg1;
- (struct CGPoint)showViewPoint;
- (void)observeKissViewComeOn;
- (void)observeNineGridComeOn;
- (void)nineGridButtonHandlePan:(id)arg1;
- (void)nineGridButtonPress:(id)arg1;
- (void)createNineGridView;
- (void)thumbUpUpdataClickNums:(long long)arg1;
- (void)updatePraiseCount:(long long)arg1;
- (void)thumbUpClick;
- (void)showGoodView;
- (void)showCommodityTip:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setGoodsCount:(id)arg1;
- (id)getDefinitionStr;
- (void)definitionButtonChanged:(id)arg1;
- (void)goodsButtonClicked:(id)arg1;
- (void)resolutionButtonClicked:(id)arg1;
- (void)columnButtonClicked:(id)arg1;
- (void)shareButtonClicked:(id)arg1;
- (void)moreButtonClicked:(id)arg1;
- (void)backButtonClicked:(id)arg1;
- (void)sliderAway:(_Bool)arg1;
- (void)adjustStateWithControlDisplay:(_Bool)arg1;
- (void)updateWithLiveModel:(id)arg1;
- (void)layoutWithMasnary;
- (id)initWithLiveModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

