//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDNCollectionViewFlowLayoutAbstractSectionData.h"

#import "BDNPageViewDataSource-Protocol.h"
#import "BDNPageViewDelegate-Protocol.h"
#import "BDNPageViewScrollViewDelegateBridge-Protocol.h"
#import "CAAnimationDelegate-Protocol.h"

@class BDNCouponHomeHotCategoryBackgroundView, BDNFastHomeJSONModel, BDNPageView, NSArray, NSString, UIImage, UIImageView, YYAnimatedImageView;

@interface BDNCouponHomeHotCategorySectionData : BDNCollectionViewFlowLayoutAbstractSectionData <CAAnimationDelegate, BDNPageViewDataSource, BDNPageViewDelegate, BDNPageViewScrollViewDelegateBridge>
{
    _Bool _showedUserGuide;
    _Bool _showingUserGuide;
    _Bool _showingUserGuideAnimation;
    _Bool _userGuideInterrupted;
    _Bool _userGuidePhase0Finished;
    _Bool _userGuidePhase1Finished;
    _Bool _pageViewOnTouch;
    _Bool _shouldTryStartGuideOnTouchEnded;
    _Bool _promotionConfigLoaded;
    unsigned long long _promotionImageType;
    BDNFastHomeJSONModel *_data;
    NSArray *_hotCategories;
    double _topmostSearchBarHeight;
    unsigned long long _selectedPageViewPageIndex;
    CDUnknownBlockType _userGuideCallback;
    CDUnknownBlockType _userGuideCallbackForTouchEnded;
    BDNPageView *_pageView;
    BDNCouponHomeHotCategoryBackgroundView *_hotCategoryCellBackgroundView;
    UIImage *_promotionTopImage;
    UIImage *_promotionBottomImage;
    NSString *_promotionSchema;
    UIImageView *_staticTopImageView;
    YYAnimatedImageView *_staticBottomImageView;
    struct UIEdgeInsets _promotionTopImageInset;
    struct UIEdgeInsets _promotionBottomImageInset;
}

@property(retain, nonatomic) YYAnimatedImageView *staticBottomImageView; // @synthesize staticBottomImageView=_staticBottomImageView;
@property(retain, nonatomic) UIImageView *staticTopImageView; // @synthesize staticTopImageView=_staticTopImageView;
@property(copy, nonatomic) NSString *promotionSchema; // @synthesize promotionSchema=_promotionSchema;
@property(nonatomic) struct UIEdgeInsets promotionBottomImageInset; // @synthesize promotionBottomImageInset=_promotionBottomImageInset;
@property(nonatomic) struct UIEdgeInsets promotionTopImageInset; // @synthesize promotionTopImageInset=_promotionTopImageInset;
@property(retain, nonatomic) UIImage *promotionBottomImage; // @synthesize promotionBottomImage=_promotionBottomImage;
@property(retain, nonatomic) UIImage *promotionTopImage; // @synthesize promotionTopImage=_promotionTopImage;
@property(nonatomic) _Bool promotionConfigLoaded; // @synthesize promotionConfigLoaded=_promotionConfigLoaded;
@property(retain, nonatomic) BDNCouponHomeHotCategoryBackgroundView *hotCategoryCellBackgroundView; // @synthesize hotCategoryCellBackgroundView=_hotCategoryCellBackgroundView;
@property(retain, nonatomic) BDNPageView *pageView; // @synthesize pageView=_pageView;
@property(copy, nonatomic) CDUnknownBlockType userGuideCallbackForTouchEnded; // @synthesize userGuideCallbackForTouchEnded=_userGuideCallbackForTouchEnded;
@property(nonatomic) _Bool shouldTryStartGuideOnTouchEnded; // @synthesize shouldTryStartGuideOnTouchEnded=_shouldTryStartGuideOnTouchEnded;
@property(nonatomic) _Bool pageViewOnTouch; // @synthesize pageViewOnTouch=_pageViewOnTouch;
@property(copy, nonatomic) CDUnknownBlockType userGuideCallback; // @synthesize userGuideCallback=_userGuideCallback;
@property(nonatomic) _Bool userGuidePhase1Finished; // @synthesize userGuidePhase1Finished=_userGuidePhase1Finished;
@property(nonatomic) _Bool userGuidePhase0Finished; // @synthesize userGuidePhase0Finished=_userGuidePhase0Finished;
@property(nonatomic) _Bool userGuideInterrupted; // @synthesize userGuideInterrupted=_userGuideInterrupted;
@property(nonatomic) _Bool showingUserGuideAnimation; // @synthesize showingUserGuideAnimation=_showingUserGuideAnimation;
@property(nonatomic) _Bool showingUserGuide; // @synthesize showingUserGuide=_showingUserGuide;
@property(nonatomic) _Bool showedUserGuide; // @synthesize showedUserGuide=_showedUserGuide;
@property(nonatomic) unsigned long long selectedPageViewPageIndex; // @synthesize selectedPageViewPageIndex=_selectedPageViewPageIndex;
@property(nonatomic) double topmostSearchBarHeight; // @synthesize topmostSearchBarHeight=_topmostSearchBarHeight;
@property(retain, nonatomic) NSArray *hotCategories; // @synthesize hotCategories=_hotCategories;
@property(retain, nonatomic) BDNFastHomeJSONModel *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long promotionImageType; // @synthesize promotionImageType=_promotionImageType;
- (void).cxx_destruct;
- (void)updateBannerInfoConfig:(id)arg1;
- (void)updateData:(id)arg1;
- (void)startPageViewUserGuide:(CDUnknownBlockType)arg1;
- (void)skipUserGuide;
- (void)stopBackgroundImageAnimation;
- (void)startBackgroundImageAnimation;
- (void)resumeBackgroundImageAnimation;
- (void)pauseBackgroundImageAnimation;
- (void)refreshTopmostSearchBarHeight:(double)arg1;
- (double)regularizeSize:(double)arg1;
- (void)updateStaticImageOptions;
- (void)scrollViewInPageViewTouchCancelled:(id)arg1;
- (void)scrollViewInPageViewTouchEnded:(id)arg1;
- (void)scrollViewInPageViewTouchBegan:(id)arg1;
- (void)scrollViewInPageViewWillBeginDragging:(id)arg1;
- (void)hotCategoryItemButtonTapped:(id)arg1;
- (void)pageView:(id)arg1 didScrollToPageIndexRatio:(double)arg2;
- (void)pageView:(id)arg1 didScrollToViewAtIndex:(unsigned long long)arg2;
- (id)pageView:(id)arg1 viewAtIndex:(unsigned long long)arg2 reuseableView:(id)arg3;
- (id)placeholderImage;
- (unsigned long long)pageViewNumberOfPages:(id)arg1;
- (unsigned long long)hotCategoriesPageCount;
- (double)hotcategoryItemOffsetX;
- (double)hotcategoryItemWidth;
- (void)sectionCellDidEndDisplay:(id)arg1 cell:(id)arg2 forItem:(unsigned long long)arg3 originalIndexPath:(id)arg4;
- (void)sectionCellWillDisplay:(id)arg1 cell:(id)arg2 forItem:(unsigned long long)arg3 originalIndexPath:(id)arg4;
- (void)sectionCellDidSelected:(id)arg1 forItem:(unsigned long long)arg2 originalIndexPath:(id)arg3;
- (id)sectionCell:(id)arg1 forItem:(unsigned long long)arg2 originalIndexPath:(id)arg3;
- (double)sectionCellBottomSeparatorHeight:(id)arg1 forItem:(unsigned long long)arg2 originalIndexPath:(id)arg3;
- (double)sectionCellHeight:(id)arg1 forItem:(unsigned long long)arg2 originalIndexPath:(id)arg3;
- (unsigned long long)sectionItemCount:(id)arg1 forOriginalSection:(unsigned long long)arg2;
- (void)prepareLayout:(id)arg1 forOriginalSection:(unsigned long long)arg2;
- (void)prepareData:(id)arg1 forOriginalSection:(unsigned long long)arg2;
- (void)registerReuseIndentifer:(id)arg1 forOriginalSection:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

