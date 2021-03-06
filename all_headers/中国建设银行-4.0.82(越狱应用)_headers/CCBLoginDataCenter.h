//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EBankLoginInfo, PhoneLoginInfo;

@interface CCBLoginDataCenter : NSObject
{
    _Bool _isDemo;
    EBankLoginInfo *_ebankInfo;
    PhoneLoginInfo *_phoneInfo;
}

+ (_Bool)isBind;
+ (void)clear7010CachedData;
+ (void)set7010CachedData:(id)arg1;
+ (id)get7010CachedData;
+ (id)shared7010CachedData;
+ (_Bool)isLoginSessionValid;
+ (id)getHeaderDic;
+ (id)getPostDict;
+ (void)clearPhoneLoginDict;
+ (void)clearEbankCookie;
+ (void)clearEbankLoginPostDic;
+ (void)updateHeaderDic:(id)arg1;
+ (void)addEBankLoginDic:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool isDemo; // @synthesize isDemo=_isDemo;
@property(retain, nonatomic) PhoneLoginInfo *phoneInfo; // @synthesize phoneInfo=_phoneInfo;
@property(retain, nonatomic) EBankLoginInfo *ebankInfo; // @synthesize ebankInfo=_ebankInfo;
- (void).cxx_destruct;
- (id)init;

@end

