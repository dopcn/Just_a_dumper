//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OTSBase/OTSVC.h>

#import "ActivityShopCarViewToCartDelegate-Protocol.h"
#import "OTSMaskDelegate-Protocol.h"
#import "OTSPresentControllerDelegate-Protocol.h"
#import "PromotionCategoryFilterViewDelegate-Protocol.h"
#import "PromotionDetailCellDelegate-Protocol.h"
#import "PromotionDetailGiftCellDelegate-Protocol.h"
#import "PromotionDetailGiftListCellDelegate-Protocol.h"
#import "PromotionDetailHeaderDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "YHDBuoyCartViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSMutableArray, NSNumber, NSString, OTSCollectionView, OTSGifNilView, OTSListFooterView, OTSMask, OTSNC, OTSSearchPriceRange, OTSSearchProductsResultVO, PromotionCategoryFilterView, PromotionDetailHeader, PromotionDetailLogic, PromotionLevelView, UIImageView, UIView, YHDPromotionActivityShopCarView, YHDPromotionListFilterVC;

@interface PromotionBaseVC : OTSVC <UICollectionViewDataSource, UICollectionViewDelegate, OTSPresentControllerDelegate, PromotionDetailHeaderDelegate, PromotionCategoryFilterViewDelegate, OTSMaskDelegate, PromotionDetailCellDelegate, ActivityShopCarViewToCartDelegate, PromotionDetailGiftListCellDelegate, PromotionDetailGiftCellDelegate, YHDBuoyCartViewDelegate>
{
    _Bool _loadingMore;
    _Bool _filterExpanded;
    _Bool _isPresent;
    float _starContentOffsetY;
    NSMutableArray *_exchangePromotionDataArray;
    PromotionDetailLogic *_promotionLogic;
    OTSCollectionView *_promotionCollectionView;
    YHDPromotionActivityShopCarView *_phoneShopCarView;
    PromotionLevelView *_levelView;
    UIView *_levelViewBgView;
    NSLayoutConstraint *_levelViewBgViewTopBottomLayoutConstraint;
    long long _pageRouteType;
    long long _currentIndex;
    NSNumber *_curSkuId;
    UIImageView *_selectedProductImage;
    NSString *_itemId;
    NSString *_detailCellReuseIdentifier;
    NSString *_exchangeGiftDetailCell;
    NSMutableArray *_giftLists;
    PromotionDetailHeader *_header;
    PromotionCategoryFilterView *_phoneCategoryFilterView;
    NSLayoutConstraint *_phoneCategoryFilterViewToSuperTop;
    NSLayoutConstraint *_phoneCategoryFilterViewHeight;
    OTSGifNilView *_nilView;
    UIView *_categoryBgView;
    OTSListFooterView *_footerView;
    OTSMask *_mask;
    YHDPromotionListFilterVC *_filterVC;
    OTSNC *_filterNC;
    NSNumber *_isShowCategoryFilterView;
    long long _categoryHeadTitleSelectedIndex;
    NSString *_exchangeProductDetailcellReuseIdentifier;
    NSString *_activityDateCellReuseIdentifier;
    NSString *_titleCellReuseIdentifierNN;
    NSString *_titleCellReuseIdentifier;
    NSString *_giftCellReuseIdentifier;
    NSString *_headerReuseIdentifier;
    NSString *_footerReuseIdentifier;
    NSString *_giftListCellReuseIdentifier;
    NSString *_cutTitleDateCVCellReuseIdentifier;
    OTSSearchPriceRange *_selectedPriceRange;
    OTSSearchProductsResultVO *_productsResult;
    NSLayoutConstraint *_gifTopConstraint;
    NSLayoutConstraint *_nilViewTopCons;
}

@property(nonatomic) _Bool isPresent; // @synthesize isPresent=_isPresent;
@property(retain, nonatomic) NSLayoutConstraint *nilViewTopCons; // @synthesize nilViewTopCons=_nilViewTopCons;
@property(retain, nonatomic) NSLayoutConstraint *gifTopConstraint; // @synthesize gifTopConstraint=_gifTopConstraint;
@property(retain, nonatomic) OTSSearchProductsResultVO *productsResult; // @synthesize productsResult=_productsResult;
@property(retain, nonatomic) OTSSearchPriceRange *selectedPriceRange; // @synthesize selectedPriceRange=_selectedPriceRange;
@property(retain, nonatomic) NSString *cutTitleDateCVCellReuseIdentifier; // @synthesize cutTitleDateCVCellReuseIdentifier=_cutTitleDateCVCellReuseIdentifier;
@property(retain, nonatomic) NSString *giftListCellReuseIdentifier; // @synthesize giftListCellReuseIdentifier=_giftListCellReuseIdentifier;
@property(retain, nonatomic) NSString *footerReuseIdentifier; // @synthesize footerReuseIdentifier=_footerReuseIdentifier;
@property(retain, nonatomic) NSString *headerReuseIdentifier; // @synthesize headerReuseIdentifier=_headerReuseIdentifier;
@property(retain, nonatomic) NSString *giftCellReuseIdentifier; // @synthesize giftCellReuseIdentifier=_giftCellReuseIdentifier;
@property(retain, nonatomic) NSString *titleCellReuseIdentifier; // @synthesize titleCellReuseIdentifier=_titleCellReuseIdentifier;
@property(retain, nonatomic) NSString *titleCellReuseIdentifierNN; // @synthesize titleCellReuseIdentifierNN=_titleCellReuseIdentifierNN;
@property(retain, nonatomic) NSString *activityDateCellReuseIdentifier; // @synthesize activityDateCellReuseIdentifier=_activityDateCellReuseIdentifier;
@property(retain, nonatomic) NSString *exchangeProductDetailcellReuseIdentifier; // @synthesize exchangeProductDetailcellReuseIdentifier=_exchangeProductDetailcellReuseIdentifier;
@property float starContentOffsetY; // @synthesize starContentOffsetY=_starContentOffsetY;
@property long long categoryHeadTitleSelectedIndex; // @synthesize categoryHeadTitleSelectedIndex=_categoryHeadTitleSelectedIndex;
@property(retain, nonatomic) NSNumber *isShowCategoryFilterView; // @synthesize isShowCategoryFilterView=_isShowCategoryFilterView;
@property(nonatomic) _Bool filterExpanded; // @synthesize filterExpanded=_filterExpanded;
@property(retain, nonatomic) OTSNC *filterNC; // @synthesize filterNC=_filterNC;
@property(retain, nonatomic) YHDPromotionListFilterVC *filterVC; // @synthesize filterVC=_filterVC;
@property(retain, nonatomic) OTSMask *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) OTSListFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *categoryBgView; // @synthesize categoryBgView=_categoryBgView;
@property(retain, nonatomic) OTSGifNilView *nilView; // @synthesize nilView=_nilView;
@property(retain, nonatomic) NSLayoutConstraint *phoneCategoryFilterViewHeight; // @synthesize phoneCategoryFilterViewHeight=_phoneCategoryFilterViewHeight;
@property(retain, nonatomic) NSLayoutConstraint *phoneCategoryFilterViewToSuperTop; // @synthesize phoneCategoryFilterViewToSuperTop=_phoneCategoryFilterViewToSuperTop;
@property(retain, nonatomic) PromotionCategoryFilterView *phoneCategoryFilterView; // @synthesize phoneCategoryFilterView=_phoneCategoryFilterView;
@property(retain, nonatomic) PromotionDetailHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) NSMutableArray *giftLists; // @synthesize giftLists=_giftLists;
@property(retain, nonatomic) NSString *exchangeGiftDetailCell; // @synthesize exchangeGiftDetailCell=_exchangeGiftDetailCell;
@property(retain, nonatomic) NSString *detailCellReuseIdentifier; // @synthesize detailCellReuseIdentifier=_detailCellReuseIdentifier;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) UIImageView *selectedProductImage; // @synthesize selectedProductImage=_selectedProductImage;
@property(retain, nonatomic) NSNumber *curSkuId; // @synthesize curSkuId=_curSkuId;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) long long pageRouteType; // @synthesize pageRouteType=_pageRouteType;
@property(nonatomic) _Bool loadingMore; // @synthesize loadingMore=_loadingMore;
@property(retain, nonatomic) NSLayoutConstraint *levelViewBgViewTopBottomLayoutConstraint; // @synthesize levelViewBgViewTopBottomLayoutConstraint=_levelViewBgViewTopBottomLayoutConstraint;
@property(retain, nonatomic) UIView *levelViewBgView; // @synthesize levelViewBgView=_levelViewBgView;
@property(retain, nonatomic) PromotionLevelView *levelView; // @synthesize levelView=_levelView;
@property(retain, nonatomic) YHDPromotionActivityShopCarView *phoneShopCarView; // @synthesize phoneShopCarView=_phoneShopCarView;
@property(retain, nonatomic) OTSCollectionView *promotionCollectionView; // @synthesize promotionCollectionView=_promotionCollectionView;
@property(retain, nonatomic) PromotionDetailLogic *promotionLogic; // @synthesize promotionLogic=_promotionLogic;
@property(retain, nonatomic) NSMutableArray *exchangePromotionDataArray; // @synthesize exchangePromotionDataArray=_exchangePromotionDataArray;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleNotification:(id)arg1;
- (void)loadMore;
- (void)searchProduct;
- (void)clearnbrandnamesSearchProduct;
- (void)searchAllProduct;
- (void)searchProductBySelectedSortType:(id)arg1;
- (void)searchProductBySelectedCategory:(id)arg1;
- (void)getCurrentPromotion;
- (void)rotateToInterfaceTransitionToSize;
- (id)returnPromotionDetailGiftCellWithcollectionView:(id)arg1 andIndexPath:(id)arg2;
- (id)returnPromotionDetailCellWithcollectionView:(id)arg1 andIndexPath:(id)arg2;
- (id)returnPromotionDetailGiftListCellWithcollectionView:(id)arg1 andIndexPath:(id)arg2;
- (id)returnPromotionActivityTitleCellWithcollectionView:(id)arg1 andIndexPath:(id)arg2;
- (id)returnPromotionActivityDateCellWithcollectionView:(id)arg1 andIndexPath:(id)arg2;
- (id)returnPromotionTitleDateCVCellWithcollectionView:(id)arg1 andIndexPath:(id)arg2;
- (id)titleOfSortId:(id)arg1;
- (void)addToCart:(id)arg1 indexPath:(id)arg2;
- (void)showPhoneCategoryFilterViewWithIsShowCategoryFilterView:(_Bool)arg1;
- (void)hiddenPhoneCategoryFilterView;
- (void)categoryBgViewTapAction:(id)arg1;
- (void)selectedPromotionFilterWithSortId:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)showAndhidenSearchBar:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)addExchangeProductToCar:(id)arg1;
- (void)detailCell:(id)arg1 addCartWithProductVO:(id)arg2 itemAtIndex:(id)arg3 imageView:(id)arg4;
- (void)showSelectedGiftCellItemBigProductImage:(struct CGRect)arg1;
- (void)giftListCell:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)activityShopCarViewGoToCart;
- (void)activityShopCarViewGoToObtainGift;
- (void)checkAndUpdatePrice:(id)arg1 andHighTextField:(id)arg2;
- (void)willDismissPC:(id)arg1;
- (void)didHideMask;
- (void)handleFilerData:(id)arg1;
- (void)didShowMask;
- (void)sureSelectedBrandsWithBrandName:(id)arg1 index:(id)arg2;
- (void)cancleSelectedBrands;
- (void)selectedCategoryFilterWithData:(id)arg1 indexPath:(id)arg2;
- (void)textFieldShouldClearPress;
- (void)searTextFieldShouldReturn:(id)arg1;
- (void)searTextFieldShouldBeginEditing:(id)arg1;
- (void)didSelectItemWithDataArray:(id)arg1 andIndex:(long long)arg2;
- (void)refreshPromotionCollectionViewTopBottom:(_Bool)arg1;
- (void)addSubViewLayoutConstraint;
- (void)refreshBottomCartView;
- (void)requestData;
- (void)showNilView;
- (void)refreshMainView;
- (void)promotionCollectionViewRegisterCell;
- (void)addViewLayoutConstraint;
- (void)initUI;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)pageParam;
- (id)pageID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

