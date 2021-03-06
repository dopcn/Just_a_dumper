//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "FinderViewControllerDelegate-Protocol.h"
#import "PhotoQualitySelectDelegate-Protocol.h"

@class CapacityView, FileIconPreviewView, FinderViewController, NSDictionary, NSString, NSURL, ShareCacheFileMetaModel, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface InboxViewController : BaseViewController <PhotoQualitySelectDelegate, FinderViewControllerDelegate>
{
    unsigned long long theTag;
    _Bool isCancel;
    long long taskTag;
    long long captureTag;
    long long retryCount;
    _Bool _isShowInPresent;
    _Bool _isReserveInboxFile;
    int _fileModifyType;
    UIButton *_dirButton;
    UIButton *_uploadButton;
    UILabel *_fileNameLabel;
    UILabel *_fileSizeLabel;
    FinderViewController *_finder;
    NSURL *_inboxFile;
    ShareCacheFileMetaModel *_fileMeta;
    CapacityView *_capacityView;
    UIView *_bottomView;
    UILabel *_uploadLabel;
    NSString *_uploadServerPath;
    NSString *_taskEventId;
    FileIconPreviewView *_fileIconView;
    UIImageView *_bottomImageView;
    UILabel *_photoQualityLabel;
    UIButton *_qualityButton;
    UIActivityIndicatorView *_loadingTipIndicator;
    NSDictionary *_dumpPathDict;
    NSString *_originalTransferPath;
}

@property(copy, nonatomic) NSString *originalTransferPath; // @synthesize originalTransferPath=_originalTransferPath;
@property(retain, nonatomic) NSDictionary *dumpPathDict; // @synthesize dumpPathDict=_dumpPathDict;
@property(nonatomic) _Bool isReserveInboxFile; // @synthesize isReserveInboxFile=_isReserveInboxFile;
@property(retain, nonatomic) UIActivityIndicatorView *loadingTipIndicator; // @synthesize loadingTipIndicator=_loadingTipIndicator;
@property(nonatomic) __weak UIButton *qualityButton; // @synthesize qualityButton=_qualityButton;
@property(nonatomic) __weak UILabel *photoQualityLabel; // @synthesize photoQualityLabel=_photoQualityLabel;
@property(nonatomic) _Bool isShowInPresent; // @synthesize isShowInPresent=_isShowInPresent;
@property(retain, nonatomic) UIImageView *bottomImageView; // @synthesize bottomImageView=_bottomImageView;
@property(retain, nonatomic) FileIconPreviewView *fileIconView; // @synthesize fileIconView=_fileIconView;
@property(nonatomic) int fileModifyType; // @synthesize fileModifyType=_fileModifyType;
@property(copy, nonatomic) NSString *taskEventId; // @synthesize taskEventId=_taskEventId;
@property(copy, nonatomic) NSString *uploadServerPath; // @synthesize uploadServerPath=_uploadServerPath;
@property(retain, nonatomic) UILabel *uploadLabel; // @synthesize uploadLabel=_uploadLabel;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) CapacityView *capacityView; // @synthesize capacityView=_capacityView;
@property(retain, nonatomic) ShareCacheFileMetaModel *fileMeta; // @synthesize fileMeta=_fileMeta;
@property(retain, nonatomic) NSURL *inboxFile; // @synthesize inboxFile=_inboxFile;
@property(retain, nonatomic) FinderViewController *finder; // @synthesize finder=_finder;
@property(retain, nonatomic) UILabel *fileSizeLabel; // @synthesize fileSizeLabel=_fileSizeLabel;
@property(retain, nonatomic) UILabel *fileNameLabel; // @synthesize fileNameLabel=_fileNameLabel;
@property(retain, nonatomic) UIButton *uploadButton; // @synthesize uploadButton=_uploadButton;
@property(retain, nonatomic) UIButton *dirButton; // @synthesize dirButton=_dirButton;
- (void).cxx_destruct;
- (id)plistFileName;
- (void)reloadShareModelInfo;
- (void)finishReloadInfo;
- (void)reloadDiskSpaceSize;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)exitViewControllerAction:(_Bool)arg1;
- (void)fetchAlbumFileTransferStatusWithEventId;
- (void)uploadFilesToPath:(id)arg1;
- (void)transferShareFilesTo:(id)arg1;
- (void)transferMBoxMessageFilesTo:(id)arg1;
- (void)launchUpload:(id)arg1;
- (id)choosePathTitle:(id)arg1;
- (id)p2pTransfileModel;
- (_Bool)isP2PShareFile;
- (_Bool)isSaveAsView;
- (void)userChoosed:(id)arg1;
- (void)userCancelled;
- (void)continueUpload;
- (void)uploadButtonTapped;
- (void)choosePath;
- (id)getPathFromPlistFile;
- (void)cancelBtnTapped;
- (_Bool)checkFileExist;
- (void)removeInboxFile;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showBuyVIPAlert;
- (void)qualityButtonAction:(id)arg1;
- (void)reloadVipInfoData:(id)arg1;
- (void)registerNotifications;
- (void)initView;
- (void)updateFileIcon;
- (void)viewDidLoad;
- (id)initWithShareCacheFileMeta:(id)arg1 fileModifyType:(int)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 inFile:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

