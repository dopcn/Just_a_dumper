//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMPOIInfoView.h"

#import "NMDateChooseDelegate-Protocol.h"
#import "NMFeedBackDataSource-Protocol.h"
#import "NMHtmlProtocolDelegate-Protocol.h"
#import "NMTelephoneViewDataSource-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NMButton, NMSimpleBlurView, NMTelephoneView, NMWebView, NSArray, NSString, UIButton, UIImageView, UILabel, UIView;

@interface NMPoiDetailView : NMPOIInfoView <UIWebViewDelegate, NMHtmlProtocolDelegate, NMDateChooseDelegate, NMTelephoneViewDataSource, NMFeedBackDataSource, UIAlertViewDelegate, UIActionSheetDelegate>
{
    UIButton *_btnBack;
    UILabel *_lblWebTitle;
    UILabel *_lblWebSubTitle;
    NMButton *_btnWebAction;
    NMButton *_btnShareAction;
    UIImageView *_headTitleView;
    UIImageView *_headTitleBgView;
    UIView *_blurHeaderSepView;
    NMWebView *_nWebView;
    NMSimpleBlurView *_blurFooterView;
    UIView *_blurFooterSepView;
    _Bool _isHomeLoaded;
    _Bool _isHtmlUpdated;
    NSArray *_storePhoneNumList;
    NMTelephoneView *_telephoneView;
}

@property(retain, nonatomic) NSArray *storePhoneNumList; // @synthesize storePhoneNumList=_storePhoneNumList;
- (void).cxx_destruct;
- (id)feedBackGetExternData;
- (id)telephoneNumbersCall;
- (id)telephoneNumbersDisplay;
- (void)dealloc;
- (void)webInfo:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webInfoDidStartLoad:(id)arg1;
- (_Bool)webInfo:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webInfoDidFinishLoad:(id)arg1;
- (void)updateTitleAndAdjustFrameWithTitle:(id)arg1;
- (void)updateTitle;
- (void)updateWebActionButton:(int)arg1;
- (void)updateWebActionButton:(int)arg1 withData:(id)arg2;
- (void)leaveDateView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)callNumberBy:(id)arg1;
- (void)enableUserInteract:(id)arg1;
- (void)onGoBackStep:(long long)arg1;
- (void)onCloseWebView;
- (void)onSetWebViewTitle:(id)arg1;
- (unsigned int)behaviorPointSource;
- (id)getStations;
- (id)getOtherStation;
- (id)getPOIDetailSrc;
- (void)onOpenPoiInHotel:(id)arg1;
- (_Bool)checkPoiDataEqual:(id)arg1;
- (_Bool)onOpenPoi:(id)arg1 isFullDetail:(_Bool)arg2;
- (_Bool)onRegistRightButton:(id)arg1;
- (_Bool)onLogUserAction:(id)arg1;
- (_Bool)onShowPanellist:(id)arg1;
- (void)releaseTelephoneView;
- (_Bool)onToggleComponent:(id)arg1;
- (_Bool)onOpenBusLine:(id)arg1 busID:(id)arg2;
- (_Bool)onTriggerFeature:(id)arg1 allDic:(id)arg2;
- (_Bool)onNetworkInfo;
- (_Bool)onShareToFriends:(id)arg1;
- (_Bool)onEditFavoriteInfo:(id)arg1;
- (_Bool)onSearchAround:(id)arg1;
- (_Bool)onShowOnMap:(id)arg1;
- (void)htmlGobackAction:(long long)arg1;
- (_Bool)onBarHeight:(id)arg1 Dictionary:(id)arg2;
- (void)refreshFavoritePoiData:(id)arg1;
- (void)editFavoriteSucceed:(_Bool)arg1;
- (void)deleteFavoriteSucceed:(_Bool)arg1;
- (void)addFavoriteSucceed:(_Bool)arg1;
- (void)btnWebAction:(id)arg1;
- (void)backView:(id)arg1;
- (void)reportAction:(id)arg1;
- (void)shareToFriendsAction:(id)arg1;
- (void)favoriteAction:(id)arg1;
- (id)poiDictionaryChangeToPoiData:(id)arg1;
- (id)poiDataChangeToDication:(id)arg1;
- (id)getNaviMd5UseString:(id)arg1;
- (void)defaultOnSearchAroundAction;
- (void)onSearchAroundAction;
- (void)setFavoriteMark;
- (void)setExpandState:(_Bool)arg1;
- (void)resetWebInfo;
- (void)updatePoiInfo:(id)arg1;
- (void)recaculePoiPointType:(id)arg1;
- (void)updateToLandscapeSize;
- (void)updateToPortraitSize;
- (void)updateNMTheme;
- (id)initWithPoiData:(id)arg1;
- (id)initWithPoiData:(id)arg1 forDetail:(_Bool)arg2;
- (id)initWithPoiData:(id)arg1 forDetail:(_Bool)arg2 anIndex:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

