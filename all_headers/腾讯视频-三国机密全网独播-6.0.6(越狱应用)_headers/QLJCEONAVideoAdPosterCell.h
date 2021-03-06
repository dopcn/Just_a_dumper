//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QLSprayVideoTableViewCell.h"

#import "P_QLPageItemCellShowUp-Protocol.h"
#import "QLBulletinBoardPlayEndMaskViewDelegate-Protocol.h"
#import "QLFeedAdsBottomViewDelegate-Protocol.h"
#import "QLSliderTouchActionDelegate-Protocol.h"
#import "QLSprayFloatPlayerProtocol-Protocol.h"
#import "QLSprayVideoViewDelegate-Protocol.h"

@class NSString, NSTimer, QLBulletinBoardPlayEndMaskModel, QLBulletinBoardPlayEndMaskView, QLFeedAdsBottomView, QLFeedAdsReporter, QLJCEONABulletinBoardV2, QLJCEONAVideoAdPoster, QLSprayContext, UILabel;

@interface QLJCEONAVideoAdPosterCell : QLSprayVideoTableViewCell <QLFeedAdsBottomViewDelegate, QLSprayFloatPlayerProtocol, P_QLPageItemCellShowUp, QLBulletinBoardPlayEndMaskViewDelegate, QLSprayVideoViewDelegate, QLSliderTouchActionDelegate>
{
    _Bool _isMaxExposureAreOverHalf;
    _Bool _isClickReplayButton;
    double _channelViewTopOffest;
    double _channelViewBottomOffest;
    QLJCEONAVideoAdPoster *_videoAdPoster;
    unsigned long long _videoAdType;
    QLFeedAdsBottomView *_bottomView;
    QLBulletinBoardPlayEndMaskView *_playEndMaskView;
    QLBulletinBoardPlayEndMaskModel *_playEndMaskModel;
    QLFeedAdsReporter *_feedAdsReporter;
    QLJCEONABulletinBoardV2 *_bulletinBoard;
    NSString *_clickId;
    NSString *_dstlink;
    NSTimer *_showTimer;
    double _showTime;
    unsigned long long _lastPlayReportType;
    UILabel *_debugLabel;
    QLSprayContext *_sprayContext;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(nonatomic, getter=mySprayContext) __weak QLSprayContext *sprayContext; // @synthesize sprayContext=_sprayContext;
@property(retain, nonatomic) UILabel *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(nonatomic) unsigned long long lastPlayReportType; // @synthesize lastPlayReportType=_lastPlayReportType;
@property(nonatomic) _Bool isClickReplayButton; // @synthesize isClickReplayButton=_isClickReplayButton;
@property(nonatomic) _Bool isMaxExposureAreOverHalf; // @synthesize isMaxExposureAreOverHalf=_isMaxExposureAreOverHalf;
@property(nonatomic) double showTime; // @synthesize showTime=_showTime;
@property(retain, nonatomic) NSTimer *showTimer; // @synthesize showTimer=_showTimer;
@property(copy, nonatomic) NSString *dstlink; // @synthesize dstlink=_dstlink;
@property(copy, nonatomic) NSString *clickId; // @synthesize clickId=_clickId;
@property(retain, nonatomic) QLJCEONABulletinBoardV2 *bulletinBoard; // @synthesize bulletinBoard=_bulletinBoard;
@property(retain, nonatomic) QLFeedAdsReporter *feedAdsReporter; // @synthesize feedAdsReporter=_feedAdsReporter;
@property(retain, nonatomic) QLBulletinBoardPlayEndMaskModel *playEndMaskModel; // @synthesize playEndMaskModel=_playEndMaskModel;
@property(retain, nonatomic) QLBulletinBoardPlayEndMaskView *playEndMaskView; // @synthesize playEndMaskView=_playEndMaskView;
@property(retain, nonatomic) QLFeedAdsBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) unsigned long long videoAdType; // @synthesize videoAdType=_videoAdType;
@property(retain, nonatomic) QLJCEONAVideoAdPoster *videoAdPoster; // @synthesize videoAdPoster=_videoAdPoster;
@property(nonatomic) double channelViewBottomOffest; // @synthesize channelViewBottomOffest=_channelViewBottomOffest;
@property(nonatomic) double channelViewTopOffest; // @synthesize channelViewTopOffest=_channelViewTopOffest;
- (void).cxx_destruct;
- (_Bool)sprayVideoViewIsFeedAds:(id)arg1;
- (void)sprayVideoViewFailedPlayVideo:(id)arg1;
- (void)sprayVideoViewContinePlayVideo:(id)arg1;
- (void)sprayVideoViewPausePlayVideo:(id)arg1;
- (void)sprayVideoViewDidStart:(id)arg1;
- (void)sprayVideoViewDidFinished:(id)arg1;
- (void)sprayVideoViewDidPlayerViewRemoved:(id)arg1;
- (void)sprayVideoViewDidPlayerViewAdded:(id)arg1;
- (void)didTapPlayAction:(id)arg1;
- (void)feedAdsRightActionButtonClicked:(id)arg1;
- (void)bulletBoardMaskViewDidClickReplayButton:(id)arg1;
- (void)bulletBoardMaskViewDidClickShareButton:(id)arg1;
- (_Bool)shouldAlwaysReportShowUp;
- (void)itemCellDidInvisible;
- (void)reportShowUp;
- (void)autoPlayNextVideo;
- (_Bool)isOwnerOfData:(id)arg1;
- (id)playerSprayVideoView;
- (id)playerViewSuperView;
- (id)getFloatPlayerVideoData;
- (void)uninterestFeedbackClick:(id)arg1;
- (void)blankAreaClick:(id)arg1;
- (void)actionButtonClick:(id)arg1;
- (void)subTitleLableClick:(id)arg1;
- (void)didClickArea:(id)arg1 withActType:(unsigned long long)arg2;
- (id)getPlayEventReportInfoWithPlayType:(unsigned long long)arg1 videoView:(id)arg2;
- (id)getShowUpEventReportInfoWithType:(unsigned long long)arg1;
- (id)getPullAppSuccessEventReportInfoWithActionId:(id)arg1;
- (id)getUninterestedFeedbackEventReportInfo;
- (id)getClickEventReportInfoWithSender:(id)arg1 actType:(unsigned long long)arg2;
- (unsigned long long)getReportHttpRequestReturnTypeWithActType:(unsigned long long)arg1;
- (id)getBottomViewItem;
- (id)getJCEONABulletinBoardWithVideoAdPoster;
- (void)flushShowTime;
- (void)stopTimer;
- (void)startTimer;
- (void)writePasteboard:(id)arg1;
- (void)jumpToThirdAppWithActionId:(id)arg1;
- (void)parasClickRreportRequestData:(id)arg1;
- (_Bool)calculateExposureAreaOverHalf;
- (void)setPlayEndMaskViewHidden:(_Bool)arg1;
- (void)configMaskModel;
- (void)configPlayEndMaskView;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (void)resetValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

