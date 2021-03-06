//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NavigationBarViewController.h"

#import "IBActionSheetDelegate-Protocol.h"
#import "LoginSuccessDelegate-Protocol.h"
#import "MJPhotoBrowserDelegate-Protocol.h"
#import "NavigatonBarViewDelegate-Protocol.h"
#import "TouchTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AFPopupView, MJPhotoBrowser, NSBKCommentDetailData, NSDianPingReplyRows, NSDictionary, NSMutableArray, NSString, ShareVC, UICommentDetailTableView, UIImage, UIImageView, UIView, WikiCommentTool;

@interface UICommentDetailViewController : NavigationBarViewController <NavigatonBarViewDelegate, UITableViewDataSource, UITableViewDelegate, IBActionSheetDelegate, TouchTableViewDelegate, MJPhotoBrowserDelegate, LoginSuccessDelegate>
{
    double y;
    long long _offset;
    UIImage *_imageShare;
    NSString *_stringImageURL1;
    NSString *_stringImageURL2;
    _Bool _commendSucFlag;
    _Bool _isShowProInfo;
    _Bool _is_haowu;
    NSDictionary *_dictData;
    long long _commendType;
    UIImage *_imageDefaultShare;
    NSString *_stringComeFrom;
    long long _type;
    UICommentDetailTableView *_tableView;
    NSMutableArray *_arrayData;
    UIView *_viewTableHeader;
    UIImageView *_imageViewFocus;
    UIView *_viewSectionHeader;
    NSMutableArray *_arrayImgURL;
    NSBKCommentDetailData *_dataDetail;
    WikiCommentTool *_wikiCommentTool;
    NSDianPingReplyRows *_rowsItem;
    ShareVC *_shareV;
    AFPopupView *_popup;
    MJPhotoBrowser *_photoBrowser;
}

@property(retain, nonatomic) MJPhotoBrowser *photoBrowser; // @synthesize photoBrowser=_photoBrowser;
@property(retain, nonatomic) AFPopupView *popup; // @synthesize popup=_popup;
@property(retain, nonatomic) ShareVC *shareV; // @synthesize shareV=_shareV;
@property(retain, nonatomic) NSDianPingReplyRows *rowsItem; // @synthesize rowsItem=_rowsItem;
@property(retain, nonatomic) WikiCommentTool *wikiCommentTool; // @synthesize wikiCommentTool=_wikiCommentTool;
@property(retain, nonatomic) NSBKCommentDetailData *dataDetail; // @synthesize dataDetail=_dataDetail;
@property(retain, nonatomic) NSMutableArray *arrayImgURL; // @synthesize arrayImgURL=_arrayImgURL;
@property(retain, nonatomic) UIView *viewSectionHeader; // @synthesize viewSectionHeader=_viewSectionHeader;
@property(retain, nonatomic) UIImageView *imageViewFocus; // @synthesize imageViewFocus=_imageViewFocus;
@property(retain, nonatomic) UIView *viewTableHeader; // @synthesize viewTableHeader=_viewTableHeader;
@property(retain, nonatomic) NSMutableArray *arrayData; // @synthesize arrayData=_arrayData;
@property(retain, nonatomic) UICommentDetailTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool is_haowu; // @synthesize is_haowu=_is_haowu;
@property(retain, nonatomic) NSString *stringComeFrom; // @synthesize stringComeFrom=_stringComeFrom;
@property(retain, nonatomic) UIImage *imageDefaultShare; // @synthesize imageDefaultShare=_imageDefaultShare;
@property(nonatomic) _Bool isShowProInfo; // @synthesize isShowProInfo=_isShowProInfo;
@property(nonatomic) _Bool commendSucFlag; // @synthesize commendSucFlag=_commendSucFlag;
@property(nonatomic) long long commendType; // @synthesize commendType=_commendType;
@property(retain, nonatomic) NSDictionary *dictData; // @synthesize dictData=_dictData;
- (void).cxx_destruct;
- (void)commonErrorRefresh:(unsigned long long)arg1;
- (void)loadMoreData;
- (void)refreshData;
- (void)tableView:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)tableView:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
- (void)tableView:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
- (void)tableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)shareRequestParams;
- (void)hide;
- (void)beginAnimation;
- (void)requestWikiRelateRatingWithParams;
- (void)LoginSuccessDo:(id)arg1;
- (void)requestWikiCommentDianpingWithParams:(id)arg1;
- (void)requestWikiDianPingCommentsWithParams:(_Bool)arg1;
- (void)requestWikiDianPingDetailWithParams;
- (void)replyTA:(id)arg1;
- (void)quoteTA:(id)arg1;
- (void)opposeTA:(id)arg1;
- (void)supportTA:(id)arg1;
- (void)copyTheContent:(id)arg1;
- (void)comment_report:(id)arg1;
- (void)pushUserHomePageVC;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showViewDelegate;
- (void)mjPhotoDissMiss;
- (void)showBigImage:(id)arg1 withIndex:(long long)arg2;
- (void)buttonToProdetailClick:(id)arg1;
- (void)replyType:(unsigned long long)arg1;
- (void)showWikiCommentTool:(id)arg1 indexPath:(id)arg2;
- (void)buttonJuBaoClick:(id)arg1;
- (void)buttonTuiClick:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadAppointCell:(long long)arg1;
- (void)rightButtonClick;
- (void)leftButtonClick;
- (void)commonInit;
- (void)initNavigationBarView;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

