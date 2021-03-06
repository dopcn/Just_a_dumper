//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseModel.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSNumber, NSObject, NSString, TTTAdsRemindConfigModel, TTTAnnConfigModel, TTTChannelViewContoller, TTTCommonConfigModel, TTTCountDownModel, TTTDrawModel, TTTFlexibleFloorModel, TTTFloorBizResultModel, TTTFloorHeaderModel, TTTHotPicModel, TTTListConfigModel, TTTRushCountDownModel, TTTSearchModel, TTTShopConfigModel, TTTTabConfigModel, TTTVideoModel, TTThemeArticleModel;
@protocol TTTFloorProtocol;

@interface TTTFloorModel : TTTBaseModel <NSCopying>
{
    _Bool _isHeaderViewTurnToCell;
    _Bool _isOnlyDisplayHeaderView;
    _Bool _isSubViewCanScrolled;
    TTTChannelViewContoller *_channelVC;
    NSString *_activityId;
    NSString *_pageId;
    NSString *_floorTemplate;
    NSString *_styleId;
    NSString *_tabStyle;
    NSString *_advertFuncId;
    NSString *_moduleId;
    NSString *_backgroundColor;
    TTTCommonConfigModel *_config;
    NSString *_ofn;
    NSString *_floorNum;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_externalBorder;
    NSNumber *_innerBorder;
    NSNumber *_lrBorderPx;
    NSNumber *_udBorderPx;
    NSNumber *_themeId;
    TTTVideoModel *_video;
    TTTFloorHeaderModel *_floorHead;
    NSArray *_adsList;
    NSArray *_style1R2_adsList;
    TTTTabConfigModel *_tabConfig;
    NSArray *_tabList;
    TTTListConfigModel *_waresListConfig;
    NSArray *_waresList;
    NSArray *_categoryList;
    NSArray *_guideInfos;
    TTThemeArticleModel *_contentInfo;
    TTTSearchModel *_searchObject;
    NSArray *_couponList;
    NSString *_type;
    TTTHotPicModel *_hotZone;
    NSArray *_preSaleList;
    NSArray *_preSale1_2List;
    TTTCountDownModel *_countDown;
    TTTAnnConfigModel *_annConfig;
    TTTFloorModel *_realChangedFloorModel;
    NSArray *_anchorList;
    TTTRushCountDownModel *_displayCountDownModel;
    NSArray *_disPlayWaresList;
    NSMutableArray *_currentPagedWaresList;
    unsigned long long _selectFirstTabIndex;
    NSMutableDictionary *_cachePagedWaresList;
    NSArray *_multiModuleList;
    NSArray *_currentTabFloorList;
    TTTShopConfigModel *_tplCfg;
    NSArray *_shopList;
    NSArray *_lives;
    TTTDrawModel *_lotteryGuaGuaLe;
    NSArray *_elementList;
    NSString *_showPV;
    NSString *_notifyFlag;
    TTTAdsRemindConfigModel *_notify;
    TTTFloorBizResultModel *_bizResult;
    NSArray *_tabAdGpList;
    NSArray *_displayTryoutWareList;
    NSString *_hasPro;
    NSString *_subTitle;
    NSNumber *_picHeight;
    NSNumber *_picWidth;
    NSArray *_adsWareList;
    NSString *_loginUrl;
    NSString *_plusUrl;
    TTTFlexibleFloorModel *_flexibleFloor;
    long long _currentSection;
    unsigned long long _tabIndex;
    long long _foucsIndex;
    NSIndexPath *_floorIndexPath;
    NSString *_allSkusStr;
    unsigned long long _p_requestStatus;
    NSObject<TTTFloorProtocol> *_floorProtocolData;
    struct CGPoint _floorOffset;
}

+ (id)replacedKeyFromPropertyName;
+ (id)objectClassInArray;
@property(retain, nonatomic) NSObject<TTTFloorProtocol> *floorProtocolData; // @synthesize floorProtocolData=_floorProtocolData;
@property(nonatomic) unsigned long long p_requestStatus; // @synthesize p_requestStatus=_p_requestStatus;
@property(copy, nonatomic) NSString *allSkusStr; // @synthesize allSkusStr=_allSkusStr;
@property(retain, nonatomic) NSIndexPath *floorIndexPath; // @synthesize floorIndexPath=_floorIndexPath;
@property(nonatomic) _Bool isSubViewCanScrolled; // @synthesize isSubViewCanScrolled=_isSubViewCanScrolled;
@property(nonatomic) long long foucsIndex; // @synthesize foucsIndex=_foucsIndex;
@property(nonatomic) unsigned long long tabIndex; // @synthesize tabIndex=_tabIndex;
@property(nonatomic) long long currentSection; // @synthesize currentSection=_currentSection;
@property(nonatomic) struct CGPoint floorOffset; // @synthesize floorOffset=_floorOffset;
@property(retain, nonatomic) TTTFlexibleFloorModel *flexibleFloor; // @synthesize flexibleFloor=_flexibleFloor;
@property(copy, nonatomic) NSString *plusUrl; // @synthesize plusUrl=_plusUrl;
@property(copy, nonatomic) NSString *loginUrl; // @synthesize loginUrl=_loginUrl;
@property(retain, nonatomic) NSArray *adsWareList; // @synthesize adsWareList=_adsWareList;
@property(retain, nonatomic) NSNumber *picWidth; // @synthesize picWidth=_picWidth;
@property(retain, nonatomic) NSNumber *picHeight; // @synthesize picHeight=_picHeight;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *hasPro; // @synthesize hasPro=_hasPro;
@property(nonatomic) __weak NSArray *displayTryoutWareList; // @synthesize displayTryoutWareList=_displayTryoutWareList;
@property(retain, nonatomic) NSArray *tabAdGpList; // @synthesize tabAdGpList=_tabAdGpList;
@property(retain, nonatomic) TTTFloorBizResultModel *bizResult; // @synthesize bizResult=_bizResult;
@property(retain, nonatomic) TTTAdsRemindConfigModel *notify; // @synthesize notify=_notify;
@property(copy, nonatomic) NSString *notifyFlag; // @synthesize notifyFlag=_notifyFlag;
@property(copy, nonatomic) NSString *showPV; // @synthesize showPV=_showPV;
@property(retain, nonatomic) NSArray *elementList; // @synthesize elementList=_elementList;
@property(retain, nonatomic) TTTDrawModel *lotteryGuaGuaLe; // @synthesize lotteryGuaGuaLe=_lotteryGuaGuaLe;
@property(retain, nonatomic) NSArray *lives; // @synthesize lives=_lives;
@property(retain, nonatomic) NSArray *shopList; // @synthesize shopList=_shopList;
@property(retain, nonatomic) TTTShopConfigModel *tplCfg; // @synthesize tplCfg=_tplCfg;
@property(retain, nonatomic) NSArray *currentTabFloorList; // @synthesize currentTabFloorList=_currentTabFloorList;
@property(retain, nonatomic) NSArray *multiModuleList; // @synthesize multiModuleList=_multiModuleList;
@property(retain, nonatomic) NSMutableDictionary *cachePagedWaresList; // @synthesize cachePagedWaresList=_cachePagedWaresList;
@property(nonatomic) unsigned long long selectFirstTabIndex; // @synthesize selectFirstTabIndex=_selectFirstTabIndex;
@property(retain, nonatomic) NSMutableArray *currentPagedWaresList; // @synthesize currentPagedWaresList=_currentPagedWaresList;
@property(retain, nonatomic) NSArray *disPlayWaresList; // @synthesize disPlayWaresList=_disPlayWaresList;
@property(retain, nonatomic) TTTRushCountDownModel *displayCountDownModel; // @synthesize displayCountDownModel=_displayCountDownModel;
@property(retain, nonatomic) NSArray *anchorList; // @synthesize anchorList=_anchorList;
@property(nonatomic) __weak TTTFloorModel *realChangedFloorModel; // @synthesize realChangedFloorModel=_realChangedFloorModel;
@property(nonatomic) _Bool isOnlyDisplayHeaderView; // @synthesize isOnlyDisplayHeaderView=_isOnlyDisplayHeaderView;
@property(nonatomic) _Bool isHeaderViewTurnToCell; // @synthesize isHeaderViewTurnToCell=_isHeaderViewTurnToCell;
@property(retain, nonatomic) TTTAnnConfigModel *annConfig; // @synthesize annConfig=_annConfig;
@property(retain, nonatomic) TTTCountDownModel *countDown; // @synthesize countDown=_countDown;
@property(retain, nonatomic) NSArray *preSale1_2List; // @synthesize preSale1_2List=_preSale1_2List;
@property(retain, nonatomic) NSArray *preSaleList; // @synthesize preSaleList=_preSaleList;
@property(retain, nonatomic) TTTHotPicModel *hotZone; // @synthesize hotZone=_hotZone;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *couponList; // @synthesize couponList=_couponList;
@property(retain, nonatomic) TTTSearchModel *searchObject; // @synthesize searchObject=_searchObject;
@property(retain, nonatomic) TTThemeArticleModel *contentInfo; // @synthesize contentInfo=_contentInfo;
@property(retain, nonatomic) NSArray *guideInfos; // @synthesize guideInfos=_guideInfos;
@property(retain, nonatomic) NSArray *categoryList; // @synthesize categoryList=_categoryList;
@property(retain, nonatomic) NSArray *waresList; // @synthesize waresList=_waresList;
@property(retain, nonatomic) TTTListConfigModel *waresListConfig; // @synthesize waresListConfig=_waresListConfig;
@property(retain, nonatomic) NSArray *tabList; // @synthesize tabList=_tabList;
@property(retain, nonatomic) TTTTabConfigModel *tabConfig; // @synthesize tabConfig=_tabConfig;
@property(retain, nonatomic) NSArray *style1R2_adsList; // @synthesize style1R2_adsList=_style1R2_adsList;
@property(retain, nonatomic) NSArray *adsList; // @synthesize adsList=_adsList;
@property(retain, nonatomic) TTTFloorHeaderModel *floorHead; // @synthesize floorHead=_floorHead;
@property(retain, nonatomic) TTTVideoModel *video; // @synthesize video=_video;
@property(copy, nonatomic) NSNumber *themeId; // @synthesize themeId=_themeId;
@property(copy, nonatomic) NSNumber *udBorderPx; // @synthesize udBorderPx=_udBorderPx;
@property(copy, nonatomic) NSNumber *lrBorderPx; // @synthesize lrBorderPx=_lrBorderPx;
@property(copy, nonatomic) NSNumber *innerBorder; // @synthesize innerBorder=_innerBorder;
@property(copy, nonatomic) NSNumber *externalBorder; // @synthesize externalBorder=_externalBorder;
@property(copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(copy, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *floorNum; // @synthesize floorNum=_floorNum;
@property(copy, nonatomic) NSString *ofn; // @synthesize ofn=_ofn;
@property(retain, nonatomic) TTTCommonConfigModel *config; // @synthesize config=_config;
@property(copy, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *moduleId; // @synthesize moduleId=_moduleId;
@property(copy, nonatomic) NSString *advertFuncId; // @synthesize advertFuncId=_advertFuncId;
@property(copy, nonatomic) NSString *tabStyle; // @synthesize tabStyle=_tabStyle;
@property(copy, nonatomic) NSString *styleId; // @synthesize styleId=_styleId;
@property(copy, nonatomic) NSString *floorTemplate; // @synthesize floorTemplate=_floorTemplate;
@property(copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(nonatomic) __weak TTTChannelViewContoller *channelVC; // @synthesize channelVC=_channelVC;
- (void).cxx_destruct;
- (void)p_creatAdsWareList;
- (void)configCarouselWithWares3L;
- (void)p_configColor;
- (void)p_configDataForWaresWords;
- (void)p_createData;
- (void)p_computerData;
- (void)p_copyDataToSubModel;
- (void)p_initData;
- (void)createFloorProtocolData;
- (void)p_addSkuId:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)combinateRushData;
- (id)fetchDisplayWaresList:(long long)arg1;
- (void)resetCurrentPageWareList;
- (void)saveCurrentPageWareList:(id)arg1;
- (id)firstTabModel;
- (long long)numberOfSectionTab;
- (_Bool)isShowSecondTabView;
- (_Bool)isShowRushHeaderView;
- (_Bool)isSHowWareHeaderView;
- (_Bool)isShowTabHeaderView;
- (void)keyValuesDidFinishConvertingToObject;

@end

