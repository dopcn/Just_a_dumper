//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QHFlashDataSourceDelegate-Protocol.h"
#import "QHFlashDelegate-Protocol.h"

@class NSDate, NSString, QHFlashAdeazAdMgr, QHFlashShoujiAdMgr, QHFlashWaitMgr, QHInmobiAdMgr;

@interface QHAppFlashManager : NSObject <QHFlashDelegate, QHFlashDataSourceDelegate>
{
    NSDate *_lastShowTime;
    double _beginWaitShowTime;
    NSDate *_lastLoadTime;
    _Bool _isFlashManager;
    _Bool _isTrackShow;
    _Bool _isHideWindows;
    QHInmobiAdMgr *_flashInMobiAdMgr;
    QHFlashAdeazAdMgr *_flashAdeazAdMgr;
    QHFlashShoujiAdMgr *_flashShoujiAdMgr;
    QHFlashWaitMgr *_flashWaitMgr;
}

+ (id)sharedObject;
@property(nonatomic) _Bool isHideWindows; // @synthesize isHideWindows=_isHideWindows;
@property(nonatomic) _Bool isTrackShow; // @synthesize isTrackShow=_isTrackShow;
@property(retain, nonatomic) QHFlashWaitMgr *flashWaitMgr; // @synthesize flashWaitMgr=_flashWaitMgr;
@property(retain, nonatomic) QHFlashShoujiAdMgr *flashShoujiAdMgr; // @synthesize flashShoujiAdMgr=_flashShoujiAdMgr;
@property(retain, nonatomic) QHFlashAdeazAdMgr *flashAdeazAdMgr; // @synthesize flashAdeazAdMgr=_flashAdeazAdMgr;
@property(retain, nonatomic) QHInmobiAdMgr *flashInMobiAdMgr; // @synthesize flashInMobiAdMgr=_flashInMobiAdMgr;
@property(nonatomic) _Bool isFlashManager; // @synthesize isFlashManager=_isFlashManager;
- (void).cxx_destruct;
- (void)hideFlashWindows;
- (void)handleFlashViewSkiped:(id)arg1;
- (_Bool)handleFlashViewTapped:(id)arg1;
- (void)qhFlashViewDidDisappear:(id)arg1 flashInfo:(id)arg2;
- (void)qhFlashViewWillDisappear:(id)arg1 flashInfo:(id)arg2;
- (void)qhFlashViewDidOpenWebViewFail:(id)arg1;
- (void)qhFlashViewDidOpenWebViewSuccess:(id)arg1;
- (void)qhFlashViewWillOpenWebView:(id)arg1;
- (void)qhFlashViewWillOpenApp:(id)arg1;
- (void)qhFlashViewDidAppear:(id)arg1 flashInfo:(id)arg2;
- (void)qhFlashViewWillAppear:(id)arg1 flashInfo:(id)arg2;
- (void)onSplashAdClosed:(id)arg1;
- (void)onLoadAdFail:(id)arg1;
- (void)onLoadAdFinish:(id)arg1;
- (void)tryRefreshFlashData;
- (void)refreshFlashData;
- (_Bool)canRefreshFlash;
- (void)doShowFlash;
- (void)tryShowWithPlaceholdImage;
- (void)showWithPlaceholdImage;
- (void)tryWifiLoadInfo;
- (void)tryShowLoadInfo;
- (void)tryLoadInfo;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

