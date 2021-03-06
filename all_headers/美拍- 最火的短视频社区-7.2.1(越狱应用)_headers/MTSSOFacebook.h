//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTSSOAPI.h"

#import "FBSDKSharingDelegate-Protocol.h"

@class NSString;
@protocol FBSDKSharingDelegate;

@interface MTSSOFacebook : MTSSOAPI <FBSDKSharingDelegate>
{
    _Bool isShareInSafari;
    id <FBSDKSharingDelegate> _delegate;
    CDUnknownBlockType _simpleShareCompletionBlock;
    CDUnknownBlockType _graphAPICompletionBlock;
}

+ (void)openPageOnFaceBookWithPageID:(id)arg1 orPageName:(id)arg2;
+ (void)shareVideoMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)shareLinkMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)shareImageMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestManagePagesInfo:(CDUnknownBlockType)arg1;
+ (void)cleanPermissions:(CDUnknownBlockType)arg1;
+ (void)logout;
+ (void)loginWithPermissions:(id)arg1 CompleteBlock:(CDUnknownBlockType)arg2;
+ (_Bool)handleOpenURL:(id)arg1 sourceApplication:(id)arg2;
+ (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
+ (_Bool)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
+ (_Bool)registerAppinApplication:(id)arg1 launchingWithOptions:(id)arg2;
+ (void)handleApplicationDidBecomeActive;
+ (_Bool)isAppSupportShareVideo;
+ (id)appInstallURL;
+ (_Bool)isAppInstalled;
+ (id)appId;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType graphAPICompletionBlock; // @synthesize graphAPICompletionBlock=_graphAPICompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType simpleShareCompletionBlock; // @synthesize simpleShareCompletionBlock=_simpleShareCompletionBlock;
@property(nonatomic) __weak id <FBSDKSharingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)createRespondWithResults:(id)arg1 failError:(id)arg2;
- (void)sharerDidCancel:(id)arg1;
- (void)sharer:(id)arg1 didFailWithError:(id)arg2;
- (void)sharer:(id)arg1 didCompleteWithResults:(id)arg2;
- (id)fetchTopViewControllerWithRootViewController:(id)arg1;
- (void)shareToFaceBookWithContent:(id)arg1;
- (void)requestGraphAPIAtPath:(id)arg1 parameters:(id)arg2 httpMethod:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

