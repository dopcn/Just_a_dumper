//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IQYDataLoadManagerDelegate-Protocol.h"
#import "QYGLChatRoomPropViewDelegate-Protocol.h"
#import "QYGLChatRoomRankBoardViewDelegate-Protocol.h"
#import "QYGLChatRoomStarsViewDelegate-Protocol.h"

@class IQYVirtualCurrencyInfoManager, NSString, QYGLChatRoomPPCInfo, QYGLChatRoomPPCInfoManager, QYGLChatRoomPropFileManager, QYGLChatRoomPropView, QYGLChatRoomPurchaseManager, QYGLChatRoomRankBoardView, QYGLChatRoomStarsView, UIView, VirtualCurrencyInfo;
@protocol QYGLChatRoomInteractionManagerDelegate;

@interface QYGLChatRoomInteractionManager : NSObject <IQYDataLoadManagerDelegate, QYGLChatRoomRankBoardViewDelegate, QYGLChatRoomPropViewDelegate, QYGLChatRoomStarsViewDelegate>
{
    NSString *_roomId;
    NSString *_partnerCode;
    NSString *_passportId;
    NSString *_linkId;
    NSString *_liveType;
    _Bool _isSingleStar;
    _Bool isShouldShowShortRank;
    _Bool _isUserPropsEnable;
    id <QYGLChatRoomInteractionManagerDelegate> _delegate;
    QYGLChatRoomPurchaseManager *_propPurchaseManager;
    IQYVirtualCurrencyInfoManager *_currencyManager;
    VirtualCurrencyInfo *_curCurrency;
    long long _currencyFailedTryTimes;
    QYGLChatRoomPPCInfoManager *_ppcInfoManager;
    QYGLChatRoomPPCInfo *_ppcInfo;
    long long _ppcInfoFailedTryTimes;
    long long _payCount;
    long long _selectPropIndex;
    QYGLChatRoomRankBoardView *_rankBoardView;
    QYGLChatRoomPropView *_propViewHalf;
    QYGLChatRoomPropView *_propViewFull;
    QYGLChatRoomStarsView *_starsViewHalf;
    QYGLChatRoomStarsView *_starsViewFull;
    UIView *_fullSuperView;
    UIView *_halfSuperView;
    UIView *_halfSuperViewForFloat;
    long long _curScreenMode;
    QYGLChatRoomPropFileManager *_propFileManager;
    struct CGPoint _propViewHalfShow;
    struct CGPoint _propViewHalfHide;
    struct CGPoint _propViewFullShow;
    struct CGPoint _propViewFullHide;
    struct CGPoint _starsViewHalfShow;
    struct CGPoint _starsViewHalfHide;
    struct CGPoint _starsViewFullShow;
    struct CGPoint _starsViewFullHide;
}

@property(retain, nonatomic) QYGLChatRoomPropFileManager *propFileManager; // @synthesize propFileManager=_propFileManager;
@property(nonatomic) long long curScreenMode; // @synthesize curScreenMode=_curScreenMode;
@property(nonatomic) __weak UIView *halfSuperViewForFloat; // @synthesize halfSuperViewForFloat=_halfSuperViewForFloat;
@property(retain, nonatomic) UIView *halfSuperView; // @synthesize halfSuperView=_halfSuperView;
@property(retain, nonatomic) UIView *fullSuperView; // @synthesize fullSuperView=_fullSuperView;
@property(nonatomic) struct CGPoint starsViewFullHide; // @synthesize starsViewFullHide=_starsViewFullHide;
@property(nonatomic) struct CGPoint starsViewFullShow; // @synthesize starsViewFullShow=_starsViewFullShow;
@property(nonatomic) struct CGPoint starsViewHalfHide; // @synthesize starsViewHalfHide=_starsViewHalfHide;
@property(nonatomic) struct CGPoint starsViewHalfShow; // @synthesize starsViewHalfShow=_starsViewHalfShow;
@property(nonatomic) struct CGPoint propViewFullHide; // @synthesize propViewFullHide=_propViewFullHide;
@property(nonatomic) struct CGPoint propViewFullShow; // @synthesize propViewFullShow=_propViewFullShow;
@property(nonatomic) struct CGPoint propViewHalfHide; // @synthesize propViewHalfHide=_propViewHalfHide;
@property(nonatomic) struct CGPoint propViewHalfShow; // @synthesize propViewHalfShow=_propViewHalfShow;
@property(retain, nonatomic) QYGLChatRoomStarsView *starsViewFull; // @synthesize starsViewFull=_starsViewFull;
@property(retain, nonatomic) QYGLChatRoomStarsView *starsViewHalf; // @synthesize starsViewHalf=_starsViewHalf;
@property(retain, nonatomic) QYGLChatRoomPropView *propViewFull; // @synthesize propViewFull=_propViewFull;
@property(retain, nonatomic) QYGLChatRoomPropView *propViewHalf; // @synthesize propViewHalf=_propViewHalf;
@property(retain, nonatomic) QYGLChatRoomRankBoardView *rankBoardView; // @synthesize rankBoardView=_rankBoardView;
@property(nonatomic) long long selectPropIndex; // @synthesize selectPropIndex=_selectPropIndex;
@property(nonatomic) long long payCount; // @synthesize payCount=_payCount;
@property(nonatomic) long long ppcInfoFailedTryTimes; // @synthesize ppcInfoFailedTryTimes=_ppcInfoFailedTryTimes;
@property(retain, nonatomic) QYGLChatRoomPPCInfo *ppcInfo; // @synthesize ppcInfo=_ppcInfo;
@property(retain, nonatomic) QYGLChatRoomPPCInfoManager *ppcInfoManager; // @synthesize ppcInfoManager=_ppcInfoManager;
@property(nonatomic) long long currencyFailedTryTimes; // @synthesize currencyFailedTryTimes=_currencyFailedTryTimes;
@property(retain, nonatomic) VirtualCurrencyInfo *curCurrency; // @synthesize curCurrency=_curCurrency;
@property(retain, nonatomic) IQYVirtualCurrencyInfoManager *currencyManager; // @synthesize currencyManager=_currencyManager;
@property(retain, nonatomic) QYGLChatRoomPurchaseManager *propPurchaseManager; // @synthesize propPurchaseManager=_propPurchaseManager;
@property(nonatomic) _Bool isUserPropsEnable; // @synthesize isUserPropsEnable=_isUserPropsEnable;
@property(nonatomic) __weak id <QYGLChatRoomInteractionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updatePropViewByMode:(long long)arg1;
- (_Bool)isShowPropCoverView;
- (void)showPropViewWithStar:(id)arg1;
- (void)showAllListView;
- (void)showStarViewInSuperView:(id)arg1 screenMode:(long long)arg2;
- (void)showPropViewInSuperView:(id)arg1 screenMode:(long long)arg2;
- (void)showFloatViewIntoSuperView:(id)arg1 screenMode:(long long)arg2;
- (void)showRankBoardInSuperView;
- (void)handleCurrencyInfoByModel:(id)arg1;
- (void)handlerPurchaseResultByDic:(id)arg1;
- (void)handlePPCInfo:(id)arg1;
- (void)dismissPropsView;
- (void)showChargeViewByShouldPay:(double)arg1;
- (void)purchasePropIndex:(long long)arg1 number:(long long)arg2;
- (void)dismissStarsView;
- (void)setSelectStarIndex:(long long)arg1;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (id)getPlatformCode;
- (void)getCurrencyManager;
- (void)configChatRoomPropPurchaseManager;
- (void)configPPCInfoManager;
- (void)createFullStarsViewByFrame:(struct CGRect)arg1;
- (void)createHalfStarsViewByFrame:(struct CGRect)arg1;
- (void)updatePropListViewByArr:(id)arg1;
- (void)createFullPropViewByFrame:(struct CGRect)arg1 isMoreStar:(_Bool)arg2;
- (void)createHalfPropViewByFrame:(struct CGRect)arg1 isMoreStar:(_Bool)arg2;
- (void)configFloatView;
- (id)getPropPathWithProductId:(id)arg1;
- (void)refreshStarRankBoard:(id)arg1;
- (void)changeForPlayerMode:(long long)arg1;
- (void)setLinkId:(id)arg1;
- (id)initWithRoomInfo:(id)arg1;
- (void)closeSelf;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

