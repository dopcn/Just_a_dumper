//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ForwardCenter.h"

#import "LFTINAppDataSource-Protocol.h"
#import "PagesDataModelDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WPSubscriptionSuccessDelegate-Protocol.h"
#import "WPUserModelDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, PagesDataModel, UIViewController, WPUserModel;

@interface SPForwardCenter : ForwardCenter <UIAlertViewDelegate, LFTINAppDataSource, PagesDataModelDelegate, WPUserModelDelegate, WPSubscriptionSuccessDelegate>
{
    _Bool _isWeatherChosen;
    _Bool _hasWeatherVCDisplayed;
    _Bool _isHideSubscription;
    NSDictionary *_unlockDict;
    UIViewController *_viewController;
    NSString *_linkUrl;
    NSString *_linkId;
    NSString *_feedbackId;
    NSDictionary *_feedbackMonitor;
    NSString *_title;
    UIViewController *_weatherVC;
    NSDictionary *_parseDict;
    CDUnknownBlockType _spSuccessBlock;
    PagesDataModel *_pagesDataModel;
    NSArray *_pagesArray;
    WPUserModel *_userModel;
    NSArray *_imagesArray;
    NSString *_redirectLinkFullname;
}

+ (id)sharedSPForwardCenter;
@property(retain, nonatomic) NSString *redirectLinkFullname; // @synthesize redirectLinkFullname=_redirectLinkFullname;
@property(retain, nonatomic) NSArray *imagesArray; // @synthesize imagesArray=_imagesArray;
@property(nonatomic) _Bool isHideSubscription; // @synthesize isHideSubscription=_isHideSubscription;
@property(retain, nonatomic) WPUserModel *userModel; // @synthesize userModel=_userModel;
@property(retain, nonatomic) NSArray *pagesArray; // @synthesize pagesArray=_pagesArray;
@property(retain, nonatomic) PagesDataModel *pagesDataModel; // @synthesize pagesDataModel=_pagesDataModel;
@property(nonatomic) _Bool hasWeatherVCDisplayed; // @synthesize hasWeatherVCDisplayed=_hasWeatherVCDisplayed;
@property(nonatomic) _Bool isWeatherChosen; // @synthesize isWeatherChosen=_isWeatherChosen;
@property(copy, nonatomic) CDUnknownBlockType spSuccessBlock; // @synthesize spSuccessBlock=_spSuccessBlock;
@property(retain, nonatomic) NSDictionary *parseDict; // @synthesize parseDict=_parseDict;
@property(retain, nonatomic) UIViewController *weatherVC; // @synthesize weatherVC=_weatherVC;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSDictionary *feedbackMonitor; // @synthesize feedbackMonitor=_feedbackMonitor;
@property(retain, nonatomic) NSString *feedbackId; // @synthesize feedbackId=_feedbackId;
@property(retain, nonatomic) NSString *linkId; // @synthesize linkId=_linkId;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSDictionary *unlockDict; // @synthesize unlockDict=_unlockDict;
- (void).cxx_destruct;
- (void)didDismissWithAlertView:(id)arg1;
- (void)didRateLateWithAlertView:(id)arg1;
- (void)didFeedbackWithAlertView:(id)arg1;
- (void)didRateNowWithAlertView:(id)arg1;
- (void)handlerDidFailForUserModel:(id)arg1;
- (void)handlerDidFinishedForUserModel:(id)arg1;
- (void)handlerDidStartForUserModel:(id)arg1;
- (void)didLoadPagesFail:(id)arg1 error:(id)arg2;
- (void)didLoadPagesFinished:(id)arg1;
- (void)didLoadPagesStart:(id)arg1;
- (id)lftin_titleForHomeViewController;
- (void)lftin_refreshUserTokenWithCompletion:(CDUnknownBlockType)arg1;
- (void)lftin_requstPhotoAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (void)showInpinViewController:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)rateApp:(id)arg1;
- (void)handleUnlock:(id)arg1;
- (void)forwardUnLock:(id)arg1 feedbackId:(id)arg2 feedbackMonitor:(id)arg3 viewController:(id)arg4;
- (_Bool)isSupportUnlockType:(id)arg1;
- (void)forwardDiscuss:(id)arg1 viewController:(id)arg2;
- (void)forwardSourceAD:(id)arg1 forwardTypeInApp:(id)arg2 viewController:(id)arg3 isPushOrLaunchCover:(_Bool)arg4;
- (void)trackerSmartPage:(id)arg1;
- (void)forwardSmartPage:(id)arg1 forwardTypeInApp:(id)arg2 viewController:(id)arg3 isPushOrLaunchCover:(_Bool)arg4;
- (void)forwardWebViewByUrl:(id)arg1 title:(id)arg2 feedbackId:(id)arg3 feedbackMonitor:(id)arg4 isPush:(long long)arg5 viewController:(id)arg6;
- (void)forwardSourceForum:(id)arg1 forwardTypeInApp:(id)arg2 viewController:(id)arg3;
- (void)forwardSourceService:(id)arg1 forwardTypeInApp:(id)arg2 viewController:(id)arg3 isPushOrLaunchCover:(_Bool)arg4;
- (void)forwardSourceNews:(id)arg1 forwardTypeInApp:(id)arg2 viewController:(id)arg3 isPushOrLaunchCover:(_Bool)arg4;
- (void)forwardSourceWP:(id)arg1 forwardTypeInApp:(id)arg2 viewController:(id)arg3 isPushOrLaunchCover:(_Bool)arg4;
- (void)forwardSourceRingtones:(id)arg1 forwardTypeInApp:(id)arg2 viewController:(id)arg3 isPushOrLaunchCover:(_Bool)arg4;
- (void)forwardSourceTab:(id)arg1 forwardTypeInApp:(id)arg2 viewController:(id)arg3 isPushOrLaunchCover:(_Bool)arg4;
- (void)forwardSourceLivePhoto:(id)arg1 forwardTypeInApp:(id)arg2 viewController:(id)arg3 isPushOrLaunchCover:(_Bool)arg4;
- (void)forwardSourceShortVideo:(id)arg1 forwardTypeInApp:(id)arg2 viewController:(id)arg3 isPushOrLaunchCover:(_Bool)arg4;
- (void)forwardSourceVideo:(id)arg1 forwardTypeInApp:(id)arg2 viewController:(id)arg3 isPushOrLaunchCover:(_Bool)arg4;
- (void)forwardSourceTemplate:(id)arg1 forwardTypeInApp:(id)arg2 viewController:(id)arg3 isPushOrLaunchCover:(_Bool)arg4;
- (void)handleForward:(id)arg1 parseDict:(id)arg2 title:(id)arg3 viewController:(id)arg4 feedbackId:(id)arg5 feedbackMonitor:(id)arg6 isPushOrLaunchCover:(_Bool)arg7;
- (id)promiseForwardDeepLink:(id)arg1 viewController:(id)arg2;
- (void)forwardDeepLink:(id)arg1 viewController:(id)arg2 imagesArray:(id)arg3 redirectLinkFullname:(id)arg4;
- (void)forwardDeepLink:(id)arg1 viewController:(id)arg2;
- (void)forwardPush:(id)arg1 viewController:(id)arg2;
- (void)forwardLaunchCover:(id)arg1 viewController:(id)arg2;
- (void)forwardByLinkUrl:(id)arg1 title:(id)arg2 linkFullname:(id)arg3 linkMonitor:(id)arg4 isShortLink:(_Bool)arg5 isSendStatus:(_Bool)arg6 viewController:(id)arg7;
- (void)forwardByLinkInfo:(id)arg1 userInfo:(id)arg2 viewController:(id)arg3 isPushOrLaunchCover:(_Bool)arg4;
- (void)forwardByLinkInfo:(id)arg1 viewController:(id)arg2 isPushOrLaunchCover:(_Bool)arg3;
- (void)forwardByLinkInfo:(id)arg1 viewController:(id)arg2 spSuccessBlock:(CDUnknownBlockType)arg3;
- (void)forwardByLinkInfo:(id)arg1 userInfo:(id)arg2 viewController:(id)arg3;
- (void)forwardByLinkInfo:(id)arg1 viewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

