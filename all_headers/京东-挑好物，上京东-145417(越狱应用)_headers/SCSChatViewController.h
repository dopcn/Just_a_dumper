//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCSBottomViewControllerDelegate-Protocol.h"
#import "SCSChatManagerDelegate-Protocol.h"
#import "SCSHeaderViewControllerDelegate-Protocol.h"
#import "SCSIEPhotoBrowserViewControllerDataSource-Protocol.h"
#import "SCSWebViewControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SCSBottomViewController, SCSHeaderViewController, SCSTipView, SCSWebViewController;

@interface SCSChatViewController : UIViewController <SCSBottomViewControllerDelegate, UIScrollViewDelegate, SCSHeaderViewControllerDelegate, SCSIEPhotoBrowserViewControllerDataSource, UINavigationControllerDelegate, SCSWebViewControllerDelegate, SCSChatManagerDelegate>
{
    _Bool _parentNavBarHiden;
    _Bool _isBottomShown;
    _Bool _hasDoneChatInfoBack;
    _Bool _isWebViewFinished;
    _Bool _isFirstAppear;
    _Bool _needSyncSessionList;
    NSString *_from;
    NSString *_pid;
    NSString *_orderId;
    NSString *_groupId;
    NSString *_venderId;
    NSString *_entry;
    NSString *_pin;
    NSString *_remindWord;
    SCSWebViewController *_webVc;
    SCSHeaderViewController *_headerVc;
    SCSBottomViewController *_bottomVc;
    double _fBottomHeight;
    double _prevBottomHeight;
    long long _preBottomModule;
    NSMutableArray *_photoList;
    NSString *_chatUUID;
    SCSTipView *_tipView;
    SCSTipView *_layView;
}

@property(nonatomic) _Bool needSyncSessionList; // @synthesize needSyncSessionList=_needSyncSessionList;
@property(retain, nonatomic) SCSTipView *layView; // @synthesize layView=_layView;
@property(retain, nonatomic) SCSTipView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) NSString *chatUUID; // @synthesize chatUUID=_chatUUID;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(nonatomic) _Bool isWebViewFinished; // @synthesize isWebViewFinished=_isWebViewFinished;
@property(nonatomic) _Bool hasDoneChatInfoBack; // @synthesize hasDoneChatInfoBack=_hasDoneChatInfoBack;
@property(retain, nonatomic) NSMutableArray *photoList; // @synthesize photoList=_photoList;
@property(nonatomic) long long preBottomModule; // @synthesize preBottomModule=_preBottomModule;
@property(nonatomic) _Bool isBottomShown; // @synthesize isBottomShown=_isBottomShown;
@property(nonatomic) _Bool parentNavBarHiden; // @synthesize parentNavBarHiden=_parentNavBarHiden;
@property(nonatomic) double prevBottomHeight; // @synthesize prevBottomHeight=_prevBottomHeight;
@property(nonatomic) double fBottomHeight; // @synthesize fBottomHeight=_fBottomHeight;
@property(retain, nonatomic) SCSBottomViewController *bottomVc; // @synthesize bottomVc=_bottomVc;
@property(retain, nonatomic) SCSHeaderViewController *headerVc; // @synthesize headerVc=_headerVc;
@property(retain, nonatomic) SCSWebViewController *webVc; // @synthesize webVc=_webVc;
@property(copy, nonatomic) NSString *remindWord; // @synthesize remindWord=_remindWord;
@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(copy, nonatomic) NSString *entry; // @synthesize entry=_entry;
@property(copy, nonatomic) NSString *venderId; // @synthesize venderId=_venderId;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
- (void).cxx_destruct;
- (void)tryDoWithState:(long long)arg1;
- (void)didError:(long long)arg1;
- (void)doReLogin;
- (void)doRetrySession;
- (void)sholudSyncSessionList;
- (void)updateAidWithParam:(id)arg1;
- (void)errorWithState:(long long)arg1;
- (void)errorChatInfoWithChatId:(id)arg1 h5Param:(id)arg2;
- (void)httpProxyResponse:(id)arg1 error:(id)arg2 chatId:(id)arg3 request:(id)arg4;
- (void)showMessageWithList:(id)arg1 venderId:(id)arg2 venderIgnored:(_Bool)arg3;
- (void)resultFetchDataWithList:(id)arg1 chatId:(id)arg2;
- (void)doFetchDataWithParam:(id)arg1;
- (void)makeIconMap;
- (void)makeGlobalParam:(id)arg1;
- (void)showNewWebViewWithUrl:(id)arg1;
- (void)webViewDidJsFunc:(id)arg1 param:(id)arg2 handle:(id)arg3;
- (void)webViewDidFailLoadWithError:(id)arg1;
- (void)webViewDidFinishLoad;
- (void)webLoadFailure;
- (void)doH5FiexdBottom:(_Bool)arg1;
- (void)sdkCallJsWithCallback:(id)arg1;
- (void)doPrintLog:(id)arg1;
- (void)doOpenWebView:(id)arg1;
- (void)doH5SendMessage:(id)arg1;
- (void)doShowPhotoBrowser:(id)arg1;
- (void)doShowToolbar:(id)arg1;
- (void)doCallbackWithCode:(id)arg1 msg:(id)arg2 method:(id)arg3 param:(id)arg4;
- (void)doGetCacheMsgData:(id)arg1;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numOfPhotosInBrowser:(id)arg1;
- (void)showPhotoBrowser:(id)arg1 atIndex:(long long)arg2;
- (void)hideBottomBoard;
- (void)showBottomIsShown:(_Bool)arg1;
- (void)showBottomPreModule;
- (void)showBottomUnkownModule;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)doBackRelease;
- (void)headerVcDidBack;
- (void)bottomOpenWebPopupWithType:(long long)arg1;
- (void)bottomViewKeyBoardWillShow:(_Bool)arg1;
- (void)bottomViewDidSendText:(id)arg1;
- (void)bottomViewUpdateFrame:(struct CGRect)arg1;
- (void)loadChatInfoFailure:(id)arg1;
- (void)loadChatInfoParam:(id)arg1;
- (void)loadChatInfoSuccess:(id)arg1 header:(id)arg2 h5Param:(id)arg3;
- (void)updateChatInfo:(id)arg1 draft:(id)arg2 header:(id)arg3 h5Param:(id)arg4;
- (void)updateViewFrame;
- (struct CGRect)layFrame;
- (struct CGRect)tipBarFrame;
- (void)webLoadFile;
- (void)removeBottom;
- (void)initBottom;
- (void)removeWebVc;
- (void)initWebVc;
- (double)headerVcMaxY;
- (void)removeHeaderVc;
- (void)initHeaderVc;
- (void)setupContextInfo;
- (void)setupDefault;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)showLoading;
- (void)viewDidLoad;
- (void)setupInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

