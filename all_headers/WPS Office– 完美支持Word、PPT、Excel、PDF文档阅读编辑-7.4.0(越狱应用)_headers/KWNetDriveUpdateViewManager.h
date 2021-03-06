//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WppOperationWithUpdataFileDelegate-Protocol.h"

@class KFileDownloadView, KWDriveUpdataManager, NSString, UIViewController;
@protocol KWNetDriveUpdateViewManagerDelegate;

@interface KWNetDriveUpdateViewManager : NSObject <WppOperationWithUpdataFileDelegate>
{
    int _cloudType;
    id <KWNetDriveUpdateViewManagerDelegate> _delegate;
    KFileDownloadView *_syncProgressView;
    UIViewController *_syncProgressViewCtl;
    KWDriveUpdataManager *_netDriveUpdateManager;
    UIViewController *_rootViewController;
}

@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) KWDriveUpdataManager *netDriveUpdateManager; // @synthesize netDriveUpdateManager=_netDriveUpdateManager;
@property(retain, nonatomic) UIViewController *syncProgressViewCtl; // @synthesize syncProgressViewCtl=_syncProgressViewCtl;
@property(retain, nonatomic) KFileDownloadView *syncProgressView; // @synthesize syncProgressView=_syncProgressView;
@property(retain, nonatomic) id <KWNetDriveUpdateViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelUpdateIploadView;
- (void)resetUpdateProgress:(double)arg1;
- (void)didUploadFile;
- (id)createUpdateUploadView:(id)arg1 modifyTimeStr:(id)arg2 fileSize:(id)arg3;
- (void)touchCancelUpdateFileView;
- (void)dismissSyncProgressView;
- (id)createUpdateUploadView:(id)arg1 modifyTimeStr:(id)arg2 fileSize:(id)arg3 rootViewController:(id)arg4;
- (id)initWithViewController:(id)arg1 uploadFileToCloud:(int)arg2 fromPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

