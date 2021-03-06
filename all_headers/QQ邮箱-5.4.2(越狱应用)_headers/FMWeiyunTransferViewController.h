//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMCommonViewController.h"

#import "FMWeiyunFileViewDelegate-Protocol.h"

@class FMAttachInfo, FMCommonFile, FMFtnFile, FMWeiYunFileView, FMWeiyunPushInfo, FMWeiyunTransferResult, NSString;

@interface FMWeiyunTransferViewController : FMCommonViewController <FMWeiyunFileViewDelegate>
{
    FMAttachInfo *_attachFile;
    FMFtnFile *_ftnFile;
    long long _fileType;
    FMWeiyunPushInfo *_pushInfo;
    FMWeiyunTransferResult *_transferResult;
    FMWeiYunFileView *_fileView;
    _Bool _notInSight;
    _Bool _fromOtherPush;
    _Bool _noNeedPolling;
    FMCommonFile *_transferFile;
    long long _transferingTaskId;
    long long _status;
    unsigned long long _pollingTimes;
    unsigned long long _pollingInterval;
}

@property(nonatomic) unsigned long long pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property(nonatomic) unsigned long long pollingTimes; // @synthesize pollingTimes=_pollingTimes;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) long long transferingTaskId; // @synthesize transferingTaskId=_transferingTaskId;
@property(readonly, nonatomic) FMCommonFile *transferFile; // @synthesize transferFile=_transferFile;
- (void).cxx_destruct;
- (void)fileView:(id)arg1 didRenderFileViewActionType:(int)arg2;
- (unsigned long long)getPollingInterval;
- (void)didReceivePushInfo:(id)arg1;
- (_Bool)canPolling;
- (void)startPolling;
- (void)stopPolling;
- (unsigned long long)estimatedMaxTransferTime;
- (unsigned long long)estimatedMinTransferTime;
- (void)startQueryTransferStatusWithTaskID:(long long)arg1;
- (void)handleCloseButton:(id)arg1;
- (void)handleOpenWeiyun;
- (void)handleRetry;
- (void)startTransferFtnFile;
- (void)startTransferNormalAttach;
- (void)startTransfer;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)didLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initSubviews;
- (void)initNavigationItems;
- (id)initWithPushInfo:(id)arg1;
- (id)initWithFile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

