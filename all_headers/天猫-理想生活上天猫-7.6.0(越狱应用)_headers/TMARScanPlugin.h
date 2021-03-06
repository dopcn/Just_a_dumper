//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBScanPlugin.h"

#import "FinderARViewControllerDelegate-Protocol.h"
#import "TMARScanAnimationViewDelegate-Protocol.h"
#import "TMARScanExitDelegate-Protocol.h"
#import "TMScanARMagicBookThumbnailListViewDelegate-Protocol.h"
#import "TMScanARMagicRetryViewDelegate-Protocol.h"

@class FARTrackMarker, FinderARViewController, NSCondition, NSDate, NSString, TMARScanAnimationView, TMARScanFileManager, TMARScanMagicBookModel, TMARScanMagicBookThumbnailListView, TMARScanMagicRetryView, TMARScanResponse, TMArScanNetManager, TMFileBundleManager, TMWebViewController, UIButton, UIImage, UILabel, UIProgressView, UIView;
@protocol TMScanARPluginDelegate, WVWebViewProtocol;

@interface TMARScanPlugin : TBScanPlugin <TMARScanAnimationViewDelegate, TMARScanExitDelegate, FinderARViewControllerDelegate, TMScanARMagicBookThumbnailListViewDelegate, TMScanARMagicRetryViewDelegate>
{
    _Bool _useARKit;
    unsigned long long _arStatus;
    id <TMScanARPluginDelegate> _delegate;
    TMFileBundleManager *_bundleManager;
    NSString *_animationResURL;
    NSString *_animationResBundle;
    TMArScanNetManager *_netManager;
    TMARScanResponse *_mockResponse;
    TMARScanAnimationView *_animationView;
    UIView<WVWebViewProtocol> *_webView;
    TMWebViewController *_webviewController;
    UIProgressView *_progressView;
    FinderARViewController *_farVC;
    TMARScanFileManager *_fileManager;
    TMARScanMagicBookModel *_magicBook;
    TMARScanMagicBookThumbnailListView *_thumbnailsListView;
    UILabel *_magicBookTitleLabel;
    FARTrackMarker *_activeMarker;
    TMARScanMagicRetryView *_retryView;
    UIButton *_refreshButton;
    UIButton *_shareSnapShotButton;
    NSString *_engineVersionStr;
    NSDate *_lastRequestDate;
    double _requestInterval;
    unsigned long long _continuousFailedCount;
    NSCondition *_condition;
    UIImage *_snapshotImage;
    long long _sequence;
}

@property(nonatomic) long long sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) UIImage *snapshotImage; // @synthesize snapshotImage=_snapshotImage;
@property(retain, nonatomic) NSCondition *condition; // @synthesize condition=_condition;
@property(nonatomic) unsigned long long continuousFailedCount; // @synthesize continuousFailedCount=_continuousFailedCount;
@property(nonatomic) double requestInterval; // @synthesize requestInterval=_requestInterval;
@property(retain, nonatomic) NSDate *lastRequestDate; // @synthesize lastRequestDate=_lastRequestDate;
@property(copy, nonatomic) NSString *engineVersionStr; // @synthesize engineVersionStr=_engineVersionStr;
@property(retain, nonatomic) UIButton *shareSnapShotButton; // @synthesize shareSnapShotButton=_shareSnapShotButton;
@property(retain, nonatomic) UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) TMARScanMagicRetryView *retryView; // @synthesize retryView=_retryView;
@property(retain, nonatomic) FARTrackMarker *activeMarker; // @synthesize activeMarker=_activeMarker;
@property(retain, nonatomic) UILabel *magicBookTitleLabel; // @synthesize magicBookTitleLabel=_magicBookTitleLabel;
@property(retain, nonatomic) TMARScanMagicBookThumbnailListView *thumbnailsListView; // @synthesize thumbnailsListView=_thumbnailsListView;
@property(retain, nonatomic) TMARScanMagicBookModel *magicBook; // @synthesize magicBook=_magicBook;
@property(retain, nonatomic) TMARScanFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(nonatomic) _Bool useARKit; // @synthesize useARKit=_useARKit;
@property(retain, nonatomic) FinderARViewController *farVC; // @synthesize farVC=_farVC;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) TMWebViewController *webviewController; // @synthesize webviewController=_webviewController;
@property(retain, nonatomic) UIView<WVWebViewProtocol> *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) TMARScanAnimationView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) TMARScanResponse *mockResponse; // @synthesize mockResponse=_mockResponse;
@property(retain, nonatomic) TMArScanNetManager *netManager; // @synthesize netManager=_netManager;
@property(copy, nonatomic) NSString *animationResBundle; // @synthesize animationResBundle=_animationResBundle;
@property(copy, nonatomic) NSString *animationResURL; // @synthesize animationResURL=_animationResURL;
@property(retain, nonatomic) TMFileBundleManager *bundleManager; // @synthesize bundleManager=_bundleManager;
@property(nonatomic) __weak id <TMScanARPluginDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long arStatus; // @synthesize arStatus=_arStatus;
- (void).cxx_destruct;
- (void)onProcess:(id)arg1;
- (void)didTMARScanAnimationViewAnimatinoFinish;
- (_Bool)didTMARScanExit;
- (void)didTMScanARMagicRetryViewClickRetry;
- (void)didTMScanARMagicBookThumbnailListViewClickBack;
- (void)cleanupAnimationView;
- (void)removeRetryView;
- (void)addRetryView;
- (void)removeExitButton;
- (void)loadExitButton;
- (void)downloadBundleWithURL:(id)arg1 andBundleName:(id)arg2 needZip:(_Bool)arg3 andHandler:(CDUnknownBlockType)arg4;
- (void)handleResponse:(id)arg1;
- (void)dealWithAnimationWithResponse:(id)arg1;
- (void)updateARStatus:(unsigned long long)arg1;
- (void)sendRequest;
- (id)response;
- (void)startDetect;
- (void)stopDetect;
- (void)dealloc;
- (id)init;
- (void)didARKitUpdatePlaneState:(unsigned long long)arg1;
- (void)didMarkerAnimationFinish:(id)arg1;
- (void)didMarkerOnDestory:(id)arg1;
- (void)didMarkerOnLost:(id)arg1;
- (void)didMarkerOnDetected:(id)arg1;
- (void)didMarkerOnLoaded:(id)arg1;
- (void)dealWithVideoResponse:(id)arg1;
- (void)dealWithMagicResPackageResponse:(id)arg1;
- (void)AVCaptureSessionDidStopRunning:(id)arg1;
- (void)cleanupMagicBooKARView;
- (id)screenshotPath;
- (void)clearCache;
- (id)cacheFolder;
- (void)onClickShareSnapshoot;
- (void)removeShareSnapshootButton;
- (void)addShareSnapshootButton;
- (void)onClickRefreshButton;
- (void)removeRefreshButton;
- (void)addRefreshButton;
- (void)addMagicARView;
- (_Bool)addMagicARViewForVideo;
- (_Bool)addMagicARViewForScriptType;
- (_Bool)addMagicARViewForBook;
- (void)removeMagicBookThumbnailListView;
- (void)addMagicBookThumbnailListView;
- (void)removeMagicBookTitleLabel;
- (void)addMagicBookTitleLabel;
- (void)cancelDownload;
- (void)downloadARResPackage;
- (void)cleanupWebView;
- (void)webviewDidFinished;
- (void)webViewDidFailed;
- (void)dealWithJumpURLResponse:(id)arg1;
- (void)dealWithLoadURLResponse:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

