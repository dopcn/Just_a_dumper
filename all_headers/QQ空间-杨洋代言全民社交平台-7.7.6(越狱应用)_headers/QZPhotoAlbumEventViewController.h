//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QzoneBaseTableViewController.h"

#import "QZPhotoAlbumEventViewCellDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, QZPhotoEventImageManager;

@interface QZPhotoAlbumEventViewController : QzoneBaseTableViewController <QZPhotoAlbumEventViewCellDelegate>
{
    NSMutableArray *_eventPhotos;
    NSMutableArray *_cacheEventPhotos;
    NSMutableArray *_exposuredArray;
    NSMutableArray *_hideArray;
    NSMutableArray *_reportExposedArray;
    NSDictionary *_currentEventDict;
    NSMutableDictionary *_eventDescIDDict;
    NSArray *_updatedEventPhotos;
    NSMutableArray *_uploadedIdentifiers;
    NSMutableArray *_preloadAssetsEvents;
    NSMutableArray *_hintedBigEvents;
    long long _clipPhotosMaxNum;
    _Bool _hasMore;
    _Bool _shouldLoadMore;
    _Bool _shouldRequest;
    QZPhotoEventImageManager *_imageManager;
    double _enterTime;
    CDUnknownBlockType _onEventPhotoChange;
    CDUnknownBlockType _onWillExit;
    CDUnknownBlockType _onExposuredEventChange;
}

+ (void)pushDetailViewController:(long long)arg1 photos:(id)arg2 eventDict:(id)arg3 title:(id)arg4 dateStr:(id)arg5 key:(id)arg6 oriImage:(id)arg7 originalRect:(struct CGRect)arg8 scaleType:(long long)arg9 parentViewController:(id)arg10 onUploadCompleteBlock:(CDUnknownBlockType)arg11 currentEventIndex:(long long)arg12 uploadEntrance:(long long)arg13;
@property(retain, nonatomic) QZPhotoEventImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(nonatomic) long long clipPhotosMaxNum; // @synthesize clipPhotosMaxNum=_clipPhotosMaxNum;
@property(nonatomic) _Bool shouldLoadMore; // @synthesize shouldLoadMore=_shouldLoadMore;
@property(nonatomic) _Bool shouldRequest; // @synthesize shouldRequest=_shouldRequest;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSMutableArray *hintedBigEvents; // @synthesize hintedBigEvents=_hintedBigEvents;
@property(retain, nonatomic) NSMutableArray *preloadAssetsEvents; // @synthesize preloadAssetsEvents=_preloadAssetsEvents;
@property(retain, nonatomic) NSMutableArray *uploadedIdentifiers; // @synthesize uploadedIdentifiers=_uploadedIdentifiers;
@property(retain, nonatomic) NSArray *updatedEventPhotos; // @synthesize updatedEventPhotos=_updatedEventPhotos;
@property(retain, nonatomic) NSMutableDictionary *eventDescIDDict; // @synthesize eventDescIDDict=_eventDescIDDict;
@property(retain, nonatomic) NSDictionary *currentEventDict; // @synthesize currentEventDict=_currentEventDict;
@property(retain, nonatomic) NSMutableArray *reportExposedArray; // @synthesize reportExposedArray=_reportExposedArray;
@property(retain, nonatomic) NSMutableArray *hideArray; // @synthesize hideArray=_hideArray;
@property(retain, nonatomic) NSMutableArray *exposuredArray; // @synthesize exposuredArray=_exposuredArray;
@property(retain, nonatomic) NSMutableArray *cacheEventPhotos; // @synthesize cacheEventPhotos=_cacheEventPhotos;
@property(retain, nonatomic) NSMutableArray *eventPhotos; // @synthesize eventPhotos=_eventPhotos;
@property(copy, nonatomic) CDUnknownBlockType onExposuredEventChange; // @synthesize onExposuredEventChange=_onExposuredEventChange;
@property(copy, nonatomic) CDUnknownBlockType onWillExit; // @synthesize onWillExit=_onWillExit;
@property(copy, nonatomic) CDUnknownBlockType onEventPhotoChange; // @synthesize onEventPhotoChange=_onEventPhotoChange;
- (id)filterArrayByIdentifiler:(id)arg1;
- (void)preloadAsset:(id)arg1;
- (void)pushGifEditViewController:(id)arg1 onUploadCompleteBlock:(CDUnknownBlockType)arg2;
- (void)pushUploadPhotoVC:(long long)arg1 photos:(id)arg2 eventDict:(id)arg3;
- (void)runOnEventPhotoChange;
- (void)releaseBlocks;
- (void)createDetailViewControllerWithEventDict:(id)arg1 userSelectedList:(id)arg2 title:(id)arg3 dateStr:(id)arg4 imageView:(id)arg5 key:(id)arg6 oriImage:(id)arg7;
- (void)viewWillDisappear:(_Bool)arg1;
- (long long)getCurrentScaleType;
- (void)addTaskByModels:(id)arg1 batchId:(long long)arg2 scaleType:(long long)arg3;
- (void)report:(id)arg1 secondAct:(long long)arg2 thirdAct:(long long)arg3;
- (void)onClickSendPhotos:(id)arg1 eventIndex:(long long)arg2;
- (void)updateCacheEventsID:(id)arg1 WithPoiInfo:(id)arg2;
- (void)onUpdateOriginEventDict:(id)arg1 withEventDict:(id)arg2 poiInfo:(id)arg3;
- (void)uploadGif:(id)arg1;
- (void)uploadPhotos:(id)arg1 title:(id)arg2 dateStr:(id)arg3 imageView:(id)arg4 oriImage:(id)arg5;
- (void)handleOpenUrl:(id)arg1 backendOff:(_Bool)arg2 param:(id)arg3;
- (void)onClickUploadBtn:(id)arg1 title:(id)arg2 dateStr:(id)arg3 imageView:(id)arg4 key:(id)arg5 oriImage:(id)arg6;
- (void)onClickHideBtn:(id)arg1;
- (void)removeEventDict:(id)arg1;
- (long long)indexOfEventDict:(id)arg1 onPhotoDicts:(id)arg2;
- (long long)indexOfEventDict:(id)arg1;
- (void)createUploadControllerWithEventDict:(id)arg1 userSelectedList:(id)arg2;
- (void)createHeaderView;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)checkAutoPlayViewEvent:(long long)arg1;
- (void)onGetAutoPlayImages:(id)arg1;
- (void)onPostDynamicSuccess:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)checkFootViewState;
- (_Bool)loadMoreTableViewDataSource;
- (void)reloadData;
- (void)loadUpdatedEventPhotos;
- (_Bool)onLoadMore;
- (_Bool)onHasMore;
- (void)updateEventPhotos:(id)arg1 eventType:(long long)arg2 hasMore:(_Bool)arg3;
- (void)updateCacheEventPhotosWithHideItems:(id)arg1;
- (void)loadHideEvent;
- (void)loadCacheEventPhotos;
- (void)writeHintedBigEventsToFile;
- (void)loadExposuredEvent;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)leftItemToggle;
- (void)dealloc;
- (id)initWithEventPhotos:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

