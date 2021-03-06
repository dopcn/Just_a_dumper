//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFeedNetworkSourceDelegate-Protocol.h"
#import "IGFeedScrollViewListener-Protocol.h"
#import "IGInfoViewDelegate-Protocol.h"
#import "IGListAdapterDelegate-Protocol.h"
#import "IGMediaThumbnailSectionControllerSelectionDelegate-Protocol.h"

@class IGFeedNetworkSource, IGFeedPreviewHandler, IGFeedStarterKit, IGInfoView, IGSavedMediaCollection, IGSavedMediaCollectionsPivotMediaFeedAdapterDataSource, IGUserSession, NSMutableSet, NSString;
@protocol IGMediaThumbnailSectionControllerSelectionDelegate;

@interface IGSaveCollectionPivotsViewController : IGViewController <IGFeedNetworkSourceDelegate, IGFeedScrollViewListener, IGInfoViewDelegate, IGListAdapterDelegate, IGMediaThumbnailSectionControllerSelectionDelegate>
{
    _Bool _hasLoadedData;
    IGInfoView *_infoView;
    IGSavedMediaCollection *_collection;
    IGUserSession *_userSession;
    id <IGMediaThumbnailSectionControllerSelectionDelegate> _selectionDelegate;
    IGFeedStarterKit *_feed;
    IGFeedNetworkSource *_feedNetworkSource;
    IGSavedMediaCollectionsPivotMediaFeedAdapterDataSource *_dataSource;
    IGFeedPreviewHandler *_previewHandler;
    NSMutableSet *_loggedImpressions;
}

@property(readonly, nonatomic) NSMutableSet *loggedImpressions; // @synthesize loggedImpressions=_loggedImpressions;
@property(retain, nonatomic) IGFeedPreviewHandler *previewHandler; // @synthesize previewHandler=_previewHandler;
@property(retain, nonatomic) IGSavedMediaCollectionsPivotMediaFeedAdapterDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) IGFeedNetworkSource *feedNetworkSource; // @synthesize feedNetworkSource=_feedNetworkSource;
@property(readonly, nonatomic) IGFeedStarterKit *feed; // @synthesize feed=_feed;
@property(readonly, nonatomic) __weak id <IGMediaThumbnailSectionControllerSelectionDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) IGSavedMediaCollection *collection; // @synthesize collection=_collection;
- (void).cxx_destruct;
- (void)logClickForMedia:(id)arg1 index:(unsigned long long)arg2;
- (void)logImpressionForMedia:(id)arg1 index:(unsigned long long)arg2;
- (void)logEvent:(id)arg1 forMedia:(id)arg2 index:(unsigned long long)arg3;
- (id)positionForIndex:(long long)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)analyticsModule;
- (void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)tableViewInsetInfoViewDidTapOnView:(id)arg1;
- (void)showInfoView;
- (void)setupInfoView;
- (void)loadNextPage;
- (_Bool)fetchMore;
- (void)fetch;
- (void)didSelectFeedItem:(id)arg1;
- (void)setupPreview;
- (void)setupDataSource;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setupFeed;
- (id)initWithUserSession:(id)arg1 collection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

