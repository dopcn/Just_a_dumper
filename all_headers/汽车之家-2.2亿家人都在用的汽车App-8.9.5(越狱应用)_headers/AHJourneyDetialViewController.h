//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AHUIFramework/AHViewController.h>

#import "AHLoadingViewDelegate-Protocol.h"
#import "AHStencilViewControllerDelegate-Protocol.h"
#import "AHStencilViewControllerLayoutDataSource-Protocol.h"
#import "AHTravelCommentViewControllerDelegate-Protocol.h"
#import "AHTravelCommentViewDelegate-Protocol.h"
#import "AHTravelDetailToolBarDelegate-Protocol.h"
#import "AHTravelShareViewDelegate-Protocol.h"
#import "AHVerticalPopViewDelegate-Protocol.h"
#import "AHWUWebViewDelegate-Protocol.h"
#import "MWPhotoBrowserDelegate-Protocol.h"
#import "UIViewControllerInAHNavigationProtocol-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class AHJSBridgePlugin, AHJourneyDetailDataController, AHLoadingView, AHNewWebView, AHStencilViewController, AHTipStatusView, AHTravelCommentView, AHTravelCommentViewController, AHTravelDetailToolBar, AHTravelShareView, AHTravelVerticalPopView, NSString, UIButton, UIControl, UIView;

@interface AHJourneyDetialViewController : AHViewController <AHStencilViewControllerDelegate, AHStencilViewControllerLayoutDataSource, AHTravelDetailToolBarDelegate, UIWebViewDelegate, AHLoadingViewDelegate, AHTravelCommentViewControllerDelegate, AHTravelCommentViewDelegate, AHTravelShareViewDelegate, AHVerticalPopViewDelegate, MWPhotoBrowserDelegate, UIViewControllerInAHNavigationProtocol, AHWUWebViewDelegate>
{
    _Bool _showKeyboard;
    _Bool _changeContentSizeWhenWebViewFinished;
    _Bool _isFirstTimeEnter;
    _Bool _locatedCommentArea;
    _Bool _isSelectedZanWhenLogin;
    NSString *_journeyId;
    AHTravelCommentViewController *_commentVC;
    AHStencilViewController *_stencilVC;
    AHTravelDetailToolBar *_toolBar;
    UIButton *_actionButton;
    AHLoadingView *_loadingView;
    AHNewWebView *_webView;
    AHJourneyDetailDataController *_dataController;
    AHTravelCommentView *_commentInputView;
    AHTravelVerticalPopView *_popView;
    AHTravelShareView *_shareView;
    AHTipStatusView *_tipStatusView;
    UIView *_container;
    UIControl *_inputViewCover;
    AHJSBridgePlugin *_jsBridge;
    double _webViewfinalHeight;
    long long _selectedPicIndex;
}

@property(nonatomic) _Bool isSelectedZanWhenLogin; // @synthesize isSelectedZanWhenLogin=_isSelectedZanWhenLogin;
@property(nonatomic) _Bool locatedCommentArea; // @synthesize locatedCommentArea=_locatedCommentArea;
@property(nonatomic) long long selectedPicIndex; // @synthesize selectedPicIndex=_selectedPicIndex;
@property(nonatomic) double webViewfinalHeight; // @synthesize webViewfinalHeight=_webViewfinalHeight;
@property(nonatomic) _Bool isFirstTimeEnter; // @synthesize isFirstTimeEnter=_isFirstTimeEnter;
@property(nonatomic) _Bool changeContentSizeWhenWebViewFinished; // @synthesize changeContentSizeWhenWebViewFinished=_changeContentSizeWhenWebViewFinished;
@property(retain, nonatomic) AHJSBridgePlugin *jsBridge; // @synthesize jsBridge=_jsBridge;
@property(retain, nonatomic) UIControl *inputViewCover; // @synthesize inputViewCover=_inputViewCover;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) AHTipStatusView *tipStatusView; // @synthesize tipStatusView=_tipStatusView;
@property(retain, nonatomic) AHTravelShareView *shareView; // @synthesize shareView=_shareView;
@property(retain, nonatomic) AHTravelVerticalPopView *popView; // @synthesize popView=_popView;
@property(retain, nonatomic) AHTravelCommentView *commentInputView; // @synthesize commentInputView=_commentInputView;
@property(retain, nonatomic) AHJourneyDetailDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) AHNewWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) AHLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) AHTravelDetailToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) AHStencilViewController *stencilVC; // @synthesize stencilVC=_stencilVC;
@property(retain, nonatomic) AHTravelCommentViewController *commentVC; // @synthesize commentVC=_commentVC;
@property(nonatomic) _Bool showKeyboard; // @synthesize showKeyboard=_showKeyboard;
@property(retain, nonatomic) NSString *journeyId; // @synthesize journeyId=_journeyId;
- (void).cxx_destruct;
- (void)p_setNaviRightBtnTitle;
- (void)p_setupToolBar;
- (void)p_go2LoginVC;
- (void)p_go2PhotoBrowser;
- (void)p_go2CommentArea;
- (_Bool)p_isLogin;
- (void)p_hidenCommentInputView;
- (void)p_showCommentInputViewWithTitle:(id)arg1 replyId:(id)arg2;
- (void)p_removeLoginNotifation;
- (void)p_addLoginNotifation;
- (void)p_removeObserverForWebView;
- (void)p_addObserverForWebView;
- (void)p_addZan;
- (void)p_fetchPicData;
- (void)p_updataCommentList;
- (void)p_fetchFoundationDataComplete:(CDUnknownBlockType)arg1;
- (void)p_uploadJourneyH5;
- (void)p_loadAllDataFromServer;
- (void)p_resetWebviewContentSize;
- (void)p_setupCommentFrame;
- (void)p_setupStencilViewController;
- (void)p_addSubviews;
- (id)p_createStatisticsShareParam;
- (id)p_createStatisticsParam;
- (void)p_reloadTravelWithMsg:(id)arg1;
- (id)getTravelRefineByBaseInfo;
- (void)p_refreshBasicInfo;
- (void)p_refreshDetailTravelStatusWithRefine:(id)arg1;
- (void)p_sendUserTokenToH5;
- (void)p_sendUserIdToH5;
- (unsigned long long)supportNavigationBackDirection;
- (_Bool)navigationBackCanBeginWithDirection:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (id)rightExtensionInViewContoller:(id)arg1;
- (id)clientViewInViewContoller:(id)arg1 clientViewSize:(struct CGSize)arg2 contentInset:(struct UIEdgeInsets)arg3;
- (int)viewModeInViewContoller:(id)arg1;
- (int)backButtonTypeInViewController:(id)arg1;
- (_Bool)hasFooterBarInViewController:(id)arg1;
- (void)backButtonPressInViewController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)photoBrowser:(id)arg1 didDisplayPhotoAtIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)commentDidSend:(id)arg1 commentView:(id)arg2;
- (void)commentDidCancel:(id)arg1 commentView:(id)arg2;
- (void)replyButtonDidClickCommentModel:(id)arg1;
- (void)toWebViewScrollAddHeight:(double)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)AHLoadingViewReloadClick:(id)arg1;
- (void)shareFailed;
- (void)shareSuccess;
- (void)shareButtonDidSelected;
- (void)didSelectedZan:(id)arg1;
- (void)didSelectedShare:(id)arg1;
- (void)didSelectedComment:(id)arg1;
- (void)didSelectedPublish:(id)arg1;
- (void)travelDetailToolBar:(id)arg1 didSelectedCollection:(id)arg2;
- (void)applyJouneyWithActionType:(long long)arg1;
- (void)cancelJourneyWithActionType:(long long)arg1;
- (void)actionSheet:(id)arg1 addCancelBtnWithTitle:(id)arg2 applyType:(long long)arg3;
- (void)actionSheet:(id)arg1 addCancelBtnWithTitle:(id)arg2 cancelType:(long long)arg3;
- (void)p_actionButtonAction:(id)arg1;
- (void)p_loginSuccess;
- (void)p_cancelCover;
- (void)dealloc;
- (void)setup:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

