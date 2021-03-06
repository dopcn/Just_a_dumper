//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNMBMyEBuyCommonVCtrler.h"

#import "SNMBPassportLogoutRequestDelegate-Protocol.h"

@class NSString, SNMBPassportLogoutRequest, UIButton, UILabel, UIView, UIWebView;

@interface SNMBSettingViewController : SNMBMyEBuyCommonVCtrler <SNMBPassportLogoutRequestDelegate>
{
    int quailtyType;
    UIButton *_logoutBtn;
    UIButton *_trafficSwitchBtn;
    UIView *_myView;
    UIWebView *_callWebView;
    SNMBPassportLogoutRequest *_logoutRequest;
    UILabel *_versionLbl;
}

@property(retain, nonatomic) UILabel *versionLbl; // @synthesize versionLbl=_versionLbl;
@property(retain, nonatomic) SNMBPassportLogoutRequest *logoutRequest; // @synthesize logoutRequest=_logoutRequest;
@property(retain, nonatomic) UIWebView *callWebView; // @synthesize callWebView=_callWebView;
@property(retain, nonatomic) UIView *myView; // @synthesize myView=_myView;
@property(retain, nonatomic) UIButton *trafficSwitchBtn; // @synthesize trafficSwitchBtn=_trafficSwitchBtn;
@property(retain, nonatomic) UIButton *logoutBtn; // @synthesize logoutBtn=_logoutBtn;
- (void).cxx_destruct;
- (_Bool)checkVersionIsNeedUpdateClientV:(id)arg1 serverV:(id)arg2;
- (_Bool)checkHardWareIsSupportCallHotLine;
- (void)callHotLine;
- (void)userLogoutCompletedWithResult:(_Bool)arg1 errorCode:(id)arg2;
- (void)loginLogoutAction;
- (void)clearMemoryDidOk;
- (void)clearImageMemory:(id)arg1;
- (void)reloadTableView;
- (void)changeTouchIDMode:(id)arg1;
- (void)changeMode:(id)arg1;
- (void)gotoUserFeedBack;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)handleTapGesture:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

