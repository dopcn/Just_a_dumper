//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TinyUIWebViewExDelegate-Protocol.h"
#import "UCARCameraViewDelegate-Protocol.h"
#import "UCARDetectorDelegate-Protocol.h"
#import "UCARJSHandlerDelegate-Protocol.h"
#import "UCStatusbarControllerProtocol-Protocol.h"

@class NSArray, NSString, TinyUIWebViewEx, UCARCameraView, UCARJSHandler, UCARTracker, UIButton, UIImageView, UIView;
@protocol UCARProxyProviderProtocol;

@interface UCARRecognitionController : UIViewController <UCStatusbarControllerProtocol, TinyUIWebViewExDelegate, UCARJSHandlerDelegate, UCARCameraViewDelegate, UCARDetectorDelegate>
{
    _Bool _hasDectected;
    id <UCARProxyProviderProtocol> _provider;
    UCARJSHandler *_jsHandler;
    TinyUIWebViewEx *_webview;
    UIButton *_backButton;
    UIImageView *_sharePreview;
    UIView *_containerView;
    NSString *_url;
    double _showTime;
    UCARCameraView *_arView;
    UCARTracker *_detector;
    NSArray *_cameraMatrix;
}

+ (id)matrix4ToArray:(float *)arg1;
@property(retain, nonatomic) NSArray *cameraMatrix; // @synthesize cameraMatrix=_cameraMatrix;
@property(retain, nonatomic) UCARTracker *detector; // @synthesize detector=_detector;
@property(retain, nonatomic) UCARCameraView *arView; // @synthesize arView=_arView;
@property(nonatomic) double showTime; // @synthesize showTime=_showTime;
@property(nonatomic) _Bool hasDectected; // @synthesize hasDectected=_hasDectected;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIImageView *sharePreview; // @synthesize sharePreview=_sharePreview;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) TinyUIWebViewEx *webview; // @synthesize webview=_webview;
@property(retain, nonatomic) UCARJSHandler *jsHandler; // @synthesize jsHandler=_jsHandler;
@property(retain, nonatomic) id <UCARProxyProviderProtocol> provider; // @synthesize provider=_provider;
- (void)__uc__stat__arRecognizedAtUrl:(id)arg1 duration:(double)arg2;
- (void)__uc__stat__arStartRecognitionAtUrl:(id)arg1;
- (void)__uc__stat__arRecognitionShowUrl:(id)arg1;
- (long long)statusBarAnimation;
- (_Bool)animateToCurrentStyle;
- (_Bool)statusbarHidden;
- (long long)statusBarStyle;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)triggerEventWithMethod:(id)arg1 data:(id)arg2;
- (void)detector:(id)arg1 sendFrame:(id)arg2 withEventName:(id)arg3;
- (void)detector:(id)arg1 sendValue:(id)arg2 withEventName:(id)arg3;
- (void)detector:(id)arg1 sendMessage:(id)arg2 withEventName:(id)arg3;
- (void)arCameraView:(id)arg1 requestAccessWithGranted:(_Bool)arg2;
- (void)arCameraView:(id)arg1 captureVideo:(id)arg2;
- (void)arCameraView:(id)arg1 startWithConfig:(id)arg2;
- (int)webView:(id)arg1 needInjectJSTypeMaskWithRequest:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)arHandler:(id)arg1 shareInViewWithCompletion:(CDUnknownBlockType)arg2;
- (void)arHandler:(id)arg1 stopSessionWithCompletion:(CDUnknownBlockType)arg2;
- (void)arHandler:(id)arg1 openPageWithURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)arHandler:(id)arg1 stopRecognitionWithCompletion:(CDUnknownBlockType)arg2;
- (void)arHandler:(id)arg1 startRecognitionWithCompletion:(CDUnknownBlockType)arg2;
- (void)backBtnClick:(id)arg1;
- (void)unregisterJSHandler;
- (void)registerJSHandler;
- (void)setupBackBtn;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)checkCameraAuthorization;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)stopRecognition;
- (void)startRecognition;
- (void)stopSession;
- (void)startSession;
- (void)dismissCompletion:(CDUnknownBlockType)arg1;
- (void)present;
- (void)loadURL:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

