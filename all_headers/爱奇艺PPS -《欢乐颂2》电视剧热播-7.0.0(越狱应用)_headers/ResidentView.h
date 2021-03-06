//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYRDButton, UIButton;

@interface ResidentView : UIView
{
    _Bool _isOfflineRedHotShow;
    QYRDButton *_btnHistory;
    QYRDButton *_paopaoMsgBtn;
    UIButton *_btnOffline;
    UIButton *_btnSearch;
    UIButton *_moreButton;
}

@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *btnSearch; // @synthesize btnSearch=_btnSearch;
@property(retain, nonatomic) UIButton *btnOffline; // @synthesize btnOffline=_btnOffline;
@property(nonatomic) _Bool isOfflineRedHotShow; // @synthesize isOfflineRedHotShow=_isOfflineRedHotShow;
@property(retain, nonatomic) QYRDButton *paopaoMsgBtn; // @synthesize paopaoMsgBtn=_paopaoMsgBtn;
@property(retain, nonatomic) QYRDButton *btnHistory; // @synthesize btnHistory=_btnHistory;
- (void)offlineBtnRemind:(id)arg1;
- (void)paopaoMsgBtnHideRedDot;
- (void)refreshPaopaoMsgBtnForRedDot;
- (void)getPaoPaoMsgNoti:(id)arg1;
- (_Bool)shouldShowPaoPaoMsgBtn;
- (void)paopaoMsgBtnAction;
- (void)moreBtnAction;
- (void)historyBtnAction;
- (void)searchBtnAction;
- (void)offlineBtnAction;
- (void)postRemovePaoPaoMsgViewNoti;
- (void)initMoreBtnWithIndex:(long long)arg1;
- (void)initPaoPaoMsgBtnWithIndex:(long long)arg1;
- (void)initHistoryBtnWithIndex:(long long)arg1;
- (void)initSearchBtnWithIndex:(long long)arg1;
- (void)initOfflineBtnWithIndex:(long long)arg1;
- (void)initResidentViewWithBtnNum:(long long)arg1 BtnArr:(id)arg2;
- (void)dealloc;

@end

