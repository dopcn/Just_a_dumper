//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MDVChatInputBarDelegate-Protocol.h"
#import "MDVChatMessageDataHandlerDelegate-Protocol.h"
#import "MDVChatMillionViewDelegate-Protocol.h"
#import "MDVChatRedPacketViewDelegate-Protocol.h"
#import "MDVChatRoomOwnerInfoViewDelegate-Protocol.h"
#import "MDVChatTopicEditViewDelegate-Protocol.h"
#import "MDVChatTopicLoopViewDelegate-Protocol.h"
#import "MDVChatUserViewDelegate-Protocol.h"

@class MDVChatInputBar, MDVChatMemberJoinView, MDVChatMessageView, MDVChatMillionView, MDVChatMovieHandler, MDVChatPopoverView, MDVChatRedPacketView, MDVChatRoomOwnerInfoView, MDVChatTableViewHandler, MDVChatTopicEditView, MDVChatTopicLoopView, MDVChatUserView, MUAlertBar, NSString, UIImageView;
@protocol MDVChatContainerViewDelegate;

@interface MDVChatContainerView : UIView <MDVChatTopicLoopViewDelegate, MDVChatMessageDataHandlerDelegate, MDVChatUserViewDelegate, MDVChatInputBarDelegate, MDVChatTopicEditViewDelegate, MDVChatRoomOwnerInfoViewDelegate, MDVChatRedPacketViewDelegate, MDVChatMillionViewDelegate>
{
    id <MDVChatContainerViewDelegate> _delegate;
    UIImageView *_backgroundImageView;
    MDVChatRoomOwnerInfoView *_ownerInfoView;
    MDVChatTopicLoopView *_topicLoopView;
    MDVChatTableViewHandler *_tableHandler;
    MDVChatUserView *_userView;
    MDVChatMessageView *_messageView;
    MDVChatInputBar *_inputBar;
    MDVChatPopoverView *_popoverView;
    MDVChatTopicEditView *_topicEditView;
    MDVChatMemberJoinView *_joinView;
    MDVChatMovieHandler *_movieHandler;
    MDVChatRedPacketView *_redPacketView;
    MDVChatMillionView *_millionView;
    MUAlertBar *_alertBar;
}

@property(retain, nonatomic) MUAlertBar *alertBar; // @synthesize alertBar=_alertBar;
@property(retain, nonatomic) MDVChatMillionView *millionView; // @synthesize millionView=_millionView;
@property(retain, nonatomic) MDVChatRedPacketView *redPacketView; // @synthesize redPacketView=_redPacketView;
@property(retain, nonatomic) MDVChatMovieHandler *movieHandler; // @synthesize movieHandler=_movieHandler;
@property(retain, nonatomic) MDVChatMemberJoinView *joinView; // @synthesize joinView=_joinView;
@property(retain, nonatomic) MDVChatTopicEditView *topicEditView; // @synthesize topicEditView=_topicEditView;
@property(retain, nonatomic) MDVChatPopoverView *popoverView; // @synthesize popoverView=_popoverView;
@property(retain, nonatomic) MDVChatInputBar *inputBar; // @synthesize inputBar=_inputBar;
@property(retain, nonatomic) MDVChatMessageView *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) MDVChatUserView *userView; // @synthesize userView=_userView;
@property(retain, nonatomic) MDVChatTableViewHandler *tableHandler; // @synthesize tableHandler=_tableHandler;
@property(retain, nonatomic) MDVChatTopicLoopView *topicLoopView; // @synthesize topicLoopView=_topicLoopView;
@property(retain, nonatomic) MDVChatRoomOwnerInfoView *ownerInfoView; // @synthesize ownerInfoView=_ownerInfoView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak id <MDVChatContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showUserGuideForMembersToApplyOnMic;
- (void)showUserGuideForRoomOwnerToInviteOnMic:(id)arg1;
- (void)showUserGuideForRoomOwnerToInviteFriends;
- (void)showAllUserGuideWithDataSource:(id)arg1;
- (void)enableMoreButton:(id)arg1;
- (void)moreButtonAction:(id)arg1;
- (id)moreButton;
@property(readonly, nonatomic) double giftViewBottom;
- (void)vchatMillionViewClickCloseAction:(id)arg1;
- (void)vchatRedPacketViewCloseFinishAction:(id)arg1;
- (void)vchatRedPacketView:(id)arg1 openRedPacket:(id)arg2;
- (void)performDelegateSelector:(SEL)arg1 param:(id)arg2;
- (void)vchatInputBar:(id)arg1 actionType:(unsigned long long)arg2 viewModel:(id)arg3;
- (void)vchatInputBar:(id)arg1 sendMessage:(id)arg2;
- (void)vchatUserView:(id)arg1 clickedUser:(id)arg2;
- (void)vchatMessageDataHandler:(id)arg1 clickedCellBackView:(id)arg2;
- (void)topicEditViewWillHide:(id)arg1;
- (void)topicEditViewDidCompleteEdit:(id)arg1;
- (void)topicLoopViewDidClickTopic:(id)arg1;
- (void)topicLoopViewDidClickMusic:(id)arg1;
- (void)ownerInfoViewDidClickAvatar:(id)arg1;
- (void)showTopicEditView;
- (_Bool)isRoomOwner;
- (void)refreshMillionViewWithMillionViewItem:(id)arg1;
- (void)forceDismissInputView;
- (void)refreshRedPacketCountDown:(long long)arg1;
- (void)refreshRedPacketViewWithRedPacketItem:(id)arg1;
- (void)beginAtWithRemoteId:(id)arg1 name:(id)arg2;
- (void)refreshInputBarWithDataSource:(id)arg1;
- (void)refreshMessageViewWithDataSource:(id)arg1;
- (void)refreshUserViewOnMicStatus:(_Bool)arg1 momoId:(id)arg2;
- (void)refreshUserWhetherSpeaking:(_Bool)arg1 momoId:(id)arg2;
- (void)finishPaddingJoinAnimationWithMomoId:(id)arg1;
- (void)forceFinishMemberJoinAnimation;
- (void)showAnimationCardWhenNewMemberEntrance:(id)arg1 momoId:(id)arg2;
- (void)refreshUserViewWithDataSource:(id)arg1;
- (void)refreshBackgroupImageWithDataSource:(id)arg1;
- (void)refreshOwnerInfoWithDataSource:(id)arg1;
- (void)refreshPopoverItems:(id)arg1;
- (void)refreshTopic:(id)arg1;
- (void)refreshAllUIWithDataSource:(id)arg1;
- (void)drawView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

