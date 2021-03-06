//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "QQApiInterfaceDelegate-Protocol.h"
#import "WXApiDelegate-Protocol.h"
#import "WeiboSDKDelegate-Protocol.h"

@class CTShareModel, NSString;

@interface CTShareManager : NSObject <WXApiDelegate, WeiboSDKDelegate, QQApiInterfaceDelegate, MFMessageComposeViewControllerDelegate, MFMailComposeViewControllerDelegate>
{
    CTShareModel *_iShareModel;
    CDUnknownBlockType _myShareResultBlock;
}

+ (id)shareInstance;
@property(copy, nonatomic) CDUnknownBlockType myShareResultBlock; // @synthesize myShareResultBlock=_myShareResultBlock;
@property(retain, nonatomic) CTShareModel *iShareModel; // @synthesize iShareModel=_iShareModel;
- (void).cxx_destruct;
- (id)getNewErrorForCode:(long long)arg1 inforDic:(id)arg2;
- (id)getNewErrorForCode:(long long)arg1 infor:(id)arg2;
- (void)callBackWithBlock:(CDUnknownBlockType)arg1 shareResult:(long long)arg2 shareType:(long long)arg3 shareError:(id)arg4;
- (void)imageSavedToPhotosAlbum:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveToAlbumWithImage:(id)arg1;
- (void)shareToIMWithId:(id)arg1;
- (void)shareToCopy;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)shareToEmail;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)shareToSMS;
- (void)didReceiveWeiboResponse:(id)arg1;
- (void)didReceiveWeiboRequest:(id)arg1;
- (void)shareToSinaWeibo;
- (void)onRespForQQ:(id)arg1;
- (void)onResp:(id)arg1;
- (void)isOnlineResponse:(id)arg1;
- (void)onReq:(id)arg1;
- (void)shareToQQ:(_Bool)arg1;
- (void)onRespForWx:(id)arg1;
- (void)shareToWeixin:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

