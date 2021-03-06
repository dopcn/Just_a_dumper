//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BBAPlayerModel.h"

@class BBAPlayerAdModel, BBAPlayerClarityModel, BBAPlayerLongVideoEntranceModel, NSDictionary, NSMutableArray, NSString;

@interface BBAPlayerVideoModel : BBAPlayerModel
{
    _Bool _showTitle;
    _Bool _isShowDownloadButton;
    _Bool _isStartPlayLightShowTitle;
    _Bool _isPlayerCanEnterEndPage;
    _Bool _isSilencePlay;
    _Bool _autoSize;
    _Bool _hasSendRequestToPrefetchPostVideoADInfo;
    _Bool _preview_6s_switch;
    _Bool _isMiniPagePlay;
    NSString *_vid;
    NSString *_poster;
    NSString *_posterImage;
    NSString *_pageUrl;
    NSString *_videoUrl;
    NSString *_title;
    long long _duration;
    double _seekSeconds;
    long long _playNextDuration;
    NSString *_videoWifiTitle;
    NSString *_src;
    BBAPlayerClarityModel *_curClarityModel;
    NSMutableArray *_clarityUrl;
    NSMutableArray *_recommend_list;
    NSDictionary *_callbackInfo;
    NSDictionary *_ubcMonitorInfo;
    NSDictionary *_downloadInfo;
    NSDictionary *_statisticInfo;
    NSDictionary *_share;
    NSString *_videoPageCmd;
    NSDictionary *_ext_log;
    NSString *_page;
    long long _auto_play;
    BBAPlayerAdModel *_ad;
    CDUnknownBlockType _postVideoADInfoFuture;
    BBAPlayerLongVideoEntranceModel *_longVideoEntranceModel;
    NSString *_preview_6s_url;
    BBAPlayerClarityModel *_previewClarityModel;
    long long _playTimes;
}

@property(nonatomic) long long playTimes; // @synthesize playTimes=_playTimes;
@property(nonatomic) _Bool isMiniPagePlay; // @synthesize isMiniPagePlay=_isMiniPagePlay;
@property(nonatomic) _Bool preview_6s_switch; // @synthesize preview_6s_switch=_preview_6s_switch;
@property(retain, nonatomic) BBAPlayerClarityModel *previewClarityModel; // @synthesize previewClarityModel=_previewClarityModel;
@property(retain, nonatomic) NSString *preview_6s_url; // @synthesize preview_6s_url=_preview_6s_url;
@property(retain, nonatomic) BBAPlayerLongVideoEntranceModel *longVideoEntranceModel; // @synthesize longVideoEntranceModel=_longVideoEntranceModel;
@property(nonatomic) _Bool hasSendRequestToPrefetchPostVideoADInfo; // @synthesize hasSendRequestToPrefetchPostVideoADInfo=_hasSendRequestToPrefetchPostVideoADInfo;
@property(copy, nonatomic) CDUnknownBlockType postVideoADInfoFuture; // @synthesize postVideoADInfoFuture=_postVideoADInfoFuture;
@property(nonatomic) _Bool autoSize; // @synthesize autoSize=_autoSize;
@property(retain, nonatomic) BBAPlayerAdModel *ad; // @synthesize ad=_ad;
@property(nonatomic) _Bool isSilencePlay; // @synthesize isSilencePlay=_isSilencePlay;
@property(nonatomic) _Bool isPlayerCanEnterEndPage; // @synthesize isPlayerCanEnterEndPage=_isPlayerCanEnterEndPage;
@property(nonatomic) long long auto_play; // @synthesize auto_play=_auto_play;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) NSDictionary *ext_log; // @synthesize ext_log=_ext_log;
@property(nonatomic) _Bool isStartPlayLightShowTitle; // @synthesize isStartPlayLightShowTitle=_isStartPlayLightShowTitle;
@property(retain, nonatomic) NSString *videoPageCmd; // @synthesize videoPageCmd=_videoPageCmd;
@property(retain, nonatomic) NSDictionary *share; // @synthesize share=_share;
@property(retain, nonatomic) NSDictionary *statisticInfo; // @synthesize statisticInfo=_statisticInfo;
@property(retain, nonatomic) NSDictionary *downloadInfo; // @synthesize downloadInfo=_downloadInfo;
@property(retain, nonatomic) NSDictionary *ubcMonitorInfo; // @synthesize ubcMonitorInfo=_ubcMonitorInfo;
@property(retain, nonatomic) NSDictionary *callbackInfo; // @synthesize callbackInfo=_callbackInfo;
@property(retain, nonatomic) NSMutableArray *recommend_list; // @synthesize recommend_list=_recommend_list;
@property(retain, nonatomic) NSMutableArray *clarityUrl; // @synthesize clarityUrl=_clarityUrl;
@property(retain, nonatomic) BBAPlayerClarityModel *curClarityModel; // @synthesize curClarityModel=_curClarityModel;
@property(retain, nonatomic) NSString *src; // @synthesize src=_src;
@property(retain, nonatomic) NSString *videoWifiTitle; // @synthesize videoWifiTitle=_videoWifiTitle;
@property(nonatomic) long long playNextDuration; // @synthesize playNextDuration=_playNextDuration;
@property(nonatomic) double seekSeconds; // @synthesize seekSeconds=_seekSeconds;
@property(nonatomic) _Bool isShowDownloadButton; // @synthesize isShowDownloadButton=_isShowDownloadButton;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool showTitle; // @synthesize showTitle=_showTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(retain, nonatomic) NSString *posterImage; // @synthesize posterImage=_posterImage;
@property(retain, nonatomic) NSString *poster; // @synthesize poster=_poster;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;
- (_Bool)previewSwitch;
- (double)getVideoSize;
- (void)updateVideoInfo:(id)arg1;
- (id)unWrapRecommendList:(id)arg1;
- (id)unWrapClaritys:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

