//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICBCViewController.h"

#import "CheckBgViewEvent-Protocol.h"
#import "CustomIOS7AlertViewDelegate-Protocol.h"

@class CustomIOS7AlertView, ICBCCheckBox, ICBCdownMenu, MJRefreshBackStateFooter, NSDictionary, NSMutableDictionary, NSString, NSTimer;

@interface ICBCNativeCBaseViewController : ICBCViewController <CustomIOS7AlertViewDelegate, CheckBgViewEvent>
{
    _Bool _isRefresh;
    int _requestParamType;
    NSDictionary *_configerData;
    NSString *_actionFun;
    NSDictionary *_paramPushDic;
    NSString *_paramPushStr;
    MJRefreshBackStateFooter *_footer;
    NSString *_isFromTokenLogin;
    NSMutableDictionary *_leftBtnDic;
    NSMutableDictionary *_rightBtnDic;
    NSMutableDictionary *_nativeMenuDic;
    CustomIOS7AlertView *_alertView;
    ICBCCheckBox *_checkBox;
    ICBCdownMenu *_downMenu;
    NSDictionary *_dicNavigation;
    NSString *_hesitationConcern;
    NSString *_inteligentInfo;
    NSString *_tirggerTimes;
    NSTimer *_hesitTimer;
    NSString *_PageNo;
    NSString *_keyhesitationStr;
    NSString *_paramStr;
    NSMutableDictionary *_paramDic;
}

@property(nonatomic) int requestParamType; // @synthesize requestParamType=_requestParamType;
@property(copy, nonatomic) NSMutableDictionary *paramDic; // @synthesize paramDic=_paramDic;
@property(copy, nonatomic) NSString *paramStr; // @synthesize paramStr=_paramStr;
@property(copy, nonatomic) NSString *keyhesitationStr; // @synthesize keyhesitationStr=_keyhesitationStr;
@property(copy, nonatomic) NSString *PageNo; // @synthesize PageNo=_PageNo;
@property(retain, nonatomic) NSTimer *hesitTimer; // @synthesize hesitTimer=_hesitTimer;
@property(copy, nonatomic) NSString *tirggerTimes; // @synthesize tirggerTimes=_tirggerTimes;
@property(copy, nonatomic) NSString *inteligentInfo; // @synthesize inteligentInfo=_inteligentInfo;
@property(copy, nonatomic) NSString *hesitationConcern; // @synthesize hesitationConcern=_hesitationConcern;
@property(retain, nonatomic) NSDictionary *dicNavigation; // @synthesize dicNavigation=_dicNavigation;
@property(retain, nonatomic) ICBCdownMenu *downMenu; // @synthesize downMenu=_downMenu;
@property(retain, nonatomic) ICBCCheckBox *checkBox; // @synthesize checkBox=_checkBox;
@property(nonatomic) __weak CustomIOS7AlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) NSMutableDictionary *nativeMenuDic; // @synthesize nativeMenuDic=_nativeMenuDic;
@property(retain, nonatomic) NSMutableDictionary *rightBtnDic; // @synthesize rightBtnDic=_rightBtnDic;
@property(retain, nonatomic) NSMutableDictionary *leftBtnDic; // @synthesize leftBtnDic=_leftBtnDic;
@property(nonatomic) NSString *isFromTokenLogin; // @synthesize isFromTokenLogin=_isFromTokenLogin;
@property(retain, nonatomic) MJRefreshBackStateFooter *footer; // @synthesize footer=_footer;
@property(copy, nonatomic) NSString *paramPushStr; // @synthesize paramPushStr=_paramPushStr;
@property(retain, nonatomic) NSDictionary *paramPushDic; // @synthesize paramPushDic=_paramPushDic;
@property(copy, nonatomic) NSString *actionFun; // @synthesize actionFun=_actionFun;
@property(retain, nonatomic) NSDictionary *configerData; // @synthesize configerData=_configerData;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadMoreData;
- (void)loadNewData;
- (void)exitSystem;
- (void)doUpgrade;
- (void)customIOS7dialogButtonTouchUpInside:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkBoxClicked:(id)arg1;
- (void)showUpgradeAlert:(id)arg1;
- (void)getUpgradeData:(id)arg1;
- (void)showMenu:(id)arg1;
- (void)rightBarButtonItemClcik:(id)arg1;
- (id)dictionaryToJson:(id)arg1;
- (void)backActionClick:(id)arg1;
- (void)updateNavigationBar:(id)arg1;
- (void)creatNavigationBar;
- (void)initView;
- (id)getHttpConfiger;
- (void)nativeRequestFail:(id)arg1;
- (void)nativeRequestSuccess:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)callBackCheckBgViewEvent;
- (void)callHesitView;
- (void)addHesitateCareParamDic:(id)arg1;
- (void)pageViewConstrollerPV:(id)arg1;
- (void)requestSuccessfully:(id)arg1;
- (void)sendNativeRequest;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
@property(nonatomic) _Bool isRefresh;
- (id)initWithMenudic:(id)arg1 ParamStr:(id)arg2 ParamDic:(id)arg3 RequestParamType:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

