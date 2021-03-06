//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MTMYCloudUploadDelegate-Protocol.h"
#import "MTMYImagePreviewTableViewCellDelegate-Protocol.h"
#import "MTMYUploadProgressViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MTMYCloudUploader, MTMYGoodeDetailModel, MTMYImagePickerController, MTMYPreviewTableHeaderView, MTMYSKUInfo, MTMYUploadProgressView, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSValue, UIButton, UITableView, UIView;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MTMYImagePreviewViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MTMYCloudUploadDelegate, MTMYUploadProgressViewDelegate, MTMYImagePreviewTableViewCellDelegate>
{
    NSObject<OS_dispatch_semaphore> *upload_semaphore;
    NSObject<OS_dispatch_queue> *uploadQueue;
    NSObject<OS_dispatch_queue> *imageOperationQueue;
    _Bool _shouldShowAlert;
    _Bool _isCancel;
    int _percent;
    NSMutableArray *_imageURLS;
    NSMutableArray *_imageAssets;
    NSMutableSet *_overlyCropPhotos;
    NSMutableSet *_blurryPhotos;
    long long _imageType;
    long long _maxPhotoCount;
    MTMYGoodeDetailModel *_goodsInfo;
    MTMYSKUInfo *_skuInfo;
    MTMYImagePickerController *_imagePicker;
    long long _minPhotoCount;
    NSString *_customerServiceQQ;
    long long _photoCount;
    double _basePercent;
    NSValue *_targetRect;
    UITableView *_tableView;
    UIView *_bottomView;
    UIButton *_uploadButton;
    MTMYUploadProgressView *_progressView;
    MTMYPreviewTableHeaderView *_previewTableHederView;
    NSMutableDictionary *_uploadImagesMap;
    NSMutableArray *_uploadTasks;
    MTMYCloudUploader *_uploader;
}

@property(nonatomic) int percent; // @synthesize percent=_percent;
@property(retain, nonatomic) MTMYCloudUploader *uploader; // @synthesize uploader=_uploader;
@property(retain, nonatomic) NSMutableArray *uploadTasks; // @synthesize uploadTasks=_uploadTasks;
@property(retain, nonatomic) NSMutableDictionary *uploadImagesMap; // @synthesize uploadImagesMap=_uploadImagesMap;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(retain, nonatomic) MTMYPreviewTableHeaderView *previewTableHederView; // @synthesize previewTableHederView=_previewTableHederView;
@property(retain, nonatomic) MTMYUploadProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak UIButton *uploadButton; // @synthesize uploadButton=_uploadButton;
@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSValue *targetRect; // @synthesize targetRect=_targetRect;
@property(nonatomic) double basePercent; // @synthesize basePercent=_basePercent;
@property(nonatomic) long long photoCount; // @synthesize photoCount=_photoCount;
@property(copy, nonatomic) NSString *customerServiceQQ; // @synthesize customerServiceQQ=_customerServiceQQ;
@property(nonatomic) long long minPhotoCount; // @synthesize minPhotoCount=_minPhotoCount;
@property(nonatomic) __weak MTMYImagePickerController *imagePicker; // @synthesize imagePicker=_imagePicker;
@property(retain, nonatomic) MTMYSKUInfo *skuInfo; // @synthesize skuInfo=_skuInfo;
@property(retain, nonatomic) MTMYGoodeDetailModel *goodsInfo; // @synthesize goodsInfo=_goodsInfo;
@property(nonatomic) long long maxPhotoCount; // @synthesize maxPhotoCount=_maxPhotoCount;
@property(nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property(nonatomic) _Bool shouldShowAlert; // @synthesize shouldShowAlert=_shouldShowAlert;
@property(retain, nonatomic) NSMutableSet *blurryPhotos; // @synthesize blurryPhotos=_blurryPhotos;
@property(retain, nonatomic) NSMutableSet *overlyCropPhotos; // @synthesize overlyCropPhotos=_overlyCropPhotos;
@property(retain, nonatomic) NSMutableArray *imageAssets; // @synthesize imageAssets=_imageAssets;
@property(retain, nonatomic) NSMutableArray *imageURLS; // @synthesize imageURLS=_imageURLS;
- (void).cxx_destruct;
- (void)imagePreviewTableViewCellDidTappedMarkView;
- (_Bool)imagePreviewTableViewCell:(id)arg1 shouldChangeAtIndexRow:(long long)arg2 originNumber:(long long)arg3 currentNumber:(long long)arg4;
- (void)uploader:(id)arg1 didUploadFail:(id)arg2 task:(id)arg3 uploadType:(long long)arg4;
- (void)uploader:(id)arg1 didUploadSucceed:(id)arg2 task:(id)arg3 uploadType:(long long)arg4;
- (void)uploader:(id)arg1 uploadProgress:(float)arg2 task:(id)arg3 uploadType:(long long)arg4;
- (id)compressdImageURLForURL:(id)arg1;
- (void)showProgressView;
- (int)numberOfUploadTasks;
- (void)excuteUpload;
- (void)upload;
- (void)pushUploadTask;
- (void)stopUploadTask;
- (void)dequeueUploadTasksFromQueue;
- (void)startUploadTask;
- (void)openSystemSetting;
- (void)updatePhotoCount;
- (void)updateExtremePhotos;
- (void)openOrderPage;
- (void)openLoginPage;
- (void)uploadProgressViewDidFinished:(id)arg1;
- (void)uploadProgressViewDidClose:(id)arg1;
- (unsigned long long)sizeForFilePath:(id)arg1;
- (void)backButtonTaped:(id)arg1;
- (void)uploadButtonTaped:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)currentVCIsEditingWithTableView:(id)arg1;
- (void)backToPreViewControllerIfNeeded;
- (void)setTrimmedImageURL:(id)arg1 forIndex:(long long)arg2;
- (id)imageStateForIndex:(long long)arg1;
- (void)reloadTableViewData;
- (void)removeImageInfoForIndex:(id)arg1 WithOriginalNumber:(long long)arg2;
- (_Bool)validImageNumber:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setupCell:(id)arg1 forIndexPath:(id)arg2;
- (void)showFloatAlertViewIfNeeded;
- (_Bool)shouldShowUserGuide;
- (void)setHasShownUserGuide;
- (void)setupNotifications;
- (void)setupTableView;
- (void)setupBottomView;
- (void)setupNavTitleView;
- (void)setupLeftBackButtonItem;
- (void)setupUI;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

