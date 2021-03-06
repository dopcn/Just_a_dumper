//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSTimer, QQLoginProcessHelper, UserAccount;

@interface MttAccountDataManager : NSObject
{
    NSMutableDictionary *_userAccounts;
    UserAccount *_currQBAccount;
    QQLoginProcessHelper *_qqhelper;
    NSTimer *_tokeCheckTime;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *tokeCheckTime; // @synthesize tokeCheckTime=_tokeCheckTime;
@property(retain, nonatomic) QQLoginProcessHelper *qqhelper; // @synthesize qqhelper=_qqhelper;
@property(retain, nonatomic) UserAccount *currQBAccount; // @synthesize currQBAccount=_currQBAccount;
@property(retain, nonatomic) NSMutableDictionary *userAccounts; // @synthesize userAccounts=_userAccounts;
- (void).cxx_destruct;
- (void)showAlertView;
- (void)handleErrorRefreshTokenUI;
- (void)foceRefreshWeiXinAccoutnToken;
- (void)checkWeiXinAccountValid;
- (void)loadAccountInfoFromFile;
- (id)accountInfoFilePath;
- (id)accountForKey:(id)arg1;
- (void)switchToAccount:(id)arg1;
- (void)setAccount:(id)arg1 forKey:(id)arg2;
- (void)saveAccountInfo;
- (void)saveAccountInfoInMainThread;
- (void)logoutCurrentAccount;
- (void)clearAccountOfType:(long long)arg1;
- (void)clearNovelGuestAccount;
- (id)novelGuestAccount;
- (long long)currentLoginAccountType;
- (id)currentNovelAccount;
- (id)currentQBAccount;
- (_Bool)isNovelAccountLogin;
- (_Bool)isQBAccountLogin;
- (void)resaveQQAccountInfo:(id)arg1;
- (void)updateVersion;
- (void)refreshQQToken;
- (void)initRefresh;
- (void)dealloc;
- (id)init;

@end

