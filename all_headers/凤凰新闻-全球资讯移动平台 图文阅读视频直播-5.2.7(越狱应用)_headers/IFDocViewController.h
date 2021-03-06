//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IFActiveViewController.h"

#import "DispatchPaning2Pop-Protocol.h"
#import "IFMoviePlayerControllerDelegate-Protocol.h"
#import "IfengData_RequestListener-Protocol.h"
#import "IfengNewsButtonDatasourceAndDelegate-Protocol.h"
#import "InputViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerDispatchable-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"
#import "VoteSurveyHandlerDelegate-Protocol.h"

@class CTCommentViewController, IFDocAction, IFDocumentDataModel, IFMoviePlayerController, IfBindMultipleScrollView, JSContext, NSString, PanPushAnimationFromRight, UITableView, UIView, UIWebView, VoteSurveyHandler;

@interface IFDocViewController : IFActiveViewController <UIViewControllerDispatchable, IfengNewsButtonDatasourceAndDelegate, IfengData_RequestListener, InputViewDelegate, UIGestureRecognizerDelegate, DispatchPaning2Pop, UIWebViewDelegate, UITableViewDelegate, UITableViewDataSource, VoteSurveyHandlerDelegate, IFMoviePlayerControllerDelegate>
{
    int _videoPlayTimes;
    _Bool _isRunAudio;
    _Bool _isCommentSuccess;
    _Bool _issuccess;
    _Bool _isNavgShowed;
    _Bool _isShowPic;
    float _tempJSSCrollOffsetY;
    NSString *_relAccess;
    IfBindMultipleScrollView *_bindView;
    UIWebView *_webView;
    UITableView *_tableView;
    IFDocumentDataModel *_dataModel;
    VoteSurveyHandler *_voteSurveyHandler;
    long long _releativeCount;
    long long _adCount;
    long long _commentCount;
    CTCommentViewController *_commentViewController;
    PanPushAnimationFromRight *_panpushAnimation;
    JSContext *_jsContext;
    IFDocAction *_action;
    IFMoviePlayerController *_moviePlayer;
    UIView *_markView;
    NSString *_baseUrl;
    double _fitSizeY;
    double _timeEnter;
    double _timeExit;
    double _tempJSSCrollOffTime;
    NSString *_phoneString;
    NSString *_isToComment;
}

+ (_Bool)isMobileNumber:(id)arg1;
+ (id)dealWithPhoneNumber:(id)arg1;
@property(retain, nonatomic) NSString *isToComment; // @synthesize isToComment=_isToComment;
@property(retain, nonatomic) NSString *phoneString; // @synthesize phoneString=_phoneString;
@property(nonatomic) float tempJSSCrollOffsetY; // @synthesize tempJSSCrollOffsetY=_tempJSSCrollOffsetY;
@property(nonatomic) double tempJSSCrollOffTime; // @synthesize tempJSSCrollOffTime=_tempJSSCrollOffTime;
@property(nonatomic) double timeExit; // @synthesize timeExit=_timeExit;
@property(nonatomic) double timeEnter; // @synthesize timeEnter=_timeEnter;
@property(nonatomic) double fitSizeY; // @synthesize fitSizeY=_fitSizeY;
@property(retain, nonatomic) NSString *baseUrl; // @synthesize baseUrl=_baseUrl;
@property(retain, nonatomic) UIView *markView; // @synthesize markView=_markView;
@property(nonatomic) _Bool isShowPic; // @synthesize isShowPic=_isShowPic;
@property(nonatomic) _Bool isNavgShowed; // @synthesize isNavgShowed=_isNavgShowed;
@property(retain, nonatomic) IFMoviePlayerController *moviePlayer; // @synthesize moviePlayer=_moviePlayer;
@property(retain, nonatomic) IFDocAction *action; // @synthesize action=_action;
@property(retain, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
@property(retain, nonatomic) PanPushAnimationFromRight *panpushAnimation; // @synthesize panpushAnimation=_panpushAnimation;
@property(retain, nonatomic) CTCommentViewController *commentViewController; // @synthesize commentViewController=_commentViewController;
@property(nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) long long adCount; // @synthesize adCount=_adCount;
@property(nonatomic) long long releativeCount; // @synthesize releativeCount=_releativeCount;
@property(retain, nonatomic) VoteSurveyHandler *voteSurveyHandler; // @synthesize voteSurveyHandler=_voteSurveyHandler;
@property(nonatomic) _Bool issuccess; // @synthesize issuccess=_issuccess;
@property(nonatomic) _Bool isCommentSuccess; // @synthesize isCommentSuccess=_isCommentSuccess;
@property(retain, nonatomic) IFDocumentDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) IfBindMultipleScrollView *bindView; // @synthesize bindView=_bindView;
@property(retain, nonatomic) NSString *relAccess; // @synthesize relAccess=_relAccess;
@property(nonatomic) _Bool isRunAudio; // @synthesize isRunAudio=_isRunAudio;
- (void).cxx_destruct;
- (void)supportClickedWihtIndexPath:(id)arg1;
- (void)goOrigin:(id)arg1;
- (void)goSlides:(id)arg1;
- (void)dispatchLink:(id)arg1 url:(id)arg2;
- (void)picShowComplete;
- (void)picShowStart;
- (void)showBigPic:(id)arg1 frame:(struct CGRect)arg2;
- (void)sendVideoEndStat;
- (void)reloadMyTableView;
- (void)sendVoteSurveyReusltInDoc:(_Bool)arg1;
- (void)sendVoteSurveyReuslt:(_Bool)arg1;
- (void)IFMovieFishedWithType:(int)arg1;
- (_Bool)APCheckIfAppInstalled:(id)arg1;
- (void)openVideoAppWithIndex:(int)arg1;
- (void)openPhoneCallViewWithphoneNumber:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)callPhoneWithIndex:(id)arg1;
- (void)playVideo:(int)arg1 frame:(struct CGRect)arg2 oldFrame:(struct CGRect)arg3;
- (void)doPanRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)checkAdReady:(id)arg1;
- (float)caculateSurveyCell:(id)arg1:(long long)arg2;
- (id)createBlankCell:(id)arg1 isCommentColor:(_Bool)arg2;
- (float)caculateVoteCell:(id)arg1:(long long)arg2;
- (float)caculateCommentsCell:(id)arg1:(long long)arg2;
- (_Bool)isPicVote:(id)arg1;
- (void)didClickDocSliderVideoCell:(id)arg1;
- (void)didClickChannelRelationCell:(id)arg1;
- (void)didselectRelationCell:(id)arg1:(long long)arg2;
- (void)didselectWonderfulCell:(id)arg1 WithIndex:(id)arg2 WithRecommend:(_Bool)arg3;
- (void)didselectCommentsCell:(id)arg1:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (id)createWonderfulslideCell:(id)arg1:(long long)arg2;
- (id)createDocSliderVideoCell:(id)arg1 WithIndexPath:(id)arg2;
- (id)createRelationCell:(id)arg1 WithIndexPath:(id)arg2;
- (id)createSurveyCell:(id)arg1:(long long)arg2;
- (id)createVoteCell:(id)arg1:(long long)arg2;
- (id)createQuickShareCell:(id)arg1 WithIndexPath:(id)arg2;
- (id)createTagCell:(id)arg1 WithIndexPath:(id)arg2;
- (id)createRecommendCell:(id)arg1 WithIndexPath:(id)arg2;
- (id)createSurveyadCell:(id)arg1 WithIndexPath:(id)arg2;
- (id)createWonderfulrecommendCell:(id)arg1:(long long)arg2;
- (id)createBannerAdCell:(id)arg1;
- (id)createWrodadCell:(id)arg1:(id)arg2;
- (id)createCommentBottomCell:(id)arg1;
- (id)createCommentTopCell:(id)arg1;
- (id)createNormalSectionTitleCell:(id)arg1 title:(id)arg2;
- (id)createCommentCell:(id)arg1 dic:(id)arg2 row:(long long)arg3 bottomRowIndex:(long long)arg4;
- (id)createCommentCell:(id)arg1:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)calculateChannelSearchCellHeigh:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)scrolltolastLcation;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)initVoteSurveyHandler;
- (void)localMyCommentHandle:(id)arg1 isReply:(id)arg2;
- (void)loadSurveyListInDoc:(_Bool)arg1;
- (void)updateCommentsCount:(long long)arg1;
- (void)loadDocAd;
- (void)loadComment;
- (void)loadVote;
- (void)_pinchGr:(id)arg1;
- (void)addNavagationButton;
- (void)requestDocData;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)willPop:(id)arg1;
- (void)willPush:(id)arg1;
- (void)willDispatch:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)shareBackToComment;
- (void)dealloc;
- (id)init;
- (void)storeReadHistory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

