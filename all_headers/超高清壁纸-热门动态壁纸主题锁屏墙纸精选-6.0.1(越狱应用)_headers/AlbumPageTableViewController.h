//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WPPageTableViewController.h"

#import "PageSmartLinkRedirectDataModelDelegate-Protocol.h"
#import "WPPageItemCell051071101201Delegate-Protocol.h"
#import "WPPageItemCell120100Delegate-Protocol.h"

@class NSDictionary, NSIndexPath, NSString, PageSmartLinkRedirectDataModel, UIImageView, WPPageItemCell030100203204;
@protocol AlbumPageTableViewControllerDelegate;

@interface AlbumPageTableViewController : WPPageTableViewController <PageSmartLinkRedirectDataModelDelegate, WPPageItemCell120100Delegate, WPPageItemCell051071101201Delegate>
{
    _Bool _needAddCoverContentInsetY;
    _Bool _isTrackerVerticalScroll;
    id <AlbumPageTableViewControllerDelegate> _delegate;
    NSDictionary *_headerPageItem;
    NSIndexPath *_headerPageItemIndexPath;
    NSDictionary *_redirectDict;
    NSString *_redirectLinkFullName;
    NSString *_redirectLinkUrlString;
    NSString *_redirectStyle;
    NSString *_forwardLinkFullName;
    NSString *_forwardLinkUrlString;
    NSDictionary *_polyccRealCoverDict;
    NSDictionary *_polyccRealLinkDict;
    NSString *_polyccRealTitle;
    WPPageItemCell030100203204 *_polyccCurrentCell;
    NSDictionary *_albumFirstPictureDict;
    PageSmartLinkRedirectDataModel *_redirectDataModel;
    double _coverContentInsetY;
    UIImageView *_appCoverBottomView;
    NSDictionary *_headerContentCoverDict;
    double _isSendedHeaderContentCoverEnterStats;
    double _isSendedHeaderContentCoverShowStats;
}

@property(nonatomic) _Bool isTrackerVerticalScroll; // @synthesize isTrackerVerticalScroll=_isTrackerVerticalScroll;
@property(nonatomic) double isSendedHeaderContentCoverShowStats; // @synthesize isSendedHeaderContentCoverShowStats=_isSendedHeaderContentCoverShowStats;
@property(nonatomic) double isSendedHeaderContentCoverEnterStats; // @synthesize isSendedHeaderContentCoverEnterStats=_isSendedHeaderContentCoverEnterStats;
@property(retain, nonatomic) NSDictionary *headerContentCoverDict; // @synthesize headerContentCoverDict=_headerContentCoverDict;
@property(retain, nonatomic) UIImageView *appCoverBottomView; // @synthesize appCoverBottomView=_appCoverBottomView;
@property(nonatomic) double coverContentInsetY; // @synthesize coverContentInsetY=_coverContentInsetY;
@property(nonatomic) _Bool needAddCoverContentInsetY; // @synthesize needAddCoverContentInsetY=_needAddCoverContentInsetY;
@property(retain, nonatomic) PageSmartLinkRedirectDataModel *redirectDataModel; // @synthesize redirectDataModel=_redirectDataModel;
@property(retain, nonatomic) NSDictionary *albumFirstPictureDict; // @synthesize albumFirstPictureDict=_albumFirstPictureDict;
@property(retain, nonatomic) WPPageItemCell030100203204 *polyccCurrentCell; // @synthesize polyccCurrentCell=_polyccCurrentCell;
@property(retain, nonatomic) NSString *polyccRealTitle; // @synthesize polyccRealTitle=_polyccRealTitle;
@property(retain, nonatomic) NSDictionary *polyccRealLinkDict; // @synthesize polyccRealLinkDict=_polyccRealLinkDict;
@property(retain, nonatomic) NSDictionary *polyccRealCoverDict; // @synthesize polyccRealCoverDict=_polyccRealCoverDict;
@property(retain, nonatomic) NSString *forwardLinkUrlString; // @synthesize forwardLinkUrlString=_forwardLinkUrlString;
@property(retain, nonatomic) NSString *forwardLinkFullName; // @synthesize forwardLinkFullName=_forwardLinkFullName;
@property(retain, nonatomic) NSString *redirectStyle; // @synthesize redirectStyle=_redirectStyle;
@property(retain, nonatomic) NSString *redirectLinkUrlString; // @synthesize redirectLinkUrlString=_redirectLinkUrlString;
@property(retain, nonatomic) NSString *redirectLinkFullName; // @synthesize redirectLinkFullName=_redirectLinkFullName;
@property(retain, nonatomic) NSDictionary *redirectDict; // @synthesize redirectDict=_redirectDict;
@property(retain, nonatomic) NSIndexPath *headerPageItemIndexPath; // @synthesize headerPageItemIndexPath=_headerPageItemIndexPath;
@property(retain, nonatomic) NSDictionary *headerPageItem; // @synthesize headerPageItem=_headerPageItem;
@property(nonatomic) __weak id <AlbumPageTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didLoadPageSmartLinkRedirectFail:(id)arg1 redirectStyle:(id)arg2 error:(id)arg3;
- (void)didLoadPageSmartLinkRedirectFinished:(id)arg1 redirectStyle:(id)arg2;
- (void)didLoadPageSmartLinkRedirectCompleted:(id)arg1 redirectStyle:(id)arg2 redirectInfo:(id)arg3;
- (void)didLoadPageSmartLinkRedirectStart:(id)arg1 redirectStyle:(id)arg2;
- (void)didLoadPageCellsFail:(id)arg1 error:(id)arg2;
- (void)didLoadPageCellsCompleted:(id)arg1 pageCells:(id)arg2;
- (void)didLoadPageCellsStart:(id)arg1;
- (void)didClickDIYButtonAtIndexPath:(id)arg1 diyInfoDict:(id)arg2;
- (void)didChangeContentExpandState:(id)arg1 pageItemDict:(id)arg2 indexPath:(id)arg3;
- (void)didSelectCellAtIndexPath:(id)arg1 pageItemInfo:(id)arg2 linkInfo:(id)arg3;
- (void)didSelectItemAtIndex:(long long)arg1 indexPath:(id)arg2 userInfo:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)registerHeaderPageItemAndPageCellStyleForTableView;
- (void)loadView;
- (void)loadMorePageCells;
- (void)updateViewAtLoadedPageItems;
- (void)loadRedirectDataInfo;
- (void)resetLoadPageCellsInfo;
- (void)releaseObject;
- (void)setupRecommendAppStyle;
- (void)setHeaderPageItem:(id)arg1 headerPageItemIndexPath:(id)arg2;
- (void)setRedirectPageItems:(id)arg1;
- (void)needLoadRedirectDataInfo;
- (_Bool)isSupportPageItemStyleForRedirect;
- (void)sendHeaderContentCoverStats:(int)arg1;
- (void)clickCoverBottomView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

