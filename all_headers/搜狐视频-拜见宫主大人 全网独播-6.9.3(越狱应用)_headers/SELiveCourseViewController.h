//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseViewController.h"

#import "SESocketServiceDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SCAlertViewController, SCShareModel, SECourseCheckModel, SECourseSectionModel, SELiveCourseOutlineView, SELiveCoursePlayerView, SESocketService, SETextInputView, SEVVManager, UILabel, UITableView, UIView;

@interface SELiveCourseViewController : SCBaseViewController <SESocketServiceDelegate, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _ifInSameRoom;
    _Bool _confirmedWWANAlert;
    _Bool _isResume;
    NSString *_enOrganizationId;
    NSString *_shopId;
    SCShareModel *_shareModel;
    SELiveCourseOutlineView *_outlineView;
    NSString *_courseId;
    SECourseSectionModel *_model;
    SECourseCheckModel *_checkModel;
    SESocketService *_socketService;
    SETextInputView *_inputView;
    NSMutableArray *_dataSource;
    UITableView *_chatTb;
    SELiveCoursePlayerView *_avPlayerVC;
    CDUnknownBlockType _backHandler;
    SEVVManager *_vvManager;
    SCAlertViewController *_wwanAlert;
    UIView *_needPayView;
    UILabel *_tipLabel;
}

@property(nonatomic) _Bool isResume; // @synthesize isResume=_isResume;
@property(nonatomic) __weak UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) __weak UIView *needPayView; // @synthesize needPayView=_needPayView;
@property(nonatomic) _Bool confirmedWWANAlert; // @synthesize confirmedWWANAlert=_confirmedWWANAlert;
@property(retain, nonatomic) SCAlertViewController *wwanAlert; // @synthesize wwanAlert=_wwanAlert;
@property(retain, nonatomic) SEVVManager *vvManager; // @synthesize vvManager=_vvManager;
@property(copy, nonatomic) CDUnknownBlockType backHandler; // @synthesize backHandler=_backHandler;
@property(retain, nonatomic) SELiveCoursePlayerView *avPlayerVC; // @synthesize avPlayerVC=_avPlayerVC;
@property(nonatomic) __weak UITableView *chatTb; // @synthesize chatTb=_chatTb;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak SETextInputView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) _Bool ifInSameRoom; // @synthesize ifInSameRoom=_ifInSameRoom;
@property(retain, nonatomic) SESocketService *socketService; // @synthesize socketService=_socketService;
@property(retain, nonatomic) SECourseCheckModel *checkModel; // @synthesize checkModel=_checkModel;
@property(retain, nonatomic) SECourseSectionModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *courseId; // @synthesize courseId=_courseId;
@property(nonatomic) __weak SELiveCourseOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(retain, nonatomic) SCShareModel *shareModel; // @synthesize shareModel=_shareModel;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) NSString *enOrganizationId; // @synthesize enOrganizationId=_enOrganizationId;
- (void).cxx_destruct;
- (void)buyCourse:(id)arg1;
- (void)hiddenNeedPayView;
- (void)showNeedPayView;
- (void)showWWANAlertWithConfim:(CDUnknownBlockType)arg1 cancel:(CDUnknownBlockType)arg2;
- (void)reachabilityDidChanged:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)showWWANToastIfNeed;
- (void)applicationWillEnterforeground:(id)arg1;
- (void)doPlayLiveCourse:(id)arg1 cid:(id)arg2;
- (void)doClickAttachment:(id)arg1;
- (void)didClickShareButton:(id)arg1;
- (void)didClickOutlineButton:(id)arg1;
- (void)prepareBottomView;
- (void)prepareInutView;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)appendChat:(id)arg1;
- (void)prepareChatList;
- (void)SocketServiceError:(id)arg1 onError:(id)arg2;
- (void)SocketServiceDidConnect:(id)arg1;
- (void)appLogin:(id)arg1;
- (id)getRandomNum;
- (void)addChatHistory;
- (id)parserCommRCJSON:(id)arg1;
- (void)handleComRCEventWithData:(id)arg1;
- (void)handleChatModel:(id)arg1;
- (id)parserHistoryJSON:(id)arg1;
- (id)parserChatJSON:(id)arg1;
- (void)connectChat;
- (void)disConnectChat;
- (void)openWithSectionId:(id)arg1 type:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hiddenBackgroundView;
- (void)_prepareBackgroundView:(id)arg1;
- (void)handleInterruptionNotification:(id)arg1;
- (void)_prepareAVPlayer;
- (void)prepareViewWithStatus:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCourseId:(id)arg1 sectionModel:(id)arg2 checkModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

