//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDSBaseViewController.h"

#import "WDSShopCardGoodsViewDelegate-Protocol.h"

@class GLAbilityView, NSMutableArray, NSString, UIButton, UIScrollView, UIView, WDImageView, WDSHomeHeadData, WDSShopCardGoodsView, WDSShopCardView, WDSShopData, WDSStarsView;

@interface WDSShopCardEditViewController : WDSBaseViewController <WDSShopCardGoodsViewDelegate>
{
    _Bool _isTagsClick;
    _Bool _isHideToast;
    _Bool _isUpdateGoods;
    UIButton *_shopLogoButton;
    UIView *_cardView;
    UIScrollView *_scrollView;
    NSMutableArray *_imageArray;
    WDSShopCardView *_contentCardView;
    WDSShopData *_sceShopEData;
    WDImageView *_shopLogoImageView;
    WDSShopCardGoodsView *_imagesSelectView;
    GLAbilityView *_shopTimeView;
    GLAbilityView *_noteView;
    GLAbilityView *_nameView;
    WDSHomeHeadData *_headData;
    WDSStarsView *_starsView;
    GLAbilityView *_rateView;
}

@property(nonatomic) _Bool isUpdateGoods; // @synthesize isUpdateGoods=_isUpdateGoods;
@property(nonatomic) _Bool isHideToast; // @synthesize isHideToast=_isHideToast;
@property(nonatomic) _Bool isTagsClick; // @synthesize isTagsClick=_isTagsClick;
@property(retain, nonatomic) GLAbilityView *rateView; // @synthesize rateView=_rateView;
@property(retain, nonatomic) WDSStarsView *starsView; // @synthesize starsView=_starsView;
@property(retain, nonatomic) WDSHomeHeadData *headData; // @synthesize headData=_headData;
@property(retain, nonatomic) GLAbilityView *nameView; // @synthesize nameView=_nameView;
@property(retain, nonatomic) GLAbilityView *noteView; // @synthesize noteView=_noteView;
@property(retain, nonatomic) GLAbilityView *shopTimeView; // @synthesize shopTimeView=_shopTimeView;
@property(retain, nonatomic) WDSShopCardGoodsView *imagesSelectView; // @synthesize imagesSelectView=_imagesSelectView;
@property(retain, nonatomic) WDImageView *shopLogoImageView; // @synthesize shopLogoImageView=_shopLogoImageView;
@property(retain, nonatomic) WDSShopData *sceShopEData; // @synthesize sceShopEData=_sceShopEData;
@property(retain, nonatomic) WDSShopCardView *contentCardView; // @synthesize contentCardView=_contentCardView;
@property(retain, nonatomic) NSMutableArray *imageArray; // @synthesize imageArray=_imageArray;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) UIButton *shopLogoButton; // @synthesize shopLogoButton=_shopLogoButton;
- (void).cxx_destruct;
- (id)wdleftButtonForTitle:(id)arg1 frame:(struct CGRect)arg2 isShowRightBorder:(_Bool)arg3;
- (id)getStringValue:(id)arg1;
- (id)getCardItemsUrlList;
- (id)getItemID:(id)arg1;
- (id)getCardItemsList;
- (_Bool)validateCellCanEditWithField:(id)arg1;
- (_Bool)validateCellCanEdit:(id)arg1 currfield:(id)arg2 reason:(id *)arg3;
- (void)setupUI;
- (void)setupShopCardData;
- (void)addNotification;
- (void)reloadImageSelectView:(_Bool)arg1;
- (void)updateheadData;
- (void)showMessageWithError:(id)arg1;
- (void)handleErrorMessage:(id)arg1 content:(id)arg2;
- (void)getShopCardDetail;
- (void)toShopAnnouncement:(long long)arg1;
- (void)wdgotoButtonClicked:(long long)arg1;
- (void)uploadAvatarUrl:(id)arg1 logo:(id)arg2;
- (void)updateAction:(id)arg1;
- (void)shopLogoButtonClick;
- (void)uploadCardItemsListToServerWithSuccess:(CDUnknownBlockType)arg1;
- (void)getUniqueItem:(id)arg1;
- (void)wdDraggableContainerView:(id)arg1 lastButtonClicked:(id)arg2;
- (void)didHearWhisper:(id)arg1 words:(id)arg2 contextInfo:(id)arg3 justOneTime:(_Bool)arg4;
- (void)showAlertView:(long long)arg1;
- (void)reloadGoodsView:(long long)arg1;
- (void)deleteGoodsData:(id)arg1;
- (void)loadShopData:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)parseBusParams:(id)arg1 isInit:(_Bool)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

