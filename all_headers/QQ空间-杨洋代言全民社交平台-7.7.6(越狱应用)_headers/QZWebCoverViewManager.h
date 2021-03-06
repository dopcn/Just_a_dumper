//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QZActionSheetManagerDelegate-Protocol.h"
#import "QzoneCommTextControllerDelegate-Protocol.h"
#import "RequestURLInfoDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, QZActionSheetManager, RequestURLInfoModel, UIImage;

@interface QZWebCoverViewManager : NSObject <QzoneCommTextControllerDelegate, RequestURLInfoDelegate, QZActionSheetManagerDelegate>
{
    QZActionSheetManager *sheetManager;
    NSArray *_shareTitle;
    NSArray *_shareContent;
    NSArray *_sharePicUrl;
    NSArray *_shareLinkUrl;
    NSDictionary *_report;
    _Bool _isLogoImageLoading;
    RequestURLInfoModel *_modelForShare;
    UIImage *_sharedLogoImage;
    _Bool _hasSetShare;
    _Bool _hasSetSummary;
    id _delegate;
    long long _reportUIN;
}

@property(nonatomic) long long reportUIN; // @synthesize reportUIN=_reportUIN;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasSetSummary; // @synthesize hasSetSummary=_hasSetSummary;
@property(nonatomic) _Bool hasSetShare; // @synthesize hasSetShare=_hasSetShare;
- (void).cxx_destruct;
- (void)QzoneCommTextControllerDidFinishWithText:(id)arg1 OpType:(int)arg2;
- (void)reportData:(id)arg1;
- (id)getShuoshuoContent:(id)arg1;
- (id)takeScreenShot:(long long)arg1;
- (void)getShareThumbnail:(long long)arg1;
- (void)dealWithCustomShareData:(long long)arg1;
- (void)shareOutOfQzone:(id)arg1 to:(long long)arg2;
- (void)stopWaitResponseStatus;
- (id)getPictureURL:(long long)arg1;
- (id)getImageOfView:(id)arg1;
- (void)startWaitResponseStatus;
- (_Bool)isCustomDefineShare;
- (id)getShareUrl:(long long)arg1;
- (id)getSummary:(long long)arg1;
- (id)getShareText:(long long)arg1;
- (void)doSpam;
- (void)handleRespFromWeChat:(id)arg1;
- (void)handleReqFromWeChat:(id)arg1;
- (void)sendReq:(id)arg1 andSummary:(id)arg2 andURL:(id)arg3 andImage:(id)arg4 andScene:(int)arg5;
- (void)sendReqToWeChat:(id)arg1;
- (void)sendReqToWeChatForAlbum:(id)arg1;
- (void)openInQQBrowser;
- (void)installQQBrowser;
- (_Bool)isQQBrowserInstalled;
- (void)openInBrowser;
- (void)favoriteBtnTouch;
- (void)sendReqToQQ:(id)arg1 description:(id)arg2 andURL:(id)arg3 andImage:(id)arg4;
- (void)shareToQQBtnTouch:(id)arg1;
- (void)shareToQzoneBtnTouch;
- (void)didTapOnActionSheetItemWithTitle:(id)arg1;
- (id)resizeImage:(id)arg1 size:(struct CGSize)arg2;
- (id)requestImageWithURL:(id)arg1;
- (id)getLogoImage;
- (void)requestURLInfoManager:(id)arg1 didRequestSuccess:(_Bool)arg2 model:(id)arg3;
- (id)getUrlForShare;
- (_Bool)shouldShowShareToWeChat;
- (_Bool)shouldShowShareToQQ;
- (void)openShareActionSheet;
- (void)showShareMenu;
- (void)checkUrlInfo:(id)arg1;
- (void)saveShareContent:(id)arg1 content:(id)arg2 picUrl:(id)arg3 shareUrl:(id)arg4 report:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

