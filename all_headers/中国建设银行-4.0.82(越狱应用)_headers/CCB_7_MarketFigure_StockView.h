//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "KChartEditDelegate-Protocol.h"
#import "KLineChartDelegate-Protocol.h"
#import "MineChartDelegate-Protocol.h"
#import "XZIndexViewToolBarDelegate-Protocol.h"
#import "XZMoreCycleViewDelegate-Protocol.h"
#import "XZMoreIndexViewDelegate-Protocol.h"
#import "XZRequestDataDelegate-Protocol.h"

@class CCB_7_MarketFigure_DetailView, CCB_7_MarketFigure_KChart, CCB_7_MarketFigure_KChartEditView, CCB_7_MarketFigure_ListCtrl, CCB_7_MarketFigure_ListCtrl_Ten, CCB_7_MarketFigure_MinChart, CCB_7_MarketFigure_PopPriceInfo, CCB_7_MarketFigure_StockData, NSMutableArray, NSString, NSTimer, UIButton, UILabel;
@protocol XZStockViewDelegate;

@interface CCB_7_MarketFigure_StockView : UIView <XZRequestDataDelegate, XZMoreIndexViewDelegate, XZIndexViewToolBarDelegate, XZMoreCycleViewDelegate, KLineChartDelegate, MineChartDelegate, KChartEditDelegate>
{
    struct CGSize _screenSize;
    NSTimer *pTimer;
    UILabel *titleLab;
    UILabel *timeLab;
    UIView *separatorLine;
    double btnW;
    double kchartHeight;
    double minChartHeight;
    _Bool _flagTen;
    _Bool _isGaoping;
    NSString *_subscribeIdString;
    NSString *_subscribeNameString;
    NSString *_titleName;
    NSMutableArray *_originalDataArray;
    NSMutableArray *_thisDataArray;
    NSMutableArray *_minuteDataArry;
    CCB_7_MarketFigure_DetailView *_detailView;
    CCB_7_MarketFigure_ListCtrl_Ten *_listCtrlTen;
    CCB_7_MarketFigure_ListCtrl *_listCtrl;
    CCB_7_MarketFigure_StockData *_lastStockData;
    CCB_7_MarketFigure_KChart *_kChart;
    CCB_7_MarketFigure_MinChart *_minChart;
    CCB_7_MarketFigure_PopPriceInfo *_proPrice;
    CCB_7_MarketFigure_PopPriceInfo *_kEditPopPrice;
    CCB_7_MarketFigure_KChartEditView *_kchartEditView;
    UIView *_titleView;
    long long _indexType;
    UIView *_bgLine;
    UIButton *_fenshiBtn;
    UIButton *_dayBtn;
    UIButton *_weekBtn;
    UIButton *_monthBtn;
    UIButton *_moreBtn;
    UIButton *_lastPressBtn;
    UIButton *_loginBtn;
    UIButton *_detailBtn;
    long long _panCount;
    double _panPointX;
    id <XZStockViewDelegate> _delegate;
    UIButton *_guanzhuBtn;
    UILabel *_guanzhuLabel;
    long long _viewStyleTag;
    long long _viewMode;
    NSMutableArray *_btnArray;
    CDUnknownBlockType _btnclick;
}

@property(copy, nonatomic) CDUnknownBlockType btnclick; // @synthesize btnclick=_btnclick;
@property(retain, nonatomic) NSMutableArray *btnArray; // @synthesize btnArray=_btnArray;
@property(nonatomic) _Bool isGaoping; // @synthesize isGaoping=_isGaoping;
@property(nonatomic) long long viewMode; // @synthesize viewMode=_viewMode;
@property(nonatomic) long long viewStyleTag; // @synthesize viewStyleTag=_viewStyleTag;
@property(retain, nonatomic) UILabel *guanzhuLabel; // @synthesize guanzhuLabel=_guanzhuLabel;
@property(retain, nonatomic) UIButton *guanzhuBtn; // @synthesize guanzhuBtn=_guanzhuBtn;
@property(nonatomic) id <XZStockViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double panPointX; // @synthesize panPointX=_panPointX;
@property(nonatomic) long long panCount; // @synthesize panCount=_panCount;
@property(retain, nonatomic) UIButton *detailBtn; // @synthesize detailBtn=_detailBtn;
@property(retain, nonatomic) UIButton *loginBtn; // @synthesize loginBtn=_loginBtn;
@property(retain, nonatomic) UIButton *lastPressBtn; // @synthesize lastPressBtn=_lastPressBtn;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) UIButton *monthBtn; // @synthesize monthBtn=_monthBtn;
@property(retain, nonatomic) UIButton *weekBtn; // @synthesize weekBtn=_weekBtn;
@property(retain, nonatomic) UIButton *dayBtn; // @synthesize dayBtn=_dayBtn;
@property(retain, nonatomic) UIButton *fenshiBtn; // @synthesize fenshiBtn=_fenshiBtn;
@property(nonatomic) __weak UIView *bgLine; // @synthesize bgLine=_bgLine;
@property(nonatomic) long long indexType; // @synthesize indexType=_indexType;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) CCB_7_MarketFigure_KChartEditView *kchartEditView; // @synthesize kchartEditView=_kchartEditView;
@property(retain, nonatomic) CCB_7_MarketFigure_PopPriceInfo *kEditPopPrice; // @synthesize kEditPopPrice=_kEditPopPrice;
@property(retain, nonatomic) CCB_7_MarketFigure_PopPriceInfo *proPrice; // @synthesize proPrice=_proPrice;
@property(retain, nonatomic) CCB_7_MarketFigure_MinChart *minChart; // @synthesize minChart=_minChart;
@property(retain, nonatomic) CCB_7_MarketFigure_KChart *kChart; // @synthesize kChart=_kChart;
@property(retain, nonatomic) CCB_7_MarketFigure_StockData *lastStockData; // @synthesize lastStockData=_lastStockData;
@property(nonatomic) _Bool flagTen; // @synthesize flagTen=_flagTen;
@property(retain, nonatomic) CCB_7_MarketFigure_ListCtrl *listCtrl; // @synthesize listCtrl=_listCtrl;
@property(retain, nonatomic) CCB_7_MarketFigure_ListCtrl_Ten *listCtrlTen; // @synthesize listCtrlTen=_listCtrlTen;
@property(retain, nonatomic) CCB_7_MarketFigure_DetailView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) NSMutableArray *minuteDataArry; // @synthesize minuteDataArry=_minuteDataArry;
@property(retain, nonatomic) NSMutableArray *thisDataArray; // @synthesize thisDataArray=_thisDataArray;
@property(retain, nonatomic) NSMutableArray *originalDataArray; // @synthesize originalDataArray=_originalDataArray;
@property(retain, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
@property(retain, nonatomic) NSString *subscribeNameString; // @synthesize subscribeNameString=_subscribeNameString;
@property(retain, nonatomic) NSString *subscribeIdString; // @synthesize subscribeIdString=_subscribeIdString;
- (void).cxx_destruct;
- (void)didClick:(id)arg1;
- (void)delAllLineOfKChart;
- (void)addGoldCloseLineToKChart:(struct GOLD_CLOSE_LINE)arg1;
- (void)addTrendLineToKChart:(struct TREND_LINE)arg1;
- (void)addHorizonLineToKChart:(struct HORIZON_LINE)arg1;
- (void)switchKChartViewMode;
- (void)switchKChartEditMode;
- (int)getRandom:(int)arg1 to:(int)arg2;
- (void)dealloc;
- (void)xzSocketDelegate:(id)arg1 updateDetailSubscribeArray:(id)arg2;
- (void)computeMinuteKlineCycle:(unsigned char)arg1 dataArray:(id)arg2;
- (void)xzSocketDelegateDrawMinuteLine:(id)arg1;
- (void)dealLastKdata;
- (void)updateMinuteData;
- (void)updateKLineData;
- (void)xzSocketDelegateDrawKline:(unsigned char)arg1 dataArray:(id)arg2;
- (void)moveMinPul:(id)arg1 withColor:(id)arg2 withX:(int)arg3;
- (void)hideKEditPul;
- (void)moveKEditPul:(id)arg1 withColor:(id)arg2;
- (void)movePul:(id)arg1 withColor:(id)arg2 withX:(int)arg3;
- (void)XZMoreIndexView:(id)arg1 btnClick:(id)arg2;
- (void)showIndex;
- (void)IndexViewToolBar:(id)arg1 btnClick:(id)arg2;
- (void)cycleBtnClick:(id)arg1;
- (void)XZMoreCycleView:(id)arg1 btnClick:(id)arg2;
- (void)cycleMoreBtnClick:(id)arg1;
- (void)actionShowKlineData:(id)arg1;
- (void)actionShowOneMinuteData;
- (void)actionShowMinuteHistoryByTag:(long long)arg1;
- (void)actionDisConnect:(id)arg1;
- (void)actionConnect:(id)arg1;
- (void)bigBigK:(id)arg1;
- (void)bigK:(id)arg1;
- (void)smallsmallK:(id)arg1;
- (void)smallK:(id)arg1;
- (void)changeFrameUIDeviceOrientationLandscapeLeft;
- (void)changeFrameUIDeviceOrientationPortrait;
- (void)orientChange:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (void)detailBtnClick;
- (void)cycleMoreBtnClick1:(id)arg1;
- (void)viewStyle;
- (void)returnPortainScreen:(id)arg1;
- (void)requestDetail;
- (void)startRequest;
- (void)hideDblClickTip:(id)arg1;
- (void)initBeginTime:(id)arg1 withEndTime:(id)arg2;
- (void)initViewFrame;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

