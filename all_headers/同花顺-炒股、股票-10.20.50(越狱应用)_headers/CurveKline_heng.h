//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CurveKline.h"

#import "FullScreenTipViewDelegate-Protocol.h"
#import "StockIndicators-Protocol.h"
#import "ViewTraceInfo-Protocol.h"

@class FullScreenTipView, NSString, UIButton;

@interface CurveKline_heng : CurveKline <ViewTraceInfo, StockIndicators, FullScreenTipViewDelegate>
{
    struct CGRect _rcTopBar;
    struct CGRect _rcScrollBar;
    int _startTime;
    int _moveAction;
    FullScreenTipView *_tipView;
    UIButton *_btnBack;
    UIButton *_klineBtn;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)kLinePeriod;
- (id)kLineChuFuQuan;
- (id)kLineSecondIndicator;
- (id)viewInfoForViewTrace;
- (void)clickedTipView:(id)arg1;
- (void)scrollGuZhiLeftRight:(id)arg1;
- (void)clickGuZhiLeftRight:(id)arg1;
- (void)HideTips:(_Bool)arg1;
- (void)ShowTips;
- (void)FenshiPressed:(id)arg1;
- (void)ReturnPressed:(id)arg1;
- (void)sendBehaviorLogIfNeed;
- (_Bool)zoomCurve:(_Bool)arg1 centerX:(int)arg2 times:(float)arg3;
- (_Bool)zoomCurve:(_Bool)arg1 centerX:(int)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawDynamic:(struct CGContext *)arg1;
- (void)drawBaseData:(struct CGContext *)arg1;
- (void)drawTopBar:(struct CGContext *)arg1;
- (void)drawScrollBar:(struct CGContext *)arg1;
- (int)GetLastTime;
- (void)SetStartTime;
- (void)unRegisterKlineAndTechRealData:(_Bool)arg1;
- (void)requestData:(_Bool)arg1;
- (void)willDisappear;
- (_Bool)isHasZhiBiao1;
- (id)getJunXianZhouQiStr:(int)arg1;
- (id)klineShowLog;
- (id)marketId;
- (void)didAppear;
- (void)willAppear;
- (void)CheckParamModify;
- (void)orientationDidChange:(id)arg1;
- (void)initPosition;
- (void)resetButtonsFrame;
- (void)onFinishInflate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

