//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LZActivityWebViewDelegate-Protocol.h"
#import "PLUClickUserProtocol-Protocol.h"
#import "PLUGiftDeployViewDelegate-Protocol.h"
#import "PLULiveRoomAdsViewDelegate-Protocol.h"
#import "PLUPublicProtocol-Protocol.h"
#import "PLURedBagResultViewDelegate-Protocol.h"
#import "PLURoomBottomViewDelegate-Protocol.h"

@class LZActivityWebView, LZChatMsgModel, LZSportModel, LZSportRoomScoreModel, LZSportsCampInfoView, LZSportsStreamChatTableView, NSArray, NSString, PLUChallengeTaskButton, PLUEntireSerialView, PLUGiftDeployView, PLUHeadLine, PLULiveRoomAdsView, PLUMessageListVM, PLUMissionHostLine, PLURedBagBtn, PLURedBagResultView, PLURoomBottomView, PLUVipJoin;
@protocol LZSportsStreamChatViewDelegate><PLUPublicProtocol><PLULiveRoomAdsViewDelegate><LZActivityWebViewDelegate;

@interface LZSportsStreamChatView : UIView <PLURoomBottomViewDelegate, PLUClickUserProtocol, PLURedBagResultViewDelegate, LZActivityWebViewDelegate, PLUPublicProtocol, PLULiveRoomAdsViewDelegate, PLUGiftDeployViewDelegate>
{
    _Bool _giftbtnIsHide;
    NSArray *_chatItems;
    LZSportModel *_sportModelNew;
    LZSportRoomScoreModel *_scoreModelNew;
    _Bool _campInfoViewIsShow;
    _Bool _activityViewIsShow;
    double _campInfoViewHeight;
    _Bool _isGettingRedBag;
    _Bool _showCampInfoView;
    _Bool _showActivityWebView;
    LZSportsCampInfoView *_campInfoView;
    LZActivityWebView *_activityWebView;
    PLUGiftDeployView *_activeGift;
    LZSportsStreamChatTableView *_chatTableView;
    PLURedBagBtn *_redBagBtn;
    PLUHeadLine *_headLine;
    PLUMissionHostLine *_missionhostLine;
    PLUMessageListVM *_messageListVM;
    PLUEntireSerialView *_serialView;
    id <LZSportsStreamChatViewDelegate><PLUPublicProtocol><PLULiveRoomAdsViewDelegate><LZActivityWebViewDelegate> _delegate;
    long long _roomType;
    PLURoomBottomView *_roomBottomView;
    PLUVipJoin *_vipJoin;
    PLURedBagResultView *_redBagResultView;
    LZChatMsgModel *_currentRedBagModel;
    PLULiveRoomAdsView *_adsView;
    PLUChallengeTaskButton *_challengeTaskBtn;
}

@property(retain, nonatomic) PLUChallengeTaskButton *challengeTaskBtn; // @synthesize challengeTaskBtn=_challengeTaskBtn;
@property(retain, nonatomic) PLULiveRoomAdsView *adsView; // @synthesize adsView=_adsView;
@property(retain, nonatomic) LZChatMsgModel *currentRedBagModel; // @synthesize currentRedBagModel=_currentRedBagModel;
@property(retain, nonatomic) PLURedBagResultView *redBagResultView; // @synthesize redBagResultView=_redBagResultView;
@property(retain, nonatomic) PLUVipJoin *vipJoin; // @synthesize vipJoin=_vipJoin;
@property(retain, nonatomic) PLURoomBottomView *roomBottomView; // @synthesize roomBottomView=_roomBottomView;
@property(nonatomic, getter=isShowActivityWebView) _Bool showActivityWebView; // @synthesize showActivityWebView=_showActivityWebView;
@property(nonatomic, getter=isShowCampInfoView) _Bool showCampInfoView; // @synthesize showCampInfoView=_showCampInfoView;
@property(readonly, nonatomic) long long roomType; // @synthesize roomType=_roomType;
@property(nonatomic) __weak id <LZSportsStreamChatViewDelegate><PLUPublicProtocol><PLULiveRoomAdsViewDelegate><LZActivityWebViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isGettingRedBag; // @synthesize isGettingRedBag=_isGettingRedBag;
@property(nonatomic) __weak PLUEntireSerialView *serialView; // @synthesize serialView=_serialView;
@property(retain, nonatomic) PLUMessageListVM *messageListVM; // @synthesize messageListVM=_messageListVM;
@property(retain, nonatomic) PLUMissionHostLine *missionhostLine; // @synthesize missionhostLine=_missionhostLine;
@property(retain, nonatomic) PLUHeadLine *headLine; // @synthesize headLine=_headLine;
- (void).cxx_destruct;
- (void)jumpToAdsPageWithModel:(id)arg1;
- (void)updateAdsViewWithModel:(id)arg1 withRoomID:(id)arg2;
- (void)showFireworkWithModel:(id)arg1;
- (void)challengeTaskBtnClick;
- (void)updateChallengeTaskBtn:(id)arg1 withRoomID:(id)arg2;
- (void)activityWebView:(id)arg1 action:(unsigned long long)arg2;
- (void)activityWebView:(id)arg1 gotoRoomId:(long long)arg2;
- (void)updateRedBagInfoWith:(id)arg1;
- (void)redBagResultViewRefreshActionWith:(id)arg1 withModl:(id)arg2;
- (void)redBagResultViewCloseActionWith:(id)arg1;
- (void)sendGiftShowKeyBoard:(id)arg1;
- (void)inDependentGiftDeployViewClick:(id)arg1;
- (void)giftDeployView:(id)arg1 willShow:(_Bool)arg2 duration:(double)arg3;
- (void)sendGift:(id)arg1 count:(id)arg2 sendAll:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (void)updateActionBtn:(id)arg1 action:(unsigned long long)arg2;
- (void)roomAction:(unsigned long long)arg1;
- (void)pluClickUser:(id)arg1 roomId:(id)arg2 actionType:(unsigned long long)arg3;
@property(readonly, nonatomic) PLURedBagBtn *redBagBtn; // @synthesize redBagBtn=_redBagBtn;
@property(readonly, nonatomic) PLUGiftDeployView *activeGift; // @synthesize activeGift=_activeGift;
@property(readonly, nonatomic) LZSportsStreamChatTableView *chatTableView; // @synthesize chatTableView=_chatTableView;
@property(readonly, nonatomic) LZActivityWebView *activityWebView; // @synthesize activityWebView=_activityWebView;
@property(readonly, nonatomic) LZSportsCampInfoView *campInfoView; // @synthesize campInfoView=_campInfoView;
- (void)setLayout;
- (void)getRedBagActionWithCancelLogin;
- (void)redBagBtnHorizontalRandomPonit;
- (void)getRedBagActionWith:(id)arg1;
- (void)redBagBtnAction:(id)arg1;
- (void)chatTableViewReload;
- (void)keyBoardWillHidenOrShow:(_Bool)arg1 changeTo:(struct CGRect)arg2 duration:(double)arg3;
- (void)updateActiveGiftModel:(id)arg1;
- (void)updateChatItemList:(id)arg1;
- (void)updateSportsPKScroreWithModelForNewSports:(id)arg1;
- (void)updateChatHeaderViewWithModelForNewSports:(id)arg1;
- (void)setBottomGiftBtnHide:(_Bool)arg1;
- (void)dealloc;
- (void)activityAction:(id)arg1;
- (void)taskAction:(id)arg1;
- (void)hiddenActivityAndTaskView;
- (void)updateTask:(id)arg1;
- (void)updateRedView:(id)arg1;
- (void)taskRedAction:(id)arg1;
- (void)addNotication;
- (void)loadView;
- (void)updateSubViews;
- (void)changeRoomType:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

