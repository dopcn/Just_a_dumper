//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MusicTableVC.h"

#import "APIServiceDelegate-Protocol.h"
#import "EmptyReloadViewDelegate-Protocol.h"
#import "OnlineTrackCellDelegate-Protocol.h"
#import "UGCSongListDetailHeaderDeleagte-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class EditDownloadListVC, MusicEmptyView, NSString, UGCSongListBaseInfoModel, UGCSongListDetailHeader, UIButton, UIColor, UIImageView, UILabel, UIView;

@interface UGCSongListDetailBaseVC : MusicTableVC <UIGestureRecognizerDelegate, APIServiceDelegate, EmptyReloadViewDelegate, OnlineTrackCellDelegate, UGCSongListDetailHeaderDeleagte>
{
    UIButton *_btnCollect;
    UIButton *_btnDownload;
    UIButton *_btnShare;
    UIView *_viewBtnBack;
    UIView *_viewForGestureUp;
    _Bool _expanded;
    _Bool _expanding;
    _Bool _showBar;
    _Bool _isShowingDesc;
    _Bool _isShowArrow;
    _Bool _alwaysShowTitle;
    _Bool _alwaysShowRightBar;
    _Bool _isShowBannerAd;
    long long _songListDetailFromTag;
    long long _homeSonglistIndex;
    NSString *_listID;
    UGCSongListBaseInfoModel *_baseInfoModel;
    NSString *_methodId;
    UIView *_adView;
    MusicEmptyView *_noSong;
    UIImageView *_albumCover;
    unsigned long long _type;
    UIView *_viewBackNormal;
    UIView *_viewBackExpand;
    UIImageView *_maskDown;
    EditDownloadListVC *_editDownloadListVC;
    UIButton *_expandCoverBtn;
    UIButton *_upDownBtn;
    UIButton *_playAllBtn;
    UILabel *_songListName;
    UILabel *_tags;
    UILabel *_descLabel;
    UILabel *_cloudLabel;
    UILabel *_listenLabel;
    UILabel *_numLabel;
    UIButton *_descCellChangeStatusBtn;
    UIView *_tagsBackGround;
    UIImageView *_listenImageView;
    UIView *_descView;
    UIView *_descLine;
    UGCSongListDetailHeader *_tableHeaderView;
    UIView *_coverView;
    UIColor *_averageColor;
    struct CGSize _descTextSize;
}

@property(nonatomic) _Bool isShowBannerAd; // @synthesize isShowBannerAd=_isShowBannerAd;
@property(retain, nonatomic) UIColor *averageColor; // @synthesize averageColor=_averageColor;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UGCSongListDetailHeader *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(nonatomic) __weak UIView *descLine; // @synthesize descLine=_descLine;
@property(nonatomic) __weak UIView *descView; // @synthesize descView=_descView;
@property(nonatomic) __weak UIImageView *listenImageView; // @synthesize listenImageView=_listenImageView;
@property(nonatomic) __weak UIView *tagsBackGround; // @synthesize tagsBackGround=_tagsBackGround;
@property(nonatomic) _Bool alwaysShowRightBar; // @synthesize alwaysShowRightBar=_alwaysShowRightBar;
@property(nonatomic) _Bool alwaysShowTitle; // @synthesize alwaysShowTitle=_alwaysShowTitle;
@property(nonatomic) _Bool isShowArrow; // @synthesize isShowArrow=_isShowArrow;
@property(nonatomic) __weak UIButton *descCellChangeStatusBtn; // @synthesize descCellChangeStatusBtn=_descCellChangeStatusBtn;
@property(nonatomic) struct CGSize descTextSize; // @synthesize descTextSize=_descTextSize;
@property(nonatomic) __weak UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(nonatomic) _Bool isShowingDesc; // @synthesize isShowingDesc=_isShowingDesc;
@property(retain, nonatomic) UILabel *listenLabel; // @synthesize listenLabel=_listenLabel;
@property(retain, nonatomic) UILabel *cloudLabel; // @synthesize cloudLabel=_cloudLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) UILabel *songListName; // @synthesize songListName=_songListName;
@property(retain, nonatomic) UIButton *playAllBtn; // @synthesize playAllBtn=_playAllBtn;
@property(retain, nonatomic) UIButton *upDownBtn; // @synthesize upDownBtn=_upDownBtn;
@property(retain, nonatomic) UIButton *expandCoverBtn; // @synthesize expandCoverBtn=_expandCoverBtn;
@property(retain, nonatomic) EditDownloadListVC *editDownloadListVC; // @synthesize editDownloadListVC=_editDownloadListVC;
@property(retain, nonatomic) UIImageView *maskDown; // @synthesize maskDown=_maskDown;
@property(retain, nonatomic) UIView *viewBackExpand; // @synthesize viewBackExpand=_viewBackExpand;
@property(retain, nonatomic) UIView *viewBackNormal; // @synthesize viewBackNormal=_viewBackNormal;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIImageView *albumCover; // @synthesize albumCover=_albumCover;
@property(retain, nonatomic) MusicEmptyView *noSong; // @synthesize noSong=_noSong;
@property(retain, nonatomic) UIView *adView; // @synthesize adView=_adView;
@property(nonatomic) _Bool showBar; // @synthesize showBar=_showBar;
@property(copy, nonatomic) NSString *methodId; // @synthesize methodId=_methodId;
@property(retain, nonatomic) UGCSongListBaseInfoModel *baseInfoModel; // @synthesize baseInfoModel=_baseInfoModel;
@property(retain, nonatomic) NSString *listID; // @synthesize listID=_listID;
@property(nonatomic) long long homeSonglistIndex; // @synthesize homeSonglistIndex=_homeSonglistIndex;
@property(nonatomic) long long songListDetailFromTag; // @synthesize songListDetailFromTag=_songListDetailFromTag;
- (void).cxx_destruct;
- (void)resetWhenIsNotToday;
- (void)loadBannerAd;
- (_Bool)alwaysShowRightView;
- (void)clickMenuBtnWithIndex:(long long)arg1 view:(id)arg2;
- (void)menuBtnDidClick:(id)arg1;
- (void)editMunu;
- (void)editBtnDidClick:(id)arg1;
- (id)customRightView;
- (_Bool)navigationBarIsTransparent;
- (double)navigationBarAlpha;
- (void)headerViewDidClickDescView:(id)arg1 view:(id)arg2;
- (void)headerViewDidClickDownloadBtn:(id)arg1 view:(id)arg2;
- (void)headerViewDidClickBatchBtn:(id)arg1 view:(id)arg2;
- (void)allPlayFeedBack;
- (void)headerViewDidClickPlayBtn:(id)arg1 view:(id)arg2;
- (void)headerViewDidClickShareBtn:(id)arg1 view:(id)arg2;
- (void)headerViewDidClickCommentBtn:(id)arg1 view:(id)arg2;
- (void)cancelCollectionSuccess;
- (void)collectionSuccess;
- (void)reloadH5;
- (void)headerViewDidClickCollectBtn:(id)arg1 view:(id)arg2;
- (void)requestSongStatisticsWithId:(id)arg1;
- (void)playAllTrackAtIndex:(long long)arg1;
- (void)trackCellPlayMV:(id)arg1;
- (void)doReloadData:(id)arg1;
- (void)httpFailed:(id)arg1 userInfo:(id)arg2;
- (void)refreshNoSongView;
- (void)songMenuInfoFetched:(id)arg1 userInfo:(id)arg2;
- (void)fetchData;
- (id)getModelFromLocalWithId:(id)arg1;
- (void)updateAndSaveSonglistsWithId:(id)arg1 model:(id)arg2;
- (id)decodeFromSavedModel:(id)arg1;
- (id)getSaveableModel:(id)arg1;
- (void)updateBackgroundColor;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAlbumImageWithURL:(CDUnknownBlockType)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)refreshHeaderView;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tracks;
- (void)didSelectTrackCell:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)fetchADCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)fetchTrackCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)isSHowTrackCell;
- (long long)trackCellNum;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)removeTableViewSubViews;
- (void)deplayTableView;
- (long long)sectionNum;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_initializeTableView;
- (id)noSongText;
- (void)_initializeNoSongView;
- (void)_initializeView;
- (void)loadView;
- (void)dealloc;
- (id)initWithListID:(id)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

