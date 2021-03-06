//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, QYGLBarrageInputManager, QYGLChatBottomHintView, QYGLChatMessageRouter, QYGLChatViewModel, QYGLPlayerChatRoomNoticeView, UITableView, UIView;
@protocol QYGLChatDelegate;

@interface QYGLChatViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate>
{
    _Bool _shouldUpdateUi;
    double _topOffset;
    QYGLChatViewModel *_viewModel;
    _Bool _sendGiftButtonOn;
    _Bool _atTopLayer;
    _Bool _atBottom;
    _Bool _newMessageReceivedWhenAtLowerLayer;
    _Bool _popUpViewShown;
    id <QYGLChatDelegate> _chatDelegate;
    CDUnknownBlockType _sendGiftBlock;
    UIView *_moreButton;
    QYGLPlayerChatRoomNoticeView *_noticeView;
    QYGLBarrageInputManager *_inputManager;
    UIView *_giftCardsView;
    QYGLChatMessageRouter *_messageRouter;
    long long _playerType;
    UITableView *_tableView;
    QYGLChatBottomHintView *_hintView;
    unsigned long long _liveShowType;
}

@property(nonatomic, getter=isPopUpViewShown) _Bool popUpViewShown; // @synthesize popUpViewShown=_popUpViewShown;
@property(nonatomic) unsigned long long liveShowType; // @synthesize liveShowType=_liveShowType;
@property(nonatomic, getter=isNewMessageReceivedWhenAtLowerLayer) _Bool newMessageReceivedWhenAtLowerLayer; // @synthesize newMessageReceivedWhenAtLowerLayer=_newMessageReceivedWhenAtLowerLayer;
@property(nonatomic, getter=isAtBottom) _Bool atBottom; // @synthesize atBottom=_atBottom;
@property(retain, nonatomic) QYGLChatBottomHintView *hintView; // @synthesize hintView=_hintView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long playerType; // @synthesize playerType=_playerType;
@property(nonatomic, getter=isAtTopLayer) _Bool atTopLayer; // @synthesize atTopLayer=_atTopLayer;
@property(nonatomic, getter=isSendGiftButtonOn) _Bool sendGiftButtonOn; // @synthesize sendGiftButtonOn=_sendGiftButtonOn;
@property(retain, nonatomic) QYGLChatMessageRouter *messageRouter; // @synthesize messageRouter=_messageRouter;
@property(retain, nonatomic) UIView *giftCardsView; // @synthesize giftCardsView=_giftCardsView;
@property(retain, nonatomic) QYGLBarrageInputManager *inputManager; // @synthesize inputManager=_inputManager;
@property(retain, nonatomic) QYGLPlayerChatRoomNoticeView *noticeView; // @synthesize noticeView=_noticeView;
@property(nonatomic) __weak UIView *moreButton; // @synthesize moreButton=_moreButton;
@property(copy, nonatomic) CDUnknownBlockType sendGiftBlock; // @synthesize sendGiftBlock=_sendGiftBlock;
@property(nonatomic) __weak id <QYGLChatDelegate> chatDelegate; // @synthesize chatDelegate=_chatDelegate;
- (void).cxx_destruct;
@property(nonatomic, getter=isUserActionEnabled) _Bool userActionEnabled;
@property(readonly, nonatomic) QYGLChatViewModel *viewModel;
- (void)setOffLine;
@property(nonatomic) double topOffset;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reloadDataWithClear:(_Bool)arg1;
- (void)tableViewScrollPositionBottom:(id *)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)ppcReport:(id)arg1;
- (void)showNeedVarifyAlert;
- (void)updateScreenStatus;
- (void)reloadHavingNewMessage:(_Bool)arg1 atBottom:(_Bool)arg2;
- (void)receiveSignal:(unsigned long long)arg1 messageSet:(id)arg2;
- (void)sendMessage:(id)arg1;
- (void)setupFrames;
- (void)setupViews;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithLiveShowType:(unsigned long long)arg1 messageRouter:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

