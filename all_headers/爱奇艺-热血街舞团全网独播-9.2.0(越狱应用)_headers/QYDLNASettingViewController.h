//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCommonViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, QMSpecificationView, QYDLNAAddIPAdressView, QYQimoDevice, QYTableView, SPActivityIndicatorView, UIImageView, UIView, addIPCellsCustomButton;

@interface QYDLNASettingViewController : QYCommonViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isSearchingDevices;
    unsigned long long _disCoverType;
    QYTableView *_cardTable;
    NSMutableArray *_devices;
    NSMutableArray *_originDevices;
    SPActivityIndicatorView *_searchIndicator;
    QYQimoDevice *_currentConnectingDevice;
    QMSpecificationView *_specView;
    addIPCellsCustomButton *_addIPBtn;
    UIView *_deviceHeaderView;
    QYDLNAAddIPAdressView *_addIPAdressView;
    UIImageView *_addIPIndicatorImgView;
}

+ (_Bool)isInFront;
+ (_Bool)isDNLASettingControllerForViewController:(id)arg1;
@property(retain, nonatomic) UIImageView *addIPIndicatorImgView; // @synthesize addIPIndicatorImgView=_addIPIndicatorImgView;
@property(retain, nonatomic) QYDLNAAddIPAdressView *addIPAdressView; // @synthesize addIPAdressView=_addIPAdressView;
@property(retain, nonatomic) UIView *deviceHeaderView; // @synthesize deviceHeaderView=_deviceHeaderView;
@property(retain, nonatomic) addIPCellsCustomButton *addIPBtn; // @synthesize addIPBtn=_addIPBtn;
@property(retain, nonatomic) QMSpecificationView *specView; // @synthesize specView=_specView;
@property(nonatomic) _Bool isSearchingDevices; // @synthesize isSearchingDevices=_isSearchingDevices;
@property(retain, nonatomic) QYQimoDevice *currentConnectingDevice; // @synthesize currentConnectingDevice=_currentConnectingDevice;
@property(retain, nonatomic) SPActivityIndicatorView *searchIndicator; // @synthesize searchIndicator=_searchIndicator;
@property(retain, nonatomic) NSMutableArray *originDevices; // @synthesize originDevices=_originDevices;
@property(retain, nonatomic) NSMutableArray *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) QYTableView *cardTable; // @synthesize cardTable=_cardTable;
@property(nonatomic) unsigned long long disCoverType; // @synthesize disCoverType=_disCoverType;
- (void).cxx_destruct;
- (void)fingerTapped:(id)arg1;
- (void)resetDevicecellHeaderView:(unsigned long long)arg1;
- (void)createDevicecellHeaderView;
- (void)addIPBtnClick:(id)arg1;
- (void)setAddIPAdressBtn;
- (void)setSearchIndicatorView;
- (void)deviceRemoved:(id)arg1;
- (void)deviceAdded:(id)arg1;
- (void)clearDevices;
- (void)autoConnectDevice;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setIconForCell:(id)arg1 device:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tryPushVaAirPlay:(_Bool)arg1;
- (void)toDongleSetting;
- (void)afterOpenQYModule;
- (void)preOpenQYModule;
- (void)jumpToEmmerceDongle;
- (void)jumpToH5Dongle;
- (void)buyDongle:(id)arg1;
- (void)reSearchDevices;
- (void)setNeedsResearchDevices;
- (void)searchDevicesWithOutClearCurrentCache;
- (void)searchDevices;
- (void)setNeedsSeachDevices;
- (Class)tableCellClassForIndexPath:(id)arg1;
- (_Bool)isSpecSectionForIndexPath:(id)arg1;
- (_Bool)isAirPlaySectionForIndexPath:(id)arg1;
- (_Bool)isDongleConfigSectionForIndexPath:(id)arg1;
- (_Bool)isDeviceSectionForIndexPath:(id)arg1;
- (void)resetUI;
- (void)refreshUI;
- (void)filterDevices;
- (unsigned long long)searchState;
- (void)loadSepcificaion;
- (void)clean;
- (void)createTableView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithDiscoverType:(unsigned long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

