//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJUIViewController.h"

#import "NIRadioGroupDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ClientSettingUtils, MBProgressHUD, NICellFactory, NIMutableTableViewModel, NIRadioGroup, NISubtitleCellObject, NSMutableArray, NSString, UIButton, UITableView, UIView;
@protocol NICell;

@interface UnitSettingViewController : MJUIViewController <NIRadioGroupDelegate, UITableViewDelegate>
{
    _Bool _isFllowLanguage;
    _Bool _initSwitchLanguage;
    _Bool _tempIsChanged;
    _Bool _windIsChanged;
    _Bool _pressureIsChanged;
    _Bool _useBackButton;
    UITableView *_table;
    NIMutableTableViewModel *_model;
    id <NICell> _tappedCell;
    NIRadioGroup *_tempGroup;
    NIRadioGroup *_windGroup;
    NIRadioGroup *_pressureGroup;
    NICellFactory *_cellFactory;
    NISubtitleCellObject *_tempObj;
    NISubtitleCellObject *_windObj;
    NISubtitleCellObject *_presstureObj;
    MBProgressHUD *_progressHUD;
    ClientSettingUtils *_settingUtils;
    UIView *_footerView;
    NSMutableArray *_tableAllArray;
    UIButton *_resetBtn;
}

@property(retain, nonatomic) UIButton *resetBtn; // @synthesize resetBtn=_resetBtn;
@property(nonatomic) _Bool useBackButton; // @synthesize useBackButton=_useBackButton;
@property(retain, nonatomic) NSMutableArray *tableAllArray; // @synthesize tableAllArray=_tableAllArray;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) ClientSettingUtils *settingUtils; // @synthesize settingUtils=_settingUtils;
@property(nonatomic) _Bool pressureIsChanged; // @synthesize pressureIsChanged=_pressureIsChanged;
@property(nonatomic) _Bool windIsChanged; // @synthesize windIsChanged=_windIsChanged;
@property(nonatomic) _Bool tempIsChanged; // @synthesize tempIsChanged=_tempIsChanged;
@property(retain, nonatomic) MBProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(nonatomic) _Bool initSwitchLanguage; // @synthesize initSwitchLanguage=_initSwitchLanguage;
@property(nonatomic) _Bool isFllowLanguage; // @synthesize isFllowLanguage=_isFllowLanguage;
@property(retain, nonatomic) NISubtitleCellObject *presstureObj; // @synthesize presstureObj=_presstureObj;
@property(retain, nonatomic) NISubtitleCellObject *windObj; // @synthesize windObj=_windObj;
@property(retain, nonatomic) NISubtitleCellObject *tempObj; // @synthesize tempObj=_tempObj;
@property(retain, nonatomic) NICellFactory *cellFactory; // @synthesize cellFactory=_cellFactory;
@property(retain, nonatomic) NIRadioGroup *pressureGroup; // @synthesize pressureGroup=_pressureGroup;
@property(retain, nonatomic) NIRadioGroup *windGroup; // @synthesize windGroup=_windGroup;
@property(retain, nonatomic) NIRadioGroup *tempGroup; // @synthesize tempGroup=_tempGroup;
@property(readonly, nonatomic) id <NICell> tappedCell; // @synthesize tappedCell=_tappedCell;
@property(retain, nonatomic) NIMutableTableViewModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UITableView *table; // @synthesize table=_table;
- (void).cxx_destruct;
- (id)p_getTableViewFootView;
- (void)p_checkResetState;
- (id)getPressureUnitText;
- (id)getWindUnitText;
- (id)getTempUnitText;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)displayExchangeProcess;
- (void)setUpProcessHud;
- (void)notificationUnitValueChanged;
- (_Bool)fllowLanguageUnitSetIsChanged;
- (void)clientUnitValueIsChanged:(int)arg1;
- (void)saveClientUniteValue;
- (void)radioGroup:(id)arg1 didSelectIdentifier:(long long)arg2;
- (long long)getPressureSelectedValue;
- (long long)getWindUnitSelectedValue;
- (long long)getTempUnitSelectedValue;
- (void)setUnitValueForStored;
- (long long)p_systemUnitSetIndex:(unsigned long long)arg1;
- (_Bool)currentLanguageIsChineseTraditonal;
- (_Bool)currentLanguageIsChineseSimplied;
- (_Bool)currentLanguageIsHongKong;
- (_Bool)p_isChangeUnitSet;
- (void)p_setDefaultUnitValue;
- (void)initUnitGroupCell;
- (void)initTable:(id)arg1;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTappedCell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

