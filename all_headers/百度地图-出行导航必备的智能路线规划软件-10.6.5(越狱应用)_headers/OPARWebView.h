//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWebView.h>

#import "ShareUtilitiesDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class BMNRANetworkTask, BaseAlertView, NSArray, NSString, NSURLRequest, OPWebPageData, UIColor, UIImage, UIImagePickerController;

@interface OPARWebView : UIWebView <ShareUtilitiesDelegate, UIAlertViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIWebViewDelegate>
{
    _Bool _isLoading;
    _Bool _shareflag;
    _Bool _isCommonShare;
    _Bool _isHasQR;
    _Bool _isLoadImg;
    _Bool _isWeixinOnlyShareImg;
    _Bool _isClipScreen;
    int _currentShareType;
    CDUnknownBlockType _finishPageBlock;
    CDUnknownBlockType _starGameBlock;
    CDUnknownBlockType _toggleCameraBlock;
    CDUnknownBlockType _shutterCameraBlock;
    CDUnknownBlockType _webViewShouldStartLoadWithRequestBlock;
    CDUnknownBlockType _webViewDidStartLoadBlock;
    CDUnknownBlockType _webViewDidFinishBlock;
    CDUnknownBlockType _webViewDidFailLoadWithErrorBlock;
    UIImage *_ShutterCameraImage;
    BMNRANetworkTask *_loadImageTask;
    UIImage *_clipScreenImg;
    UIColor *_qrBgColor;
    UIColor *_qrFrColor;
    NSString *_qrTitle;
    NSString *_qrText;
    double _fontSize;
    UIColor *_fontColor;
    double _margin;
    BaseAlertView *_alertView;
    NSArray *_shareList;
    NSString *_requestHost;
    OPWebPageData *_shareData;
    NSArray *_shareTitles;
    NSArray *_shareTitleImgs;
    BMNRANetworkTask *_requestClassifyLogo;
    UIImagePickerController *_imagePicker;
    NSURLRequest *_scanRequest;
    struct CGPoint _combineImgPoint;
}

@property(retain, nonatomic) NSURLRequest *scanRequest; // @synthesize scanRequest=_scanRequest;
@property(retain, nonatomic) UIImagePickerController *imagePicker; // @synthesize imagePicker=_imagePicker;
@property(retain, nonatomic) BMNRANetworkTask *requestClassifyLogo; // @synthesize requestClassifyLogo=_requestClassifyLogo;
@property(retain, nonatomic) NSArray *shareTitleImgs; // @synthesize shareTitleImgs=_shareTitleImgs;
@property(retain, nonatomic) NSArray *shareTitles; // @synthesize shareTitles=_shareTitles;
@property(nonatomic) _Bool isClipScreen; // @synthesize isClipScreen=_isClipScreen;
@property(retain, nonatomic) OPWebPageData *shareData; // @synthesize shareData=_shareData;
@property(nonatomic) int currentShareType; // @synthesize currentShareType=_currentShareType;
@property(nonatomic) _Bool isWeixinOnlyShareImg; // @synthesize isWeixinOnlyShareImg=_isWeixinOnlyShareImg;
@property(retain, nonatomic) NSString *requestHost; // @synthesize requestHost=_requestHost;
@property(nonatomic) _Bool isLoadImg; // @synthesize isLoadImg=_isLoadImg;
@property(retain, nonatomic) NSArray *shareList; // @synthesize shareList=_shareList;
@property(retain, nonatomic) BaseAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(retain, nonatomic) UIColor *fontColor; // @synthesize fontColor=_fontColor;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) _Bool isHasQR; // @synthesize isHasQR=_isHasQR;
@property(retain, nonatomic) NSString *qrText; // @synthesize qrText=_qrText;
@property(retain, nonatomic) NSString *qrTitle; // @synthesize qrTitle=_qrTitle;
@property(retain, nonatomic) UIColor *qrFrColor; // @synthesize qrFrColor=_qrFrColor;
@property(retain, nonatomic) UIColor *qrBgColor; // @synthesize qrBgColor=_qrBgColor;
@property(retain, nonatomic) UIImage *clipScreenImg; // @synthesize clipScreenImg=_clipScreenImg;
@property(nonatomic) struct CGPoint combineImgPoint; // @synthesize combineImgPoint=_combineImgPoint;
@property(nonatomic) _Bool isCommonShare; // @synthesize isCommonShare=_isCommonShare;
@property(retain, nonatomic) BMNRANetworkTask *loadImageTask; // @synthesize loadImageTask=_loadImageTask;
@property(nonatomic) _Bool shareflag; // @synthesize shareflag=_shareflag;
@property(retain, nonatomic) UIImage *ShutterCameraImage; // @synthesize ShutterCameraImage=_ShutterCameraImage;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(copy, nonatomic) CDUnknownBlockType webViewDidFailLoadWithErrorBlock; // @synthesize webViewDidFailLoadWithErrorBlock=_webViewDidFailLoadWithErrorBlock;
@property(copy, nonatomic) CDUnknownBlockType webViewDidFinishBlock; // @synthesize webViewDidFinishBlock=_webViewDidFinishBlock;
@property(copy, nonatomic) CDUnknownBlockType webViewDidStartLoadBlock; // @synthesize webViewDidStartLoadBlock=_webViewDidStartLoadBlock;
@property(copy, nonatomic) CDUnknownBlockType webViewShouldStartLoadWithRequestBlock; // @synthesize webViewShouldStartLoadWithRequestBlock=_webViewShouldStartLoadWithRequestBlock;
@property(copy, nonatomic) CDUnknownBlockType shutterCameraBlock; // @synthesize shutterCameraBlock=_shutterCameraBlock;
@property(copy, nonatomic) CDUnknownBlockType toggleCameraBlock; // @synthesize toggleCameraBlock=_toggleCameraBlock;
@property(copy, nonatomic) CDUnknownBlockType starGameBlock; // @synthesize starGameBlock=_starGameBlock;
@property(copy, nonatomic) CDUnknownBlockType finishPageBlock; // @synthesize finishPageBlock=_finishPageBlock;
- (void).cxx_destruct;
- (void)imageFromCameraARPage:(id)arg1;
- (id)colorWithHString:(id)arg1;
- (void)dealloc;
- (void)executeJsWithString:(id)arg1;
- (void)onUserCancelShare;
- (void)responseFromWeixin:(id)arg1;
- (void)onSinaWeiboShareFailed;
- (void)onSinaWeiboShareSuccess;
- (void)refreshWebWithErrCode:(int)arg1;
- (id)convertLongToShort:(id)arg1;
- (id)commonShareUrl:(id)arg1 withType:(int)arg2;
- (int)convertType:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)weixinInstallShow;
- (id)addImageview:(id)arg1;
- (id)compressImage:(id)arg1 scale:(double)arg2;
- (void)screenshot;
- (void)enterWeiboSharePage:(id)arg1;
- (void)enterWeiboSharePage;
- (void)sendWithWeixinType:(int)arg1 andImg:(id)arg2;
- (id)createSeesionManager;
- (void)sendWithWeixinType:(int)arg1;
- (void)shareWithSystemShare;
- (void)shareWithFriendViaCircleWeixin;
- (void)shareWithFriendViaWeixin;
- (void)shareWithFriendViaSMS;
- (void)shareWithFriendViaEmail;
- (void)onHandleShareToFriend:(int)arg1;
- (void)shareWithFriend;
- (_Bool)checkURLIsYunYing:(id)arg1;
- (void)sendToFriendOrder;
- (id)shareDicWithShareType:(int)arg1;
- (void)showShareViewByRequest:(id)arg1;
- (void)shareCost:(id)arg1;
- (void)removeNotification;
- (void)addNotification;
- (_Bool)userAgentForReserved;
- (void)replaceRegisteredDefaults:(id)arg1;
- (void)unregisterDefaultForKey:(id)arg1;
- (void)setUserAgent;
- (void)setInfo;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (id)imageByScalingAndCroppingForSize:(struct CGSize)arg1 withSourceImage:(id)arg2;
- (void)requestLogo:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;
- (void)logoRecognition:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)toggleCamera:(id)arg1;
- (void)startGame;
- (void)getCamera:(id)arg1;
- (long long)getAuthorizationStatus;
- (id)getOpenFun:(id)arg1;
- (void)getCuid:(id)arg1;
- (void)getnetworkstatus:(id)arg1;
- (void)nativeInfo:(id)arg1;
- (void)Jump:(id)arg1;
- (void)jumpComponent:(id)arg1;
- (void)onHandleInitEnv:(id)arg1;
- (_Bool)newWindow:(id)arg1;
- (void)finish;
- (void)opraSign:(id)arg1;
- (id)initWithUrl:(id)arg1 isLoading:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

