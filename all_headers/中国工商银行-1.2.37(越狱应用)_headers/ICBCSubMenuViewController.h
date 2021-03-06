//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICBCViewController.h"

#import "GesturePasswordViewControllerDelegate-Protocol.h"

@class CustomAlertView, ICBCSelectIconsObject, ICBCdownMenu, NSMutableArray, NSMutableDictionary, NSString;

@interface ICBCSubMenuViewController : ICBCViewController <GesturePasswordViewControllerDelegate>
{
    NSMutableDictionary *allDictionary;
    NSMutableArray *submenuArray;
    NSMutableDictionary *groupMenuDic;
    NSMutableDictionary *selectSubmenuDic;
    _Bool isFromMainMenu;
    _Bool backToRootMenu;
    _Bool notFirstMenu;
    _Bool isFromQrCode;
    _Bool isGroupMenu;
    double textLabelSize;
    double detailTextLabelSize;
    NSString *webviewType;
    _Bool defaultAccStatus;
    _Bool _isShowAllMenu;
    NSMutableArray *moreSubmenuArray;
    ICBCdownMenu *_downMenu;
    NSString *_submenuTypeProperty;
    NSString *_submenuParamProperty;
    NSMutableArray *_allSubMenuArray;
    NSMutableDictionary *_dataOfSubmenuForLogin;
    CustomAlertView *_alertView;
    ICBCSelectIconsObject *_icbcSelectIconsObject;
}

@property(retain, nonatomic) ICBCSelectIconsObject *icbcSelectIconsObject; // @synthesize icbcSelectIconsObject=_icbcSelectIconsObject;
@property(nonatomic) _Bool isShowAllMenu; // @synthesize isShowAllMenu=_isShowAllMenu;
@property(retain, nonatomic) CustomAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) NSMutableDictionary *dataOfSubmenuForLogin; // @synthesize dataOfSubmenuForLogin=_dataOfSubmenuForLogin;
@property(retain, nonatomic) NSMutableArray *allSubMenuArray; // @synthesize allSubMenuArray=_allSubMenuArray;
@property(retain, nonatomic) NSString *submenuParamProperty; // @synthesize submenuParamProperty=_submenuParamProperty;
@property(retain, nonatomic) NSString *submenuTypeProperty; // @synthesize submenuTypeProperty=_submenuTypeProperty;
@property(retain, nonatomic) ICBCdownMenu *downMenu; // @synthesize downMenu=_downMenu;
@property(retain, nonatomic) NSMutableArray *moreSubmenuArray; // @synthesize moreSubmenuArray;
@property(retain, nonatomic) NSString *webviewType; // @synthesize webviewType;
@property(nonatomic) double detailTextLabelSize; // @synthesize detailTextLabelSize;
@property(nonatomic) double textLabelSize; // @synthesize textLabelSize;
@property(nonatomic) _Bool defaultAccStatus; // @synthesize defaultAccStatus;
@property(nonatomic) _Bool isFromQrCode; // @synthesize isFromQrCode;
@property(nonatomic) _Bool notFirstMenu; // @synthesize notFirstMenu;
@property(nonatomic) _Bool backToRootMenu; // @synthesize backToRootMenu;
@property(nonatomic) _Bool isFromMainMenu; // @synthesize isFromMainMenu;
@property(retain, nonatomic) NSMutableArray *submenuArray; // @synthesize submenuArray;
@property(retain, nonatomic) NSMutableDictionary *selectSubmenuDic; // @synthesize selectSubmenuDic;
@property(retain, nonatomic) NSMutableDictionary *allDictionary; // @synthesize allDictionary;
- (void).cxx_destruct;
- (void)getSignDataUsedToJumpToOtherApp:(id)arg1;
- (void)changeToLoginVC:(_Bool)arg1;
- (void)logoutcardActiveSuccessfully:(id)arg1;
- (void)oKcLick;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)sendNotification;
- (void)startWebViewRequest:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getAreaCode:(id)arg1;
- (void)selectIcons:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)showChangeView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)back;
- (id)getDataArrayWithSubArray:(id)arg1;
- (void)prepareMenudata;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showMenu:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

