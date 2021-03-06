//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CTContentManagerDelegate-Protocol.h"
#import "CTLandingWebDelegate-Protocol.h"
#import "FBNativeAdDelegate-Protocol.h"

@class CTContentManager, CTLandingWebView, CTResponseAdlistModel, FBNativeAd, NSObject, NSString, NSURL, UIActivityIndicatorView, UIButton, UITapGestureRecognizer, UIWebView;
@protocol OS_dispatch_group;

@interface CTAdBase : UIView <CTContentManagerDelegate, CTLandingWebDelegate, FBNativeAdDelegate>
{
    NSObject<OS_dispatch_group> *baseGroup;
    _Bool haveCloseBtn;
    _Bool _redirectionSuccess;
    _Bool _ispre_click;
    NSString *fbid;
    NSString *admobid;
    NSString *slotid;
    UIView *parentView;
    CTContentManager *adContent;
    CTResponseAdlistModel *listModel;
    unsigned long long adCreateType;
    CTLandingWebView *landingWebView;
    UIView *loadingView;
    UIActivityIndicatorView *activityView;
    UIButton *closeBtn;
    UITapGestureRecognizer *tapGesture;
    UITapGestureRecognizer *singleTap;
    NSString *isLeaveFlag;
    NSString *loadAppLeaveFlag;
    NSString *deepLinkLeaveFlag;
    long long adType;
    CDUnknownBlockType getADSuccessBlock;
    CDUnknownBlockType getADFailBlock;
    CDUnknownBlockType getADLSuccessAndRetString;
    CDUnknownBlockType getADFailAndRetError;
    FBNativeAd *nativeFBAd;
    CDUnknownBlockType getFBSuccessAndRetString;
    CDUnknownBlockType getFBFailAndRetError;
    NSString *_keywords;
    NSString *_privateAdid;
    UIView *_partitionView;
    UIWebView *_adWebView;
    NSURL *_redirectionUrl;
}

@property(nonatomic) _Bool ispre_click; // @synthesize ispre_click=_ispre_click;
@property(retain, nonatomic) NSURL *redirectionUrl; // @synthesize redirectionUrl=_redirectionUrl;
@property(nonatomic) _Bool redirectionSuccess; // @synthesize redirectionSuccess=_redirectionSuccess;
@property(retain, nonatomic) UIWebView *adWebView; // @synthesize adWebView=_adWebView;
@property(retain, nonatomic) UIView *partitionView; // @synthesize partitionView=_partitionView;
@property(retain, nonatomic) NSString *privateAdid; // @synthesize privateAdid=_privateAdid;
@property(retain, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(copy, nonatomic) CDUnknownBlockType getFBFailAndRetError; // @synthesize getFBFailAndRetError;
@property(copy, nonatomic) CDUnknownBlockType getFBSuccessAndRetString; // @synthesize getFBSuccessAndRetString;
@property(retain, nonatomic) FBNativeAd *nativeFBAd; // @synthesize nativeFBAd;
@property(copy, nonatomic) CDUnknownBlockType getADFailAndRetError; // @synthesize getADFailAndRetError;
@property(copy, nonatomic) CDUnknownBlockType getADLSuccessAndRetString; // @synthesize getADLSuccessAndRetString;
@property(copy, nonatomic) CDUnknownBlockType getADFailBlock; // @synthesize getADFailBlock;
@property(copy, nonatomic) CDUnknownBlockType getADSuccessBlock; // @synthesize getADSuccessBlock;
@property(nonatomic) long long adType; // @synthesize adType;
@property(retain, nonatomic) NSString *deepLinkLeaveFlag; // @synthesize deepLinkLeaveFlag;
@property(retain, nonatomic) NSString *loadAppLeaveFlag; // @synthesize loadAppLeaveFlag;
@property(nonatomic) _Bool haveCloseBtn; // @synthesize haveCloseBtn;
@property(retain, nonatomic) NSString *isLeaveFlag; // @synthesize isLeaveFlag;
@property(retain, nonatomic) UITapGestureRecognizer *singleTap; // @synthesize singleTap;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView;
@property(retain, nonatomic) CTLandingWebView *landingWebView; // @synthesize landingWebView;
@property(nonatomic) unsigned long long adCreateType; // @synthesize adCreateType;
@property(copy, nonatomic) CTResponseAdlistModel *listModel; // @synthesize listModel;
@property(retain, nonatomic) CTContentManager *adContent; // @synthesize adContent;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView;
@property(retain, nonatomic) NSString *slotid; // @synthesize slotid;
@property(retain, nonatomic) NSString *admobid; // @synthesize admobid;
@property(retain, nonatomic) NSString *fbid; // @synthesize fbid;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeFromSuperview;
- (void)adJumpfailed;
- (void)adClosed;
- (void)adHtml5Closed;
- (void)adDidIntoLandingPage;
- (void)adDidLeaveLandingPage;
- (void)adWillLeaveApplication;
- (void)adDidClicked;
- (void)closeForInterstitial;
- (void)loadingViewSetFrame;
- (void)googleSuccessBlockSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)googleAdinit;
- (void)googleAdinitWithType:(id)arg1;
- (void)nativeAd:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeAdWillLogImpression:(id)arg1;
- (void)nativeAdDidFinishHandlingClick:(id)arg1;
- (void)nativeAdDidClick:(id)arg1;
- (void)nativeAdDidLoad:(id)arg1;
- (id)retImpArr:(id)arg1;
- (void)deepLinkTypeHandle;
- (_Bool)checkFinalUrlToOpen;
- (void)loadAppTypeHandle;
- (void)landingPageClosed;
- (void)html5Closed:(id)arg1;
- (void)html5OpenLadingPage;
- (void)partitionViewClick;
- (void)landingTypeOperate;
- (void)clickTrack;
- (void)AdOperateWithlistModel:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)singleTap:(id)arg1;
- (void)loadAdWithListModel:(id)arg1 htmlStr:(id)arg2 success:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (void)close;
- (void)initCloseButton;
- (void)ADLLoadAD:(long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)CTLoadAD:(long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)GPLoadAD:(long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)FBLoadAD:(long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)whichTypeShouldBeExecuted:(long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)getTemplateMessageBySlot_id:(id)arg1;
- (void)sendThirdImpressionTrackurlForFacebook;
- (_Bool)advertisingAvailableJudgeByThird:(id)arg1;
- (id)AdOrderArray;
- (void)propertyInit;
- (id)initWithFrame:(struct CGRect)arg1 slotid:(id)arg2 fbid:(id)arg3 ADmobID:(id)arg4 needCloseBtn:(_Bool)arg5;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

