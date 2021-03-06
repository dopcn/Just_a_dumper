//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "CAAnimationDelegate-Protocol.h"
#import "TBSearchInputDelegate-Protocol.h"
#import "TBSearchSideDoorViewModelDelegate-Protocol.h"
#import "TBSearchSideDoorWeexComponentDelegate-Protocol.h"
#import "TBSearchVoiceViewDelegate-Protocol.h"
#import "TBXSearchTabControlDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "magicDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, TBBarButtonItem, TBPSCaptureScanManager, TBSearchAVCaptureTipView, TBSearchInput, TBSearchSideDoorViewModel, TBSearchSideDoorWeexManager, TBSearchVoiceView, TBXSearchTabControl, UIButton, UIScrollView, UITableView, UIView;
@protocol TBSearchSideDoorViewControllerDelegate;

@interface TBSearchSideDoorViewController : TBViewController <UITextFieldDelegate, TBSearchInputDelegate, TBSearchVoiceViewDelegate, UITableViewDelegate, UITableViewDataSource, magicDelegate, UIAlertViewDelegate, TBSearchSideDoorViewModelDelegate, TBXSearchTabControlDelegate, CAAnimationDelegate, TBSearchSideDoorWeexComponentDelegate>
{
    _Bool _xsearch;
    _Bool _searchTypeClicked;
    _Bool _fromsearch;
    _Bool _searchBarAnimationEnabled;
    _Bool _searchTabEnabled;
    _Bool _searchDoorWeexPageEnable;
    TBSearchSideDoorViewModel *_viewModel;
    NSString *_double11from;
    NSString *_q;
    NSString *_from;
    id <TBSearchSideDoorViewControllerDelegate> _delegate;
    NSString *_searchTabType;
    NSString *_tab;
    NSString *_extraTab;
    TBSearchInput *_searchBar;
    NSMutableDictionary *_globalParams;
    UIButton *_cancelButton;
    UIView *_p_asr_entrance_view;
    TBSearchVoiceView *_voiceView;
    UIView *_bodyView;
    UIView *_photoSearchGuideView;
    TBPSCaptureScanManager *_psCaptureScanManager;
    TBSearchAVCaptureTipView *_captureTipView;
    UITableView *_suggestionTableView;
    UIScrollView *_sideDoor;
    NSMutableArray *_allWidgets;
    UIView *_viewfor11;
    UIView *_statusView;
    UIButton *_closeButton;
    TBBarButtonItem *_sBar;
    TBXSearchTabControl *_tabControl;
    NSString *_shadeDisplayText;
    NSString *_shadeSearchText;
    TBSearchSideDoorWeexManager *_weexManager;
}

@property(retain, nonatomic) TBSearchSideDoorWeexManager *weexManager; // @synthesize weexManager=_weexManager;
@property(nonatomic) _Bool searchDoorWeexPageEnable; // @synthesize searchDoorWeexPageEnable=_searchDoorWeexPageEnable;
@property(nonatomic) _Bool searchTabEnabled; // @synthesize searchTabEnabled=_searchTabEnabled;
@property(nonatomic) _Bool searchBarAnimationEnabled; // @synthesize searchBarAnimationEnabled=_searchBarAnimationEnabled;
@property(retain, nonatomic) NSString *shadeSearchText; // @synthesize shadeSearchText=_shadeSearchText;
@property(retain, nonatomic) NSString *shadeDisplayText; // @synthesize shadeDisplayText=_shadeDisplayText;
@property(retain, nonatomic) TBXSearchTabControl *tabControl; // @synthesize tabControl=_tabControl;
@property(retain, nonatomic) TBBarButtonItem *sBar; // @synthesize sBar=_sBar;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIView *viewfor11; // @synthesize viewfor11=_viewfor11;
@property(retain, nonatomic) NSMutableArray *allWidgets; // @synthesize allWidgets=_allWidgets;
@property(retain, nonatomic) UIScrollView *sideDoor; // @synthesize sideDoor=_sideDoor;
@property(retain, nonatomic) UITableView *suggestionTableView; // @synthesize suggestionTableView=_suggestionTableView;
@property(retain, nonatomic) TBSearchAVCaptureTipView *captureTipView; // @synthesize captureTipView=_captureTipView;
@property(retain, nonatomic) TBPSCaptureScanManager *psCaptureScanManager; // @synthesize psCaptureScanManager=_psCaptureScanManager;
@property(retain, nonatomic) UIView *photoSearchGuideView; // @synthesize photoSearchGuideView=_photoSearchGuideView;
@property(retain, nonatomic) UIView *bodyView; // @synthesize bodyView=_bodyView;
@property(retain, nonatomic) TBSearchVoiceView *voiceView; // @synthesize voiceView=_voiceView;
@property(retain, nonatomic) UIView *p_asr_entrance_view; // @synthesize p_asr_entrance_view=_p_asr_entrance_view;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSMutableDictionary *globalParams; // @synthesize globalParams=_globalParams;
@property(retain, nonatomic) TBSearchInput *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSString *extraTab; // @synthesize extraTab=_extraTab;
@property(retain, nonatomic) NSString *tab; // @synthesize tab=_tab;
@property(retain, nonatomic) NSString *searchTabType; // @synthesize searchTabType=_searchTabType;
@property(nonatomic) __weak id <TBSearchSideDoorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSString *q; // @synthesize q=_q;
@property(retain, nonatomic) NSString *double11from; // @synthesize double11from=_double11from;
@property(nonatomic) _Bool fromsearch; // @synthesize fromsearch=_fromsearch;
@property(nonatomic) _Bool searchTypeClicked; // @synthesize searchTypeClicked=_searchTypeClicked;
@property(nonatomic) _Bool xsearch; // @synthesize xsearch=_xsearch;
@property(retain, nonatomic) TBSearchSideDoorViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)weexComponentDegradeTriggerSearchDoorRefresh;
- (void)registryAppMonitor;
- (void)clickTabItem:(id)arg1;
- (void)startLocating;
- (void)triggerLocating;
- (void)shouldUpdateSearchDoor;
- (void)shouldUpdateSuggest;
- (void)dismissPhotoSearchGuideView;
- (void)dissmissCapture;
- (void)showPhotoSearchGuideView;
- (void)photoSearchGuide;
- (void)clickedCapture:(id)arg1;
- (void)removePhotoSearchtipAndGuideView;
- (void)showTipImageAsset:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)updateQuery:(id)arg1;
- (void)clickMagic:(id)arg1 IndexPath:(id)arg2 params:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)getNowDate;
- (void)searchDoorHideSoftInput;
- (void)popSearchDoor;
- (id)getHongbaoURL:(id)arg1;
- (_Bool)openSearchChannelURL:(id)arg1;
- (id)getUrlWithKeyword:(id)arg1;
- (void)searchWithKeyWord:(id)arg1 AndType:(id)arg2 AndSearchParams:(id)arg3;
- (void)hideKeyboard;
- (id)getSearchParams;
- (id)getShadeSuggestRn;
- (id)getShadeDisplayText;
- (id)getShadeSearchText;
- (id)getSearchBarPlaceHolder;
- (void)keyboardWillHide:(id)arg1;
- (void)searchByVoice:(id)arg1 Asrrn:(id)arg2;
- (id)getVoiceAreaView;
- (struct CGRect)getVoiceAreaFrame;
- (void)initTBASRModuleEntrance;
- (id)createRequestEarlySearchServiceWithUrl:(id)arg1;
- (void)srpOpenURLAndPop:(id)arg1;
- (void)openURLAndPop:(id)arg1;
- (void)showPhotoSearch;
- (void)optionMenuButtonClicked:(id)arg1;
- (void)cancelButtonClick;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldEditingChanged:(id)arg1;
- (void)toggleSubmodule:(id)arg1;
- (void)cleanHistory;
- (void)deleteSearchHistory:(id)arg1;
- (void)longPress:(id)arg1;
- (void)clickOnWidget:(id)arg1;
- (void)loadDefaultSuggestion;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)tbfestival_isFestivalEnable;
- (void)setFestivalNavibar;
- (void)configTab;
- (void)configNavBar;
- (void)dealloc;
- (id)init;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

