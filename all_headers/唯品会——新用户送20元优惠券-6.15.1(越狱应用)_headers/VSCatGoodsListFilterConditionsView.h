//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "VSCatSifterConstraintsViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, UIButton, UIImage, UIImageView, VSCatActivityView, VSCatBaseGoodsListFilterView, VSCatColligationButton, VSCatFilterViewInputParams, VSCatGoodsListFilterConditionsHandler, VSCatPopListView, VSCatSifterConstraintsView;

@interface VSCatGoodsListFilterConditionsView : UIView <VSCatSifterConstraintsViewDelegate>
{
    _Bool _tipCellAttachButtonSelected;
    _Bool _hideCloudLabels;
    VSCatFilterViewInputParams *_inputParams;
    CDUnknownBlockType _activityTagCallback;
    VSCatSifterConstraintsView *_constraintsView;
    VSCatActivityView *_activityView;
    VSCatBaseGoodsListFilterView *_filterView;
    VSCatGoodsListFilterConditionsHandler *_handler;
    NSString *_firstProductId;
    UIImage *_backgroundImage;
    CDUnknownBlockType _popListViewAction;
    VSCatColligationButton *_colligationBtn;
    NSArray *_directionImgs;
    UIView *_sifterLabelsView;
    UIView *_conditionsView;
    unsigned long long _conditionButtonsType;
    UIButton *_saleStatusBtn;
    UIButton *_stockBtn;
    UIButton *_priceBtn;
    UIButton *_agioBtn;
    UIButton *_amountBtn;
    UIButton *_sifterBtn;
    UIButton *_brandBtn;
    UIButton *_layoutBtn;
    NSDictionary *_activityInfoDict;
    unsigned long long _interactionDirection;
    unsigned long long _subviewType;
    unsigned long long _filterConditionsViewStyle;
    UIImageView *_atmosphereImageView;
    VSCatPopListView *_colligationPopListView;
}

@property(retain, nonatomic) VSCatPopListView *colligationPopListView; // @synthesize colligationPopListView=_colligationPopListView;
@property(retain, nonatomic) UIImageView *atmosphereImageView; // @synthesize atmosphereImageView=_atmosphereImageView;
@property(nonatomic) unsigned long long filterConditionsViewStyle; // @synthesize filterConditionsViewStyle=_filterConditionsViewStyle;
@property(nonatomic) unsigned long long subviewType; // @synthesize subviewType=_subviewType;
@property(nonatomic) _Bool hideCloudLabels; // @synthesize hideCloudLabels=_hideCloudLabels;
@property(nonatomic) unsigned long long interactionDirection; // @synthesize interactionDirection=_interactionDirection;
@property(nonatomic) _Bool tipCellAttachButtonSelected; // @synthesize tipCellAttachButtonSelected=_tipCellAttachButtonSelected;
@property(retain, nonatomic) NSDictionary *activityInfoDict; // @synthesize activityInfoDict=_activityInfoDict;
@property(retain, nonatomic) UIButton *layoutBtn; // @synthesize layoutBtn=_layoutBtn;
@property(retain, nonatomic) UIButton *brandBtn; // @synthesize brandBtn=_brandBtn;
@property(retain, nonatomic) UIButton *sifterBtn; // @synthesize sifterBtn=_sifterBtn;
@property(retain, nonatomic) UIButton *amountBtn; // @synthesize amountBtn=_amountBtn;
@property(retain, nonatomic) UIButton *agioBtn; // @synthesize agioBtn=_agioBtn;
@property(retain, nonatomic) UIButton *priceBtn; // @synthesize priceBtn=_priceBtn;
@property(retain, nonatomic) UIButton *stockBtn; // @synthesize stockBtn=_stockBtn;
@property(retain, nonatomic) UIButton *saleStatusBtn; // @synthesize saleStatusBtn=_saleStatusBtn;
@property(nonatomic) unsigned long long conditionButtonsType; // @synthesize conditionButtonsType=_conditionButtonsType;
@property(retain, nonatomic) UIView *conditionsView; // @synthesize conditionsView=_conditionsView;
@property(retain, nonatomic) UIView *sifterLabelsView; // @synthesize sifterLabelsView=_sifterLabelsView;
@property(retain, nonatomic) NSArray *directionImgs; // @synthesize directionImgs=_directionImgs;
@property(retain, nonatomic) VSCatColligationButton *colligationBtn; // @synthesize colligationBtn=_colligationBtn;
@property(copy, nonatomic) CDUnknownBlockType popListViewAction; // @synthesize popListViewAction=_popListViewAction;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSString *firstProductId; // @synthesize firstProductId=_firstProductId;
@property(retain, nonatomic) VSCatGoodsListFilterConditionsHandler *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) VSCatBaseGoodsListFilterView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) VSCatActivityView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) VSCatSifterConstraintsView *constraintsView; // @synthesize constraintsView=_constraintsView;
@property(copy, nonatomic) CDUnknownBlockType activityTagCallback; // @synthesize activityTagCallback=_activityTagCallback;
@property(retain, nonatomic) VSCatFilterViewInputParams *inputParams; // @synthesize inputParams=_inputParams;
- (void).cxx_destruct;
- (void)updateFilterButtonsTitleColor:(unsigned long long)arg1;
- (void)updateFilterButtonsImage:(unsigned long long)arg1;
- (void)updateFilterConditionsViewStyle:(unsigned long long)arg1;
- (void)showsaleStatusBtnStatisticsHandler;
- (void)sendStatistics:(_Bool)arg1;
- (void)brandFilterCallBackWithData:(id)arg1;
- (void)initPreposedHandler;
- (void)sifterViewCallBackWtihData:(id)arg1 descripStr:(id)arg2;
- (void)sifterAction;
- (void)didSelectRecommendItemWithDictionary:(id)arg1 description:(id)arg2;
- (void)didSelectRecommendItemWithType:(long long)arg1 itemId:(id)arg2 itemName:(id)arg3;
- (void)updateSearchParams:(id)arg1;
- (void)clearFilterConditionsCalledByOutside:(_Bool)arg1;
- (void)clearButtonclicked;
- (void)refreshFilterButton;
- (id)fetchProperty:(id)arg1;
- (void)createBrandFilterView;
- (void)createSeekFilterViewWithChannelId:(id)arg1;
- (void)createFilterView;
- (void)removeConstraintsView;
- (void)removeHeaderLabelsView;
- (void)removeAdditionalView;
- (double)addFilterView;
- (double)addActivityView;
- (double)addConstraintsView;
- (double)addSifterLabelsView;
- (_Bool)p_updateViewWithType:(unsigned long long)arg1;
- (void)refreshBrandBtn:(id)arg1;
- (void)updateMainContentWithTag:(long long)arg1;
- (void)updateLayoutIconWithTag:(unsigned long long)arg1;
- (void)updateLayoutWithTag:(unsigned long long)arg1;
- (void)layoutBtnClicked:(id)arg1;
- (void)sifterBtnClicked;
- (void)brandBtnClicked;
- (void)amountBtnClicked;
- (void)agioBtnClicked;
- (void)priceBtnClicked;
- (void)stockBtnClicked;
- (void)saleStatusBtnClicked;
- (void)colligationClicked;
- (void)resetColligationButtonStatus:(_Bool)arg1;
- (void)setColligationButtonStatus:(long long)arg1;
- (void)setColligationToNormalStatus;
- (id)createNormalButtonWithtitle:(id)arg1;
- (void)updateConditionBtnsViewWithType:(unsigned long long)arg1;
- (void)addConditionBtnsViewWithType:(unsigned long long)arg1;
- (void)selectedBrandButton:(_Bool)arg1;
- (void)selectedFilterButton:(_Bool)arg1;
- (void)updateLayoutEnabled:(_Bool)arg1;
- (void)handlerSelect:(id)arg1;
- (void)hideCloudLabelsFromNowOn:(_Bool)arg1;
- (void)setupView;
- (_Bool)canShowSalesVolumeButton;
- (id)initWithFrame:(struct CGRect)arg1 inputParams:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

