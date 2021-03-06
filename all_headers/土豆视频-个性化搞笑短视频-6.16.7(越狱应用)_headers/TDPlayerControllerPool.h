//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TDPlayerADController, TDPlayerCommentCardController, TDPlayerDetailAnalysisDataService, TDPlayerDetailRowViewFetcher, TDPlayerDetailVideoModel, TDPlayerPlayListController, TDPlayerRecommendController, TDPlayerSelectedListController, TDPlayerStarController, TDPlayerSubscribeController, TDPlayerVideoInfoBoardController, UITableView, UIViewController;
@protocol TDPlayControllerProtocol, TDPlayerDetailAnalysisInfoConfigureProtocol, TDPlayerDetailDownloadPickerProtocol, TDPlayerDetailInjectionProtocol, TDPlayerDetailLoginProtocol, TDPlayerDetailPopViewControllerProtocol><TDPlayerSectionRefetchDataProtocol><TDPlayerDetailShowPickerProtocol><TDPlayerDetailPVProtocol, TDPlayerDetailUCReportProtocol, TDPlayerPositiveReportProtocol, TDPlayerVideoCollectProtocol, TDPlayerVideoDownloadProtocol, TDPlayerVideoShareProtocol;

@interface TDPlayerControllerPool : NSObject
{
    UIViewController<TDPlayerDetailPopViewControllerProtocol><TDPlayerSectionRefetchDataProtocol><TDPlayerDetailShowPickerProtocol><TDPlayerDetailPVProtocol> *_containerController;
    TDPlayerVideoInfoBoardController *_videoInfoBoardController;
    TDPlayerSubscribeController *_subscribeController;
    TDPlayerPlayListController *_playListController;
    TDPlayerSelectedListController *_selectedListController;
    TDPlayerStarController *_starController;
    TDPlayerRecommendController *_recommendController;
    TDPlayerADController *_ADController;
    TDPlayerCommentCardController *_commentCardController;
    TDPlayerDetailAnalysisDataService *_analysisDataService;
    TDPlayerDetailRowViewFetcher *_rowViewFetcher;
    id <TDPlayerVideoShareProtocol> _share;
    id <TDPlayerVideoCollectProtocol> _collector;
    id <TDPlayerVideoDownloadProtocol> _downloader;
    id <TDPlayerPositiveReportProtocol> _positiveReport;
    id <TDPlayControllerProtocol> _playController;
    id <TDPlayerDetailLoginProtocol> _playerDetailLogin;
    id <TDPlayerDetailDownloadPickerProtocol> _downloadPicker;
    id <TDPlayerDetailAnalysisInfoConfigureProtocol> _analysisInfoConfigure;
    id <TDPlayerDetailUCReportProtocol> _UCReportor;
    id <TDPlayerDetailInjectionProtocol> _injection;
    CDUnknownBlockType _fetchItemId;
    CDUnknownBlockType _fetchRecoId;
    CDUnknownBlockType _fetchVideoEntityBlock;
    UITableView *_contentTableView;
}

@property(nonatomic) __weak UITableView *contentTableView; // @synthesize contentTableView=_contentTableView;
@property(copy, nonatomic) CDUnknownBlockType fetchVideoEntityBlock; // @synthesize fetchVideoEntityBlock=_fetchVideoEntityBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchRecoId; // @synthesize fetchRecoId=_fetchRecoId;
@property(copy, nonatomic) CDUnknownBlockType fetchItemId; // @synthesize fetchItemId=_fetchItemId;
@property(nonatomic) __weak id <TDPlayerDetailInjectionProtocol> injection; // @synthesize injection=_injection;
@property(nonatomic) __weak id <TDPlayerDetailUCReportProtocol> UCReportor; // @synthesize UCReportor=_UCReportor;
@property(nonatomic) __weak id <TDPlayerDetailAnalysisInfoConfigureProtocol> analysisInfoConfigure; // @synthesize analysisInfoConfigure=_analysisInfoConfigure;
@property(nonatomic) __weak id <TDPlayerDetailDownloadPickerProtocol> downloadPicker; // @synthesize downloadPicker=_downloadPicker;
@property(nonatomic) __weak id <TDPlayerDetailLoginProtocol> playerDetailLogin; // @synthesize playerDetailLogin=_playerDetailLogin;
@property(nonatomic) __weak id <TDPlayControllerProtocol> playController; // @synthesize playController=_playController;
@property(nonatomic) __weak id <TDPlayerPositiveReportProtocol> positiveReport; // @synthesize positiveReport=_positiveReport;
@property(nonatomic) __weak id <TDPlayerVideoDownloadProtocol> downloader; // @synthesize downloader=_downloader;
@property(nonatomic) __weak id <TDPlayerVideoCollectProtocol> collector; // @synthesize collector=_collector;
@property(nonatomic) __weak id <TDPlayerVideoShareProtocol> share; // @synthesize share=_share;
@property(nonatomic) __weak TDPlayerDetailRowViewFetcher *rowViewFetcher; // @synthesize rowViewFetcher=_rowViewFetcher;
@property(nonatomic) __weak TDPlayerDetailAnalysisDataService *analysisDataService; // @synthesize analysisDataService=_analysisDataService;
@property(retain, nonatomic) TDPlayerCommentCardController *commentCardController; // @synthesize commentCardController=_commentCardController;
@property(retain, nonatomic) TDPlayerADController *ADController; // @synthesize ADController=_ADController;
@property(retain, nonatomic) TDPlayerRecommendController *recommendController; // @synthesize recommendController=_recommendController;
@property(retain, nonatomic) TDPlayerStarController *starController; // @synthesize starController=_starController;
@property(retain, nonatomic) TDPlayerSelectedListController *selectedListController; // @synthesize selectedListController=_selectedListController;
@property(retain, nonatomic) TDPlayerPlayListController *playListController; // @synthesize playListController=_playListController;
@property(retain, nonatomic) TDPlayerSubscribeController *subscribeController; // @synthesize subscribeController=_subscribeController;
@property(retain, nonatomic) TDPlayerVideoInfoBoardController *videoInfoBoardController; // @synthesize videoInfoBoardController=_videoInfoBoardController;
@property(nonatomic) __weak UIViewController<TDPlayerDetailPopViewControllerProtocol><TDPlayerSectionRefetchDataProtocol><TDPlayerDetailShowPickerProtocol><TDPlayerDetailPVProtocol> *containerController; // @synthesize containerController=_containerController;
- (void).cxx_destruct;
- (void)dealloc;
- (id)configBlockDictionary;
- (void)configCommentCardController;
- (void)configRecommendController;
- (void)configSelectedListController;
- (void)configPlayListController;
- (void)configVideoInfoBoardController;
- (id)m_recoId;
- (id)m_itemId;
@property(retain, nonatomic) TDPlayerDetailVideoModel *videoEntity; // @dynamic videoEntity;

@end

