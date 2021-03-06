//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "JIMIMErrorViewDelegate-Protocol.h"
#import "JIMIMJSInterfaceDelegate-Protocol.h"
#import "JIMIMSpeechRecognizerDelegate-Protocol.h"
#import "JIMITTSSpeakerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class JIMIMErrorView, JIMIMJSInterface, JIMIMSpeechRecognizer, JIMITTSSpeaker, JSContext, NSString, UIImagePickerController, UIWebView;

@interface JIMIMWebViewController : UIViewController <UIWebViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, JIMIMSpeechRecognizerDelegate, JIMIMJSInterfaceDelegate, JIMIMErrorViewDelegate, JIMITTSSpeakerDelegate>
{
    UIImagePickerController *imagePickerController;
    _Bool _isCameraChoosed;
    _Bool _hasAccess;
    NSString *_jimiWebURL;
    UIWebView *_jimiWebView;
    JSContext *_jimiJsContext;
    JIMIMSpeechRecognizer *_recognizer;
    JIMITTSSpeaker *_speaker;
    JIMIMJSInterface *_jimimSdk;
    JIMIMErrorView *_errView;
}

@property(retain, nonatomic) JIMIMErrorView *errView; // @synthesize errView=_errView;
@property(nonatomic) _Bool hasAccess; // @synthesize hasAccess=_hasAccess;
@property(retain, nonatomic) JIMIMJSInterface *jimimSdk; // @synthesize jimimSdk=_jimimSdk;
@property(nonatomic) _Bool isCameraChoosed; // @synthesize isCameraChoosed=_isCameraChoosed;
@property(retain, nonatomic) JIMITTSSpeaker *speaker; // @synthesize speaker=_speaker;
@property(retain, nonatomic) JIMIMSpeechRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(retain, nonatomic) JSContext *jimiJsContext; // @synthesize jimiJsContext=_jimiJsContext;
@property(retain, nonatomic) UIWebView *jimiWebView; // @synthesize jimiWebView=_jimiWebView;
@property(retain, nonatomic) NSString *jimiWebURL; // @synthesize jimiWebURL=_jimiWebURL;
- (void).cxx_destruct;
- (void)startSpeaker:(id)arg1;
- (void)jimiMsdkReady;
- (void)ttsSpeakerCode:(id)arg1;
- (void)errorViewDidReload;
- (void)errorViewDidCancel;
- (void)resultSpeechRecText:(id)arg1 errmsg:(id)arg2;
- (void)stopSpeechRecText;
- (void)startSpeechRecText;
- (void)cancelSpeechRecText;
- (void)cancelRec;
- (void)stopRec;
- (void)startRec;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)openAlbum;
- (void)openCamera;
- (void)jimiMvoiceRecResultText:(id)arg1 errmsg:(id)arg2;
- (void)jimiMvoiceRecOpenCallback;
- (void)jimiMalbumOpenCallbackWithURL:(id)arg1;
- (void)jimiMcameraOpenCallbackWithURL:(id)arg1;
- (void)jimimSdkStopTts;
- (void)jimimSdkTts:(id)arg1;
- (void)jimimSdkReloadWeb;
- (void)jimimSdkVoiceRecClose;
- (void)jimimSdkVoiceRecCancel;
- (void)jimimSdkVoiceRecOpen;
- (void)jimimSdkAlbumOpen:(id)arg1;
- (void)jimimSdkCameraOpen:(id)arg1;
- (void)jimimSdkExit;
- (void)jimiSDKInterfaceInit;
- (void)jimiExceptionHandler;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)mutedTurnOn:(id)arg1;
- (void)removeMutedListener;
- (_Bool)addMutedListener;
- (_Bool)isMuted;
- (void)dealloc;
- (void)setWebViewCookiesWithRequest:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)reloadWebView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

