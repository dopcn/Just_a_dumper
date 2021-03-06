//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RACDisposable;

@interface NVAccountHelper : NSObject
{
    RACDisposable *_refreshDisposable;
}

+ (void)updateToken:(id)arg1 newToken:(id)arg2;
+ (void)synchronizationKeyChain;
+ (id)userDefaultsKey:(id)arg1;
+ (void)logout;
+ (id)updateUserProfileWithToken:(id)arg1 newToken:(id)arg2;
+ (void)updateSnsEnableStatusFlagWith:(CDUnknownBlockType)arg1;
+ (void)updateSnsBindingStatusFlagWith:(CDUnknownBlockType)arg1;
+ (unsigned long long)allFlags;
+ (void)updateBindingInfoWith:(id)arg1;
+ (long long)SNSImported;
+ (void)setFeedFlagRenRen:(_Bool)arg1;
+ (void)setFeedFlagQQNum:(_Bool)arg1;
+ (void)setFeedFlagQQ:(_Bool)arg1;
+ (void)setFeedFlagKaixin:(_Bool)arg1;
+ (void)setFeedFlagSina:(_Bool)arg1;
+ (void)setBoolValue:(_Bool)arg1 forFlag:(unsigned long long)arg2 andKey:(id)arg3;
+ (void)setEnable:(_Bool)arg1 forFlag:(unsigned long long)arg2;
+ (void)setBinded:(_Bool)arg1 forFlag:(unsigned long long)arg2;
+ (unsigned long long)snsEnableStatusFlag;
+ (id)snsEnableFlagKey;
+ (id)snsBindingStatusFlagKey;
+ (_Bool)FeedFlagRenRen;
+ (_Bool)FeedFlagQQNum;
+ (_Bool)FeedFlagQQ;
+ (_Bool)FeedFlagKaixin;
+ (_Bool)FeedFlagSina;
+ (_Bool)isBindedForFlag:(unsigned long long)arg1;
+ (unsigned long long)snsBindingStatusFlag;
+ (_Bool)disableFeedQQNum;
+ (_Bool)disableFeedRenRen;
+ (_Bool)disableFeedQQ;
+ (_Bool)disableFeedKaixin;
+ (_Bool)disableFeedSina;
+ (_Bool)disableFeedForFeedFlag:(unsigned long long)arg1;
+ (void)removeMyProfileFromUserDefaults;
+ (void)saveMyProfileToUserDefaults:(id)arg1;
+ (_Bool)isLogin;
+ (void)updatePhone:(id)arg1;
+ (_Bool)hasPhone;
+ (id)newToken;
+ (id)token;
+ (long long)userId;
+ (id)account;
+ (id)keyChainStore;
+ (id)instance;
+ (void)initialize;
@property(retain, nonatomic) RACDisposable *refreshDisposable; // @synthesize refreshDisposable=_refreshDisposable;
- (void).cxx_destruct;
- (id)updateProfile:(id)arg1 nickName:(id)arg2 optionalAvatar:(id)arg3 cityid:(long long)arg4 gender:(long long)arg5 birthday:(id)arg6 hometown:(long long)arg7 marriageStatus:(long long)arg8;
- (void)updateAccountInfo:(id)arg1;
- (void)updateAccountInfo;
- (void)dealloc;
- (id)init;

@end

