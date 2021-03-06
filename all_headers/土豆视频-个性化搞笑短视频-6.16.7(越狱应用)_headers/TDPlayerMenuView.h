//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TDPlayerLanguageViewDelegate-Protocol.h"
#import "TDPlayerQualityViewDelegate-Protocol.h"
#import "TDPlayerSelectEpisodesViewDelegate-Protocol.h"
#import "TDPlayerSelectPlayListViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, TDPlayerDetailVideoModel, TDPlayerDownloadQualityView, TDPlayerLanguageView, TDPlayerMenuBarrageListView, TDPlayerQualityView, TDPlayerSelectEpisodesView, TDPlayerSelectPlayListView, TDPlayerSettingView, TDPlayerShareView, TDPlayerUPSMessageModel, UIImageView, UITapGestureRecognizer, UIViewController;
@protocol TDPlayerMenuViewDelegate;

@interface TDPlayerMenuView : UIView <TDPlayerQualityViewDelegate, TDPlayerLanguageViewDelegate, UIGestureRecognizerDelegate, TDPlayerSelectEpisodesViewDelegate, TDPlayerSelectPlayListViewDelegate>
{
    _Bool _hadSubscribed;
    _Bool _isCollected;
    _Bool _detailCollected;
    _Bool _showSubscribeButton;
    _Bool _isAnimation;
    id <TDPlayerMenuViewDelegate> _delegate;
    TDPlayerUPSMessageModel *_UPSMessage;
    UIViewController *_viewController;
    NSString *_sid;
    NSArray *_streamTypeArray;
    NSArray *_playListArray;
    NSArray *_episodesArray;
    NSArray *_recommendArray;
    NSString *_itemid;
    NSString *_recoid;
    NSString *_encoded_id;
    NSString *_share_spm_url;
    unsigned long long _shareFrom;
    TDPlayerDetailVideoModel *_videoEntity;
    NSString *_showCategory;
    unsigned long long _playerType;
    unsigned long long _videoCategory;
    NSString *_videoId;
    NSString *_videoVV;
    UIView *_mainView;
    UITapGestureRecognizer *_tapSingleGesture;
    long long _netWorkStatus;
    TDPlayerQualityView *_qualityView;
    TDPlayerSettingView *_settingView;
    TDPlayerSelectEpisodesView *_selectEpisodesView;
    TDPlayerSelectPlayListView *_playListView;
    TDPlayerDownloadQualityView *_downloadQualityView;
    TDPlayerShareView *_shareView;
    TDPlayerLanguageView *_languageView;
    TDPlayerMenuBarrageListView *_barrageListView;
    UIView *_collectionView;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) TDPlayerMenuBarrageListView *barrageListView; // @synthesize barrageListView=_barrageListView;
@property(retain, nonatomic) TDPlayerLanguageView *languageView; // @synthesize languageView=_languageView;
@property(retain, nonatomic) TDPlayerShareView *shareView; // @synthesize shareView=_shareView;
@property(retain, nonatomic) TDPlayerDownloadQualityView *downloadQualityView; // @synthesize downloadQualityView=_downloadQualityView;
@property(retain, nonatomic) TDPlayerSelectPlayListView *playListView; // @synthesize playListView=_playListView;
@property(retain, nonatomic) TDPlayerSelectEpisodesView *selectEpisodesView; // @synthesize selectEpisodesView=_selectEpisodesView;
@property(retain, nonatomic) TDPlayerSettingView *settingView; // @synthesize settingView=_settingView;
@property(retain, nonatomic) TDPlayerQualityView *qualityView; // @synthesize qualityView=_qualityView;
@property(nonatomic) long long netWorkStatus; // @synthesize netWorkStatus=_netWorkStatus;
@property(nonatomic) _Bool isAnimation; // @synthesize isAnimation=_isAnimation;
@property(retain, nonatomic) UITapGestureRecognizer *tapSingleGesture; // @synthesize tapSingleGesture=_tapSingleGesture;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(nonatomic) _Bool showSubscribeButton; // @synthesize showSubscribeButton=_showSubscribeButton;
@property(nonatomic) _Bool detailCollected; // @synthesize detailCollected=_detailCollected;
@property(nonatomic) _Bool isCollected; // @synthesize isCollected=_isCollected;
@property(copy, nonatomic) NSString *videoVV; // @synthesize videoVV=_videoVV;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(nonatomic) unsigned long long videoCategory; // @synthesize videoCategory=_videoCategory;
@property(nonatomic) unsigned long long playerType; // @synthesize playerType=_playerType;
@property(copy, nonatomic) NSString *showCategory; // @synthesize showCategory=_showCategory;
@property(nonatomic) __weak TDPlayerDetailVideoModel *videoEntity; // @synthesize videoEntity=_videoEntity;
@property(nonatomic) unsigned long long shareFrom; // @synthesize shareFrom=_shareFrom;
@property(copy, nonatomic) NSString *share_spm_url; // @synthesize share_spm_url=_share_spm_url;
@property(copy, nonatomic) NSString *encoded_id; // @synthesize encoded_id=_encoded_id;
@property(copy, nonatomic) NSString *recoid; // @synthesize recoid=_recoid;
@property(copy, nonatomic) NSString *itemid; // @synthesize itemid=_itemid;
@property(nonatomic) _Bool hadSubscribed; // @synthesize hadSubscribed=_hadSubscribed;
@property(retain, nonatomic) NSArray *recommendArray; // @synthesize recommendArray=_recommendArray;
@property(retain, nonatomic) NSArray *episodesArray; // @synthesize episodesArray=_episodesArray;
@property(retain, nonatomic) NSArray *playListArray; // @synthesize playListArray=_playListArray;
@property(retain, nonatomic) NSArray *streamTypeArray; // @synthesize streamTypeArray=_streamTypeArray;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak TDPlayerUPSMessageModel *UPSMessage; // @synthesize UPSMessage=_UPSMessage;
@property(nonatomic) __weak id <TDPlayerMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showCollectionAnimation;
- (void)pushLoginWithSPM:(id)arg1;
- (void)dealloc;
- (void)TDPlayerTDPlayerQualityViewDidChooseLanguage:(id)arg1;
- (void)TDPlayerRecommendView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)TDPlayerSelectPlayListView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)TDPlayerSelectEpisodesView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)settingViewClick:(id)arg1;
- (void)TDPlayerTDPlayerQualityViewDidChooseQuality:(long long)arg1;
- (void)removeTapGesture;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)addTapGesture;
- (void)showBarrageListButton:(_Bool)arg1;
- (void)hidenAllMenu;
- (void)changeTo:(unsigned long long)arg1;
- (void)hidenAllMenu:(CDUnknownBlockType)arg1;
- (void)showAnimation;
- (void)showRecommendMenu:(id)arg1;
- (void)showPlayListMenu:(id)arg1;
- (void)showSelectEpisodesMenu:(id)arg1;
- (void)downloadBeginWithQuality:(long long)arg1 language:(id)arg2 vid:(id)arg3 videoImage:(id)arg4 title:(id)arg5;
- (void)downloadCurrentVideoWithQuality:(id)arg1 andLangCode:(id)arg2;
- (void)downloadCurrentVideoWithQuality:(long long)arg1;
- (void)subscribeBegin;
- (void)collectionBegin;
- (void)showBarrageList;
- (void)showSettingMenu;
- (void)showLanguageMenu;
- (void)showShareMenu;
- (void)showDownloadVarietySettingMenu;
- (void)showDownloadNormalSettingMenu;
- (void)showDownloadQualitySettingMenu;
- (void)showDownloadMenu;
- (void)showQualityMenu;
- (void)removeAllMenuView;
- (void)collectedChanged:(id)arg1;
- (void)viewSetting;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tapClick;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

