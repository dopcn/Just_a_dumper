//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XCFTableViewController.h"

#import "XCFFeedHeaderSectionProviderDelegate-Protocol.h"
#import "XCFFeedSalonSectionProviderDelegate-Protocol.h"
#import "XcfUrlHandlerProtocol-Protocol.h"

@class NSMutableSet, NSString, UIBarButtonItem, XCFFeedHeaderSectionProvider, XCFFeedsBackgroundView, XcfDishManager;

@interface XcfFeedsViewController : XCFTableViewController <XCFFeedSalonSectionProviderDelegate, XCFFeedHeaderSectionProviderDelegate, XcfUrlHandlerProtocol>
{
    NSString *_nexCursor;
    long long _pageLimit;
    _Bool _isWechatInstalled;
    NSMutableSet *_activeVideoCells;
    _Bool _needsToReloadData;
    _Bool _uploadDishAfterAppears;
    XCFFeedHeaderSectionProvider *_headerSectionProvider;
    XcfDishManager *_dishManager;
    XCFFeedsBackgroundView *_backgroundView;
    UIBarButtonItem *_notificationBarButtonItem;
}

+ (void)handleUrl:(id)arg1;
+ (_Bool)canHandleNextUrl:(id)arg1;
+ (_Bool)canHandleUrl:(id)arg1;
@property(retain, nonatomic) UIBarButtonItem *notificationBarButtonItem; // @synthesize notificationBarButtonItem=_notificationBarButtonItem;
@property(retain, nonatomic) XCFFeedsBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool uploadDishAfterAppears; // @synthesize uploadDishAfterAppears=_uploadDishAfterAppears;
@property(nonatomic) _Bool needsToReloadData; // @synthesize needsToReloadData=_needsToReloadData;
@property(retain, nonatomic) XcfDishManager *dishManager; // @synthesize dishManager=_dishManager;
@property(retain, nonatomic) XCFFeedHeaderSectionProvider *headerSectionProvider; // @synthesize headerSectionProvider=_headerSectionProvider;
- (void).cxx_destruct;
- (id)trackLocation;
- (void)headerSectionproviderShowUnreadNotifications:(id)arg1;
- (void)salonFeedSectionProvider:(id)arg1 selectSalonConversation:(id)arg2;
- (void)salonFeedSectionProvider:(id)arg1 selectSalon:(id)arg2;
- (void)salonFeedSectionProviderDidSelectSender:(id)arg1;
- (void)xcf_reviewDiggChanged:(id)arg1;
- (void)xcf_dishDiggRemoved:(id)arg1;
- (void)xcf_dishDiggAdded:(id)arg1;
- (void)uploadDish;
- (void)findFriendsButtonTouched:(id)arg1;
- (void)onNotificationButtonTouched:(id)arg1;
- (void)dishAdded:(id)arg1;
- (void)didUserSignOut:(id)arg1;
- (void)didUserLogin:(id)arg1;
- (void)didCancelDiggSalonConversation:(id)arg1;
- (void)didDiggSalonConversation:(id)arg1;
- (void)didSalonDeleted:(id)arg1;
- (void)startRefreshingAction;
- (void)startLoadingMoreAction;
- (void)resumeActiveMicroVideos;
- (void)pauseAllMicroVideos;
- (void)refreshActiveVideoCellPlayStatusWithCells:(id)arg1;
- (struct CGRect)allowMicroVideoPlayRect;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)sectionProviderWithFeedModel:(id)arg1;
- (void)refreshHeaderSectionProviderStatus;
- (void)subLoginAction:(id)arg1;
- (void)registerAction:(id)arg1;
- (void)loginAction:(id)arg1;
- (void)showRecommendUserAction:(id)arg1;
- (void)refreshTableBackgroundViewStatus;
- (_Bool)isNeedShowEmptyListBackgroundView;
- (void)viewDidAppearForTheFirstTime:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)reloadIfNeeded;
- (void)followStateChanged:(id)arg1;
- (void)updateNotificationBadge;
- (void)viewDidLoad;
- (double)titleWidth;
- (void)setRightBarItemForNavigationItem:(id)arg1;
- (void)dealloc;
- (id)initForUploadDish;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

