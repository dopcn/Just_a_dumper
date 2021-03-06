//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMBaseManager.h"

#import "AMAOSRequestDelegate-Protocol.h"
#import "AMAPLayerDelegate-Protocol.h"
#import "AMASSRequestDelegate-Protocol.h"
#import "AmrPlayAudioDelegate-Protocol.h"
#import "CLLocationManagerDelegate-Protocol.h"
#import "NMShareDatasource-Protocol.h"
#import "NMShareDelegate-Protocol.h"
#import "NMTakeTaxiMainViewDataSource-Protocol.h"
#import "NMTakeTaxiMainViewDelegate-Protocol.h"
#import "NMTakeTaxiNaviViewDataSource-Protocol.h"
#import "NMTakeTaxiNaviViewDelegate-Protocol.h"
#import "NMTakeTaxiService-Protocol.h"
#import "NMTaxiCommentDelegate-Protocol.h"

@class AMAOSBannerRequest, AMAOSTakeTaxiHistoryOrderRequest, AMAOSTaxiBudgetRequest, AMAOSTaxiCancelOrderRequest, AMAOSTaxiCommentRequest, AMAOSTaxiInfoData, AMAOSTaxiListData, AMAOSTaxiListRequest, AMAOSTaxiOrderAddRequest, AMAOSTaxiOrderPayRequest, AMAOSTaxiOrderStatusRequest, AMAOSTaxiPositionRequest, AMAOSTaxiVerifyMobileRequest, LTMAOSRGeoData, NMToastView, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString;
@protocol SDWebImageOperation;

@interface NMTakeTaxiManager : NMBaseManager <AmrPlayAudioDelegate, NMTakeTaxiService, NMTakeTaxiMainViewDelegate, NMTakeTaxiMainViewDataSource, AMAOSRequestDelegate, AMASSRequestDelegate, AMAPLayerDelegate, CLLocationManagerDelegate, NMShareDatasource, NMShareDelegate, NMTaxiCommentDelegate, NMTakeTaxiNaviViewDataSource, NMTakeTaxiNaviViewDelegate>
{
    AMAOSTaxiListRequest *_taxiListRequest;
    NSString *_oriRGeoBizLogicUUID;
    NSString *_destRGeoBizLogicUUID;
    AMAOSTaxiOrderAddRequest *_taxiOrderAddRequest;
    AMAOSTaxiOrderStatusRequest *_taxiOrderStatusRequest;
    NSMutableArray *_taxiOrderStatusRequests;
    AMAOSTaxiVerifyMobileRequest *_verifyMobileRequest;
    AMAOSTaxiCancelOrderRequest *_cancelOrderRequest;
    AMAOSTaxiPositionRequest *_taxiPositionRequest;
    AMAOSTaxiCommentRequest *_taxiCommentRequest;
    AMAOSTakeTaxiHistoryOrderRequest *_historyOrderRequest;
    AMAOSTaxiOrderPayRequest *_orderPayRequest;
    AMAOSBannerRequest *_bannerRequest;
    id <SDWebImageOperation> _imageDownloader;
    _Bool _taxiListLoaded;
    _Bool _bannerRequseted;
    AMAOSTaxiListData *_taxiListData;
    NSString *_taxiListDatasource;
    long long _currentUIPopup;
    long long _currentUIStatus;
    long long _previousUIStatus;
    long long _orderID;
    NSString *_locDesc;
    NSString *_inputOrigin;
    NSString *_destination;
    long long _orderStatus;
    NSString *_currOrderID;
    NSString *_userMobile;
    long long _sendDriverCount;
    long long _currOrderPayFlag;
    float _currOrderFee;
    AMAOSTaxiInfoData *_currTaxiInfo;
    long long _taxiDatasource;
    long long _orderSeconds;
    NSIndexPath *_selectedCommentIndexPath;
    double _taxiAddOrderDate;
    NSString *_taxiAddOrderID;
    _Bool _isTaxiOrderWaiting;
    NSMutableArray *_phoneRecord;
    NSMutableArray *_orderRecord;
    NSMutableArray *_originRecord;
    NSMutableArray *_historyOrderList;
    unsigned long long _historyOrderCount;
    unsigned long long _currentHistoryPageNum;
    _Bool _hasAngle;
    unsigned long long _callTimes;
    LTMAOSRGeoData *_gpsRGeoData;
    NMToastView *_processView;
    _Bool _fromeOther;
    _Bool _isReserve;
    _Bool _isShortCut;
    NSMutableDictionary *_shortCutInfoDict;
    _Bool _needPosition;
    long long _currentLevel;
    _Bool _isAllowRefreshLayer;
    _Bool _nonShowVioceHelp;
    struct ANPoint _naviDestPoint;
    AMAOSTaxiBudgetRequest *_budgetRequst;
    long long _shortCutIndex;
    NSMutableDictionary *_bannerInfoDict;
    NSString *_naviDestiName;
}

+ (void)registerApLayer;
@property(retain, nonatomic) NSString *naviDestiName; // @synthesize naviDestiName=_naviDestiName;
@property(retain, nonatomic) NSMutableDictionary *bannerInfoDict; // @synthesize bannerInfoDict=_bannerInfoDict;
@property(retain, nonatomic) NSMutableDictionary *shortCutInfoDict; // @synthesize shortCutInfoDict=_shortCutInfoDict;
@property(nonatomic) long long shortCutIndex; // @synthesize shortCutIndex=_shortCutIndex;
@property(retain, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(nonatomic) _Bool isShortCut; // @synthesize isShortCut=_isShortCut;
@property(nonatomic) _Bool isTaxiOrderWaiting; // @synthesize isTaxiOrderWaiting=_isTaxiOrderWaiting;
@property(copy, nonatomic) NSString *taxiAddOrderID; // @synthesize taxiAddOrderID=_taxiAddOrderID;
@property(nonatomic) double taxiAddOrderDate; // @synthesize taxiAddOrderDate=_taxiAddOrderDate;
@property(copy, nonatomic) NSString *currOrderID; // @synthesize currOrderID=_currOrderID;
@property(retain, nonatomic) AMAOSTaxiListData *taxiListData; // @synthesize taxiListData=_taxiListData;
- (void)naviButtonClick;
- (_Bool)isShowNaviButton;
- (_Bool)needShowNaviView;
- (id)getNaviLocationAddress;
- (id)getBannerImage;
- (void)taxiOrderPayViewShare;
- (void)taxiOrderPayViewPayWithFee:(id)arg1;
- (_Bool)needShowBannerText;
- (id)getPayViewPriceString;
- (int)getPayViewStatus;
- (void)taxiCommentSelected:(unsigned long long)arg1;
- (void)taxiCommentDismiss;
- (void)AmrPlayerStatus:(int)arg1;
- (id)getNaviShareThumbImage;
- (id)getShareString;
- (id)wechatImageFilePath;
- (_Bool)isWechatImageOnly;
- (id)shareWechatImage;
- (id)shareWechatContentTimeline;
- (id)shareWechatContentSession;
- (id)shareWechatTitleTimeline;
- (id)shareWechatTitleSession;
- (id)shareSinaImage;
- (id)shareSinaContent;
- (id)shareSinaTitle;
- (id)shareMailContent;
- (id)shareMailTitle;
- (id)shareSmsContent;
- (id)shareShortUrl;
- (void)requestShareShorturl:(CDUnknownBlockType)arg1;
- (_Bool)taxiSupportCityName:(id)arg1;
- (void)saveTaxiCities:(id)arg1;
- (void)takeTaxiToPoint:(struct ANPoint)arg1;
- (void)takeTaxiToHere:(id)arg1;
- (void)takeTaxiToDestWith:(id)arg1 andPoint:(struct ANPoint)arg2;
- (void)takeTaxiFromOriName:(id)arg1 oriPoint:(struct ANPoint)arg2 toDestName:(id)arg3 destPoint:(struct ANPoint)arg4;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (_Bool)isShowVoiceTips;
- (_Bool)isHistoryOrder;
- (id)getHomeCompanyInfo;
- (double)getRecordPower;
- (unsigned long long)getHistoryOrderCount;
- (unsigned long long)getBestRecord;
- (unsigned long long)getCallTimes;
- (_Bool)hasMoreHistory;
- (_Bool)needTaxiPosition;
- (_Bool)isReserveTaxi;
- (id)getShortCutInfo;
- (_Bool)isValidMobile:(id)arg1;
- (id)getOrderRecord;
- (id)getTaxiRecord;
- (long long)getWaitingSeconds;
- (long long)getOrderStatus;
- (id)getCurrTaxiInfo;
- (long long)getSendDriverCount;
- (id)getDestination;
- (id)getLocDesc;
- (long long)getPreviousStatusType;
- (id)getTaxiListData;
- (void)externalHandleOpenUrl:(id)arg1;
- (void)payTheOrderWithData:(id)arg1;
- (void)requestTaxiOrderPayWithOrderID:(id)arg1 andFee:(id)arg2;
- (void)historyOrderPayWithOrder:(id)arg1;
- (void)shortCutTakeTaxi;
- (void)gotoShortCutCallView;
- (void)generateTakeTaxiShortCut;
- (void)requestTaxiHistoryOrder;
- (void)taxiRecordShort;
- (void)taxiRecordSubmit;
- (void)taxiRecordCancel;
- (void)taxiRecordStop;
- (void)taxiRecordPlay;
- (void)taxiRecordResume;
- (void)taxiRecordSuspend;
- (void)taxiRecordFinish;
- (void)taxiRecordStart;
- (void)shareTaxiInfo;
- (void)clearOrderRecord;
- (void)setTaxiOrigin:(id)arg1;
- (void)setTaxiDestination:(id)arg1;
- (void)requestTaxiBudget;
- (void)requestTaxiComment:(unsigned long long)arg1;
- (void)requestTaxiPosition;
- (void)requestCancelOrder;
- (void)requestVerifyMobile:(id)arg1 code:(id)arg2;
- (void)requestGetVerificationCode:(id)arg1;
- (void)requestTaxiOrderStatus:(id)arg1;
- (void)requestTaxiOrderStatus;
- (void)requestTaxiOrderAddWithVoice;
- (void)requestTaxiOrderAdd:(id)arg1 date:(id)arg2;
- (void)requestTaxiList:(int)arg1;
- (void)requestTaxiList;
- (void)destRGeoBizLogicCompleted:(id)arg1;
- (void)requestDest:(struct ANPoint)arg1;
- (void)oriRGeoBizLogicCompleted:(id)arg1;
- (void)requestRGeo:(struct ANPoint)arg1;
- (void)taxiCallSubViewGoback;
- (void)gotoTaxiCommentView:(id)arg1;
- (void)gotoTaxiCommentView;
- (void)gotoTaxiCallHistory;
- (void)gotoTaxiCallSubView;
- (void)gotoTaxiCallReserveView;
- (void)gotoTaxiCallSumbitView;
- (_Bool)checkSubmitCondition;
- (void)gotoTaxiOriginal;
- (void)resetWaitingSeconds;
- (void)completeCurrentOrder;
- (void)resetOrderStatus;
- (void)quiteAll;
- (void)goBack;
- (_Bool)isImageValid:(id)arg1;
- (void)imageDownloaderDidFinish:(id)arg1;
- (void)aosRequestFinished:(id)arg1 response:(id)arg2;
- (void)apLayerHighlightedIndex:(long long)arg1 layerTye:(long long)arg2;
- (id)apLayerData:(long long)arg1;
- (void)hideToastWaiting;
- (void)showToastSending;
- (void)showToastWaiting;
- (void)showToastTaxiListSearch;
- (id)managerMainPath;
- (id)dataFilePathWithFileName:(id)arg1;
- (id)readOriginRecord;
- (void)saveCurrentOriginInfo;
- (void)saveCurrentOrderInfo;
- (void)readUserMobile;
- (void)saveUserMobile;
- (void)checkPhoneAndOrderToDataBase;
- (void)saveOrderWaiting:(_Bool)arg1;
- (void)saveOrderID_Date;
- (void)saveOrderState;
- (void)readOrderState;
- (void)readNaviDest;
- (void)saveNaviDest;
- (void)readTipsInfo;
- (void)saveTipsInfo;
- (void)updateImageData:(id)arg1;
- (void)saveBannerInfo;
- (void)readBannerInfo;
- (void)cancelTaxiOrderStatusRequests;
- (void)updateOrderStatus:(id)arg1;
- (void)loadTaxiListData:(id)arg1;
- (void)zoomLevelChanged:(long long)arg1;
- (void)mapViewZoomOrMoveFinishWithMapView:(id)arg1;
- (void)removeTaxiOnMap;
- (void)stopNMLayer;
- (void)scaleMapForContainTaxis:(_Bool)arg1;
- (void)showTaxiOnMapUseMarkPoint;
- (void)showTaxiOnMapUseRaindrop;
- (void)showTaxiOnMapUseIcon;
- (void)updateTaxiPositionOnMap;
- (void)resumeOverLayer;
- (_Bool)forbiddenShowFloorSelector;
- (_Bool)forbiddenShowIndoorLayer;
- (_Bool)forbiddenShowTrafficBtn;
- (_Bool)forbiddenShowMainLayer;
- (_Bool)needStopNMLayers;
- (void)suspendRelatedViews;
- (void)resumeRelatedViews;
- (void)clearRelatedViews;
- (void)clearRelatedData;
- (void)initManagerWithOtherInfo:(id)arg1;
- (void)downLoadBannerImage;
- (void)sendBannerRequest;
- (void)refreshCommonUseInfo;
- (id)getUserMobileInDataBase;
- (_Bool)isUserSetMobile;
- (void)checkUserMobile;
- (void)checkTaxiListLoaded;
- (_Bool)checkLatestTaxiOrder;
- (Class)managerViewContainerClass;
- (void)initRelatedData;
- (void)initRelatedViews;
- (void)changeTakeTaxiPopup:(long long)arg1;
- (void)changeTakeTaxiStatus:(long long)arg1;
- (void)clearAllRequest;
- (void)cancelAllRequest;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

