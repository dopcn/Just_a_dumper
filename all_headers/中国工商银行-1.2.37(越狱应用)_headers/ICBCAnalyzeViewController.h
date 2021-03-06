//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICBCViewController.h"

@class AnalyzeCardView, ICBCSelectIconsObject, ICBCdownMenu, InoutLineChartView, InoutPieChartView, SalaryCardView, SalaryDetailView, SalaryLineChartView, SalaryNoDataView, UIButton, UIScrollView;

@interface ICBCAnalyzeViewController : ICBCViewController
{
    _Bool _isSelectCards;
    ICBCSelectIconsObject *selectObject;
    ICBCdownMenu *_downMenu;
    UIButton *_titleButton;
    UIScrollView *_scrollView;
    UIScrollView *_salaryScrollView;
    AnalyzeCardView *_cardView;
    InoutLineChartView *_inoutLineChart;
    InoutPieChartView *_inoutPieChart;
    SalaryCardView *_salaryCardView;
    SalaryLineChartView *_salaryLineView;
    SalaryDetailView *_salaryDetailView;
    SalaryNoDataView *_salaryNodataView;
    long long _selectView;
}

@property(nonatomic) _Bool isSelectCards; // @synthesize isSelectCards=_isSelectCards;
@property(nonatomic) long long selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) SalaryNoDataView *salaryNodataView; // @synthesize salaryNodataView=_salaryNodataView;
@property(retain, nonatomic) SalaryDetailView *salaryDetailView; // @synthesize salaryDetailView=_salaryDetailView;
@property(retain, nonatomic) SalaryLineChartView *salaryLineView; // @synthesize salaryLineView=_salaryLineView;
@property(retain, nonatomic) SalaryCardView *salaryCardView; // @synthesize salaryCardView=_salaryCardView;
@property(retain, nonatomic) InoutPieChartView *inoutPieChart; // @synthesize inoutPieChart=_inoutPieChart;
@property(retain, nonatomic) InoutLineChartView *inoutLineChart; // @synthesize inoutLineChart=_inoutLineChart;
@property(retain, nonatomic) AnalyzeCardView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) UIScrollView *salaryScrollView; // @synthesize salaryScrollView=_salaryScrollView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIButton *titleButton; // @synthesize titleButton=_titleButton;
@property(retain, nonatomic) ICBCdownMenu *downMenu; // @synthesize downMenu=_downMenu;
@property(retain, nonatomic) ICBCSelectIconsObject *selectObject; // @synthesize selectObject;
- (void).cxx_destruct;
- (void)accountCollectForPersonalForPlatform:(id)arg1;
- (void)accountDetailForPersonalForPlatform:(id)arg1;
- (void)testWithHeyuanyuan;
- (void)testWithBaiShao;
- (void)inoutDetailClick:(id)arg1;
- (void)reloadScrollViewHeight;
- (void)loadSalaryData;
- (void)updateCard;
- (void)loadData;
- (void)showMenu:(id)arg1;
- (void)selectAtIndexPath:(id)arg1 title:(id)arg2;
- (void)dropdownMenuDidShow:(id)arg1;
- (void)dropdownMenuDidDismiss:(id)arg1;
- (void)titleClick:(id)arg1;
- (id)navigationTitleView:(id)arg1;
- (void)loadNoDataSalaryView;
- (void)loadNormalSalaryView;
- (void)loadSalaryView;
- (void)loadInandOutView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

