//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QNBBasePlayerViewController.h"

#import "QNBPlayerVodRecommendViewDelegate-Protocol.h"

@class NSString, QNBCommonViewInfo, QNBPlayerVodRecommendView, QNBVodRecommendModel;

@interface QNBPlayerVodRecommendViewController : QNBBasePlayerViewController <QNBPlayerVodRecommendViewDelegate>
{
    QNBPlayerVodRecommendView *_recommendView;
    QNBCommonViewInfo *_commonViewInfo;
    QNBVodRecommendModel *_recommendModel;
}

@property(retain, nonatomic) QNBVodRecommendModel *recommendModel; // @synthesize recommendModel=_recommendModel;
@property(retain, nonatomic) QNBCommonViewInfo *commonViewInfo; // @synthesize commonViewInfo=_commonViewInfo;
@property(retain, nonatomic) QNBPlayerVodRecommendView *recommendView; // @synthesize recommendView=_recommendView;
- (void).cxx_destruct;
- (void)reportClickRecommend;
- (void)reportJumpAction:(_Bool)arg1;
- (void)reportRecommendShow;
- (id)getRecommandDataCorrespoindVideoType;
- (void)hideSelf;
- (void)disenablePlayerControlButton;
- (void)enablePlayerControlButton;
- (void)didClickCloseButton:(id)arg1;
- (void)didClickVideoPoster:(id)arg1 isHandleClick:(_Bool)arg2 isFirstPoster:(_Bool)arg3;
- (_Bool)didReceiveAppWillEnterForeground:(id)arg1;
- (_Bool)didReceiveAppDidEnterBackground:(id)arg1;
- (_Bool)didReceiveUIPlayerProgressDragEnd:(id)arg1;
- (_Bool)didReceivePageLoadQNBVideoInfo:(id)arg1;
- (_Bool)didReceiveUITipsBarStateChange:(id)arg1;
- (_Bool)didReceiveUIScreenModeChange:(id)arg1;
- (_Bool)didReceiveRequestShowRecommendView:(id)arg1;
- (id)getCloseTipsInfo;
- (void)destroyCustomView;
- (void)createCustomView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

