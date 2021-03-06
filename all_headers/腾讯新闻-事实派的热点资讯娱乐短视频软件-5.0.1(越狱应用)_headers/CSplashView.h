//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import "ASIHTTPRequestDelegate-Protocol.h"
#import "NSCoding-Protocol.h"
#import "QNAnimationImageViewDelegate-Protocol.h"
#import "TADQNSplashViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class ASIFormDataRequest, CFullNewsModelLoader, CListItemType, CModelLoader, CSplashItem, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString, QNSplashImageView, TADQNSplashViewController, TADSplashAsyncLoader, UIImageView, UITapGestureRecognizer;
@protocol CSplashViewDelegate;

@interface CSplashView : UIWindow <TADQNSplashViewControllerDelegate, NSCoding, ASIHTTPRequestDelegate, UIGestureRecognizerDelegate, QNAnimationImageViewDelegate>
{
    NSObject<CSplashViewDelegate> *_splashDelegate;
    struct CGRect _backFrame;
    _Bool _isUpdating;
    CModelLoader *_modelLoader;
    UITapGestureRecognizer *_tapGes;
    _Bool _fadeInCompleted;
    _Bool _transitionCompleted;
    NSDictionary *_adDetailInfo;
    _Bool _isSkipped;
    _Bool _landingViewEntered;
    _Bool _isTADSplashView;
    NSMutableArray *_qqadList;
    ASIFormDataRequest *_request;
    NSMutableArray *_requestList;
    NSString *_version;
    UIImageView *_currBackView;
    QNSplashImageView *_animationView;
    CSplashItem *_currentItem;
    NSMutableDictionary *_showedCountDict;
    double _skipTime;
    CFullNewsModelLoader *_pushInfoLoader;
    CListItemType *_listItem;
    TADSplashAsyncLoader *_tadSplashLoader;
    TADQNSplashViewController *_splashViewController;
    double _splashTime;
}

+ (id)p_splashInfoDataFile;
+ (id)p_splashProgressIndicatorFile;
+ (void)cleanSplashData;
+ (void)markSplashProgressSuccess;
+ (void)verifyLastSplashProgressStatus;
+ (void)purgeSharedSplash;
+ (id)sharedSplash;
@property(nonatomic) double splashTime; // @synthesize splashTime=_splashTime;
@property(nonatomic) _Bool isTADSplashView; // @synthesize isTADSplashView=_isTADSplashView;
@property(retain, nonatomic) NSDictionary *adDetailInfo; // @synthesize adDetailInfo=_adDetailInfo;
@property(retain, nonatomic) TADQNSplashViewController *splashViewController; // @synthesize splashViewController=_splashViewController;
@property(retain, nonatomic) TADSplashAsyncLoader *tadSplashLoader; // @synthesize tadSplashLoader=_tadSplashLoader;
@property(retain, nonatomic) CListItemType *listItem; // @synthesize listItem=_listItem;
@property(retain, nonatomic) CFullNewsModelLoader *pushInfoLoader; // @synthesize pushInfoLoader=_pushInfoLoader;
@property(nonatomic) double skipTime; // @synthesize skipTime=_skipTime;
@property(retain, nonatomic) NSMutableDictionary *showedCountDict; // @synthesize showedCountDict=_showedCountDict;
@property(retain, nonatomic) CSplashItem *currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) QNSplashImageView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) UIImageView *currBackView; // @synthesize currBackView=_currBackView;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSMutableArray *requestList; // @synthesize requestList=_requestList;
@property(retain, nonatomic) ASIFormDataRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSMutableArray *qqadList; // @synthesize qqadList=_qqadList;
- (void).cxx_destruct;
- (void)splashViewControllerWillOpenAdInfoView;
- (void)splashViewControllerWillDisappear;
- (void)splashViewControllerDidAppear;
- (void)d_openAds;
- (void)willSkipped;
- (void)didFadeOutImageViewAnimations;
- (void)p_didTransitionImageViewAnimations;
- (void)p_didFadeInImageViewAnimations;
- (void)didTransitionImageViewAnimations:(int)arg1;
- (void)hideSplashView;
- (void)dealloc;
- (void)showSplashViewWithDelegate:(id)arg1;
- (void)hideSplashByFrame;
- (void)showSplashImage:(id)arg1;
- (void)showAndReportTADSplash:(id)arg1;
- (void)showTADSplashView:(id)arg1;
- (_Bool)shouldUseTADSplashView:(id)arg1;
- (id)p_validateCurrentItem;
- (void)onTap:(id)arg1;
- (void)onImageLoaded:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)p_handleQQNewsRemoteConfigChangedNotification:(id)arg1;
- (void)updateFromNet;
- (id)sortDownloadList:(id)arg1;
- (void)impUpdateFromNet;
- (void)writeToDisk;
- (void)readFromDisk;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

