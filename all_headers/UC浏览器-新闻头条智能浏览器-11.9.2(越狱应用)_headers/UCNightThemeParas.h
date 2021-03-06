//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UCThemeParasProtocol-Protocol.h"

@class NSString, NSTimer, UIColor;

@interface UCNightThemeParas : NSObject <UCThemeParasProtocol>
{
    _Bool _wallPaperBluredStatus;
    _Bool _wallPaperHiddenStatus;
    _Bool _homePagewallPaperHiddenStatus;
    _Bool _homePageWallPaperBluredStatus;
    _Bool _opaqueNewStatus;
    _Bool _opaqueOldStatus;
    _Bool _dynGetBGColor;
    _Bool _isMaskViewHidden;
    _Bool _isBlurView;
    _Bool _isHasBottomSeprateLine;
    _Bool _isGuideBlurViewHidden;
    int _javaScriptTypeMask;
    int _newsReaderBlurStyle;
    NSString *_themeName;
    NSString *_effectName;
    NSString *_javaScriptAboutThemeInstall;
    NSString *_javaScriptAboutThemeUnInstall;
    NSString *_javaScriptAboutThemeInstallWithCallBack;
    NSString *_javaScriptAboutThemeUnInstallWithCallBack;
    UIColor *_webViewBackgroundNewColor;
    UIColor *_webViewBackgroundOldColor;
    UIColor *_guideViewBGColor;
    NSTimer *_delayNightModeTimer;
}

@property(retain, nonatomic) NSTimer *delayNightModeTimer; // @synthesize delayNightModeTimer=_delayNightModeTimer;
@property(readonly, retain, nonatomic) UIColor *guideViewBGColor; // @synthesize guideViewBGColor=_guideViewBGColor;
@property(readonly, nonatomic) _Bool isGuideBlurViewHidden; // @synthesize isGuideBlurViewHidden=_isGuideBlurViewHidden;
@property(readonly, nonatomic) _Bool isHasBottomSeprateLine; // @synthesize isHasBottomSeprateLine=_isHasBottomSeprateLine;
@property(readonly, nonatomic) _Bool isBlurView; // @synthesize isBlurView=_isBlurView;
@property(readonly, nonatomic) int newsReaderBlurStyle; // @synthesize newsReaderBlurStyle=_newsReaderBlurStyle;
@property(readonly, nonatomic) _Bool isMaskViewHidden; // @synthesize isMaskViewHidden=_isMaskViewHidden;
@property(readonly, nonatomic) _Bool dynGetBGColor; // @synthesize dynGetBGColor=_dynGetBGColor;
@property(retain, nonatomic) UIColor *webViewBackgroundOldColor; // @synthesize webViewBackgroundOldColor=_webViewBackgroundOldColor;
@property(readonly, retain, nonatomic) UIColor *webViewBackgroundNewColor; // @synthesize webViewBackgroundNewColor=_webViewBackgroundNewColor;
@property(nonatomic) _Bool opaqueOldStatus; // @synthesize opaqueOldStatus=_opaqueOldStatus;
@property(readonly, nonatomic) _Bool opaqueNewStatus; // @synthesize opaqueNewStatus=_opaqueNewStatus;
@property(readonly, nonatomic) _Bool homePageWallPaperBluredStatus; // @synthesize homePageWallPaperBluredStatus=_homePageWallPaperBluredStatus;
@property(readonly, nonatomic) _Bool homePagewallPaperHiddenStatus; // @synthesize homePagewallPaperHiddenStatus=_homePagewallPaperHiddenStatus;
@property(readonly, nonatomic) _Bool wallPaperHiddenStatus; // @synthesize wallPaperHiddenStatus=_wallPaperHiddenStatus;
@property(readonly, nonatomic) _Bool wallPaperBluredStatus; // @synthesize wallPaperBluredStatus=_wallPaperBluredStatus;
@property(readonly, retain, nonatomic) NSString *javaScriptAboutThemeUnInstallWithCallBack; // @synthesize javaScriptAboutThemeUnInstallWithCallBack=_javaScriptAboutThemeUnInstallWithCallBack;
@property(readonly, retain, nonatomic) NSString *javaScriptAboutThemeInstallWithCallBack; // @synthesize javaScriptAboutThemeInstallWithCallBack=_javaScriptAboutThemeInstallWithCallBack;
@property(readonly, retain, nonatomic) NSString *javaScriptAboutThemeUnInstall; // @synthesize javaScriptAboutThemeUnInstall=_javaScriptAboutThemeUnInstall;
@property(readonly, retain, nonatomic) NSString *javaScriptAboutThemeInstall; // @synthesize javaScriptAboutThemeInstall=_javaScriptAboutThemeInstall;
@property(readonly, nonatomic) int javaScriptTypeMask; // @synthesize javaScriptTypeMask=_javaScriptTypeMask;
@property(retain, nonatomic) NSString *effectName; // @synthesize effectName=_effectName;
@property(retain, nonatomic) NSString *themeName; // @synthesize themeName=_themeName;
- (void)preWebViewBackForward;
- (void)cancelNightModeMetaDetect;
- (void)detectMetaTagForNightMode:(id)arg1;
- (void)detectMetaTagWithWebAgent:(id)arg1;
- (void)initParas;
- (void)dealloc;
- (id)initWithViewEffectType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

