//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MttWupUniGuid, MttWupUniLogin, NSMutableArray, WupTransfer;

@interface MttWupUniService : NSObject
{
    WupTransfer *_transfer;
    MttWupUniLogin *_uniLogin;
    MttWupUniGuid *_uniGuid;
    NSMutableArray *_aryUniStart_NewInstall;
    NSMutableArray *_aryUniStart_UpdateVersion;
    NSMutableArray *_aryUniLogin;
    NSMutableArray *_aryUniSwitchFG;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *aryUniSwitchFG; // @synthesize aryUniSwitchFG=_aryUniSwitchFG;
@property(retain, nonatomic) NSMutableArray *aryUniLogin; // @synthesize aryUniLogin=_aryUniLogin;
@property(retain, nonatomic) NSMutableArray *aryUniStart_UpdateVersion; // @synthesize aryUniStart_UpdateVersion=_aryUniStart_UpdateVersion;
@property(retain, nonatomic) NSMutableArray *aryUniStart_NewInstall; // @synthesize aryUniStart_NewInstall=_aryUniStart_NewInstall;
@property(retain, nonatomic) MttWupUniGuid *uniGuid; // @synthesize uniGuid=_uniGuid;
@property(retain, nonatomic) MttWupUniLogin *uniLogin; // @synthesize uniLogin=_uniLogin;
@property(retain, nonatomic) WupTransfer *transfer; // @synthesize transfer=_transfer;
- (void).cxx_destruct;
- (void)useGuidData:(id)arg1;
- (void)_saveGuidDataOnMainThread:(id)arg1;
- (void)getGuid;
- (void)startSTReport;
- (void)startWupUniService:(long long)arg1;
- (id)packetUniItem:(id)arg1 bNeedCustom:(_Bool)arg2 bSuggestNoCache:(_Bool)arg3;
- (void)startOhterServiceAfterVerify:(long long)arg1;
- (void)startVerifyAndUniService:(long long)arg1;
- (void)startVerifyAndUniServiceWhenEnterForeground;
- (void)startVerifyAndUniServiceWhenStart;
- (_Bool)needVerify;
- (void)InitWupUniArray;
- (void)AddWupUniItem:(Class)arg1 array:(id)arg2;
- (id)init;

@end

