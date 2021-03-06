//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LMBaseVC.h"

#import "NSURLConnectionDelegate-Protocol.h"
#import "TencentSessionDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class LMSocialBindingVCModel, NSArray, NSDictionary, NSString, TencentOAuth, UITableView;

@interface LMSocialBindingVC : LMBaseVC <UITableViewDataSource, UITableViewDelegate, TencentSessionDelegate, NSURLConnectionDelegate>
{
    UITableView *_tableView;
    LMSocialBindingVCModel *_vcModel;
    TencentOAuth *_qqOAuth;
    NSArray *_permissons;
    NSDictionary *_qqUserInfo;
}

@property(retain, nonatomic) NSDictionary *qqUserInfo; // @synthesize qqUserInfo=_qqUserInfo;
@property(retain, nonatomic) NSArray *permissons; // @synthesize permissons=_permissons;
@property(retain, nonatomic) TencentOAuth *qqOAuth; // @synthesize qqOAuth=_qqOAuth;
@property(retain, nonatomic) LMSocialBindingVCModel *vcModel; // @synthesize vcModel=_vcModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)getWeixinOpenIdWithCode:(id)arg1;
- (void)getUserInfoResponse:(id)arg1;
- (void)tencentDidNotNetWork;
- (void)tencentDidNotLogin:(_Bool)arg1;
- (void)tencentDidLogin;
- (void)unbindingSocialAccount:(id)arg1;
- (void)bindThrirdPartWithMode:(unsigned long long)arg1 andAccessToken:(id)arg2 andOpenId:(id)arg3 andRefreshToken:(id)arg4 andExpiresIn:(long long)arg5 unionId:(id)arg6;
- (void)handleBindingToSinaWithResponse:(id)arg1;
- (void)authorizeToWeiXin;
- (void)authorizeToTencentQQ;
- (void)authorizeToSinaWeibo;
- (_Bool)isUnBindingWithSocialData:(id)arg1;
- (void)checkLoginState;
- (void)loginout;
- (void)showConformLoginoutView:(id)arg1;
- (void)showConformUnbindingView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)freshUserInfo;
- (void)handleChange:(id)arg1;
- (void)dealloc;
- (void)registerNotifition;
- (void)requestData;
- (void)initNavigationBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

