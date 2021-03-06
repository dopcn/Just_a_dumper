//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BrowseUnit, MttFeedsVideoPlayItem, MttQBWebView, MttTask, MttVideoAdLandInfo, MttVideoPlayItem, NSArray, NSData, NSMutableArray, NSString, UIImage, UITextField, UIView, UIViewController, UIWindow, UserAccount, Video, VideoGroup, VideoHistoryEntry, VideoStatSniffItemInfo, WonderAVMovieViewController;
@protocol MttShareBusinessCenterDataSource, MttShareBusinessCenterDelegate;

@protocol MttQBVideoBridgeDelegate <NSObject>

@optional
- (_Bool)supportPortraitPlayMode:(MttVideoPlayItem *)arg1;
- (int)netWorkAPNType;
- (_Bool)isWangkaUser;
- (_Bool)appIsInBackground;
- (UIView *)getVideoSniffTipsViewInstance:(SEL)arg1 actionObj:(id)arg2 closeSel:(SEL)arg3 closeObj:(id)arg4 viewSize:(struct CGSize)arg5 title:(NSString *)arg6;
- (UIViewController *)getMttQvZipDownloadTaskViewControllerInstance;
- (void)showPanelWithLoginCaller:(long long)arg1;
- (void)loadAlbumVideos;
- (void)updateDataSources;
- (void)dismissAllMessageView;
- (long long)getVideoFilesCount;
- (_Bool)itemHasBeenAutoPlay:(MttFeedsVideoPlayItem *)arg1;
- (NSString *)fileTypeStringWithExtension:(NSString *)arg1;
- (void)airTransfer_cancelFileUpload:(long long)arg1;
- (void)procAirTransferWithFileURL:(NSString *)arg1 title:(NSString *)arg2 type:(unsigned long long)arg3 inRect:(struct CGRect)arg4 inView:(UIView *)arg5 snapshot:(UIImage *)arg6 delegate:(id)arg7;
- (UIViewController *)getMttFileVideoViewController_Instance;
- (MttTask *)createTaskWithURL:(NSString *)arg1 taskType:(int)arg2;
- (NSArray *)getTaskArrayWithType:(int)arg1;
- (NSArray *)getDownloadingTaskArrayWithTaskType:(int)arg1;
- (void)doTokenFeatureWithFeature:(NSString *)arg1 uid:(NSString *)arg2 url:(NSString *)arg3 callbackName:(NSString *)arg4 andWebView:(MttQBWebView *)arg5 block:(void (^)(_Bool))arg6;
- (id)mttPresentModalViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (NSString *)currentURLString;
- (void)resumeToBrowserState;
- (void)quitMyVideoViewAndVisteWebsite:(NSString *)arg1;
- (NSArray *)getVideoWhitelistWithType:(long long)arg1;
- (void)reset_MttAVMovieViewController_xzDelegate:(id)arg1;
- (UITextField *)get_MttVoiceEnterTextFieldWithFrame:(struct CGRect)arg1;
- (void)closeWithoutAnimationWithMttMovieViewController:(UIViewController *)arg1;
- (void)appendResolutionsWithWebUrl:(NSString *)arg1 ClarityCount:(long long)arg2 withMttMovieViewController:(UIViewController *)arg3;
- (int)movieController_videoController_controlSource_controlState:(UIViewController *)arg1;
- (WonderAVMovieViewController *)getMovieController_videoController:(UIViewController *)arg1;
- (void)setMovieInfoObtainerNilWithMttMovieViewController:(UIViewController *)arg1;
- (void)willPlayNextItemWithMttMovieViewController:(UIViewController *)arg1;
- (void)playVideoItem:(MttVideoPlayItem *)arg1 withMttMovieViewController:(UIViewController *)arg2;
- (UIViewController *)getMttMovieViewControllerInstance;
- (void)removePlayerWindowWithFeedsLiveViewController:(UIViewController *)arg1;
- (void)reportLiveLogWithFeedsLiveViewController:(UIViewController *)arg1;
- (void)switchToFullScreenFromMiniWindowWithFeedsLiveViewController:(UIViewController *)arg1;
- (void)checkAccountValidity;
- (UserAccount *)qbCurrentAccount;
- (UserAccount *)defaultOrCurrentAccount;
- (_Bool)isLoginForAccountType:(long long)arg1;
- (void)showToastWithText:(NSString *)arg1 withStyle:(long long)arg2;
- (void)visitVideo:(Video *)arg1 webURL:(NSString *)arg2 playedProgress:(double)arg3 visit:(_Bool)arg4;
- (void)bookmarkVideoGroup:(VideoGroup *)arg1 bookmark:(_Bool)arg2 inWebScene:(_Bool)arg3 srcIndex:(long long)arg4;
- (_Bool)isVideoGroupBookmarked:(VideoGroup *)arg1;
- (VideoHistoryEntry *)getLastestHistoryByVideoGroup:(VideoGroup *)arg1;
- (_Bool)isMultiVideoPageUrl:(NSString *)arg1;
- (NSData *)getQBID;
- (NSString *)getLocalVideoFileName:(NSString *)arg1;
- (NSMutableArray *)getLocalVideoGroupFiles;
- (NSArray *)getLocalVideoFiles;
- (void)reportSniffPlayInfo:(VideoStatSniffItemInfo *)arg1;
- (void)reportAction:(long long)arg1 completion:(void (^)(NSError *, long long))arg2;
- (void)showAdInfoWithUrlString:(NSString *)arg1;
- (void)showSharePanelWithDataSource:(id <MttShareBusinessCenterDataSource>)arg1 delegate:(id <MttShareBusinessCenterDelegate>)arg2 businessType:(int)arg3 deleteChannel:(NSArray *)arg4;
- (void)downloadCommonFilesFromNet;
- (void)videoAdAction:(MttVideoAdLandInfo *)arg1;
- (_Bool)canHappyplay;
- (_Bool)isInChinaArea;
- (long long)currentMessageViewTag;
- (void)pauseOtherAudio;
- (void)playUGCVideoWithQBUrl:(NSString *)arg1;
- (void)quickCloseAppStoreView:(UIViewController *)arg1;
- (NSString *)feedBackUrl:(NSString *)arg1;
- (_Bool)isAppstoreChannel;
- (void)setSendBlock:(void (^)(void))arg1;
- (int)styleWallPaper;
- (Class)MttQvZipDownloadController_class;
- (Class)MttMovieViewController_class;
- (Class)MttFeedsADVideoSplitUnit_class;
- (Class)MttFeedsLivePlayerView_class;
- (Class)MttFeedsLiveViewController_class;
- (Class)MttFeedsVideoBrowserController_class;
- (Class)MttFeedsVideoBrowserWebViewController_class;
- (Class)MttFeedsVideoTableViewCell_class;
- (Class)UIHomePageFeedsBaseView_class;
- (Class)UIOnlineSkinController_class;
- (Class)MttAdBrowser_class;
- (Class)MttCommonWebViewController_class;
- (Class)MttAppHalfScreenUnit_class;
- (Class)DocFilePreviewViewController_class;
- (Class)StartPageBrowseUnit_class;
- (Class)MttAlbumVideoFile_class;
- (Class)MttStoreProductViewController_class;
- (Class)UIBrowserController_class;
- (NSString *)getBrowserSignature:(NSString *)arg1;
- (NSString *)getVqqSignature:(NSString *)arg1;
- (_Bool)currUnitIsSpecalUnit;
- (long long)preferredStatusBarStyle;
- (_Bool)isMainBrowserViewShownInPortrait;
- (_Bool)isMainBrowserViewShownInLandscape;
- (_Bool)disableAudioSession;
- (void)mainBrowserView_browseWindow_addSubView:(UIView *)arg1;
- (UIView *)mainBrowserView;
- (_Bool)prefersStatusBarHidden;
- (_Bool)focusBrowseWindow_loadUrl:(NSString *)arg1;
- (_Bool)loadUrl:(NSString *)arg1;
- (void)setNeedsStatusBarAppearanceUpdate;
- (UIWindow *)BrowserAppDelegate_sharedInstance;
- (void)mttPresentViewController:(UIViewController *)arg1 needsNavigationController:(_Bool)arg2 dismissOtherViewControllers:(_Bool)arg3 animated:(_Bool)arg4 completion:(void (^)(void))arg5;
- (void)mttDismissModalViewControllerWithBlock:(void (^)(void))arg1;
- (void)mttDismissModalViewController;
- (UIViewController *)mainController;
- (UIViewController *)currentVisibleViewController;
- (BrowseUnit *)curUnit;
- (void)onOpenInCurrentWindow:(NSString *)arg1;
- (UIViewController *)currentModalController;
@end

