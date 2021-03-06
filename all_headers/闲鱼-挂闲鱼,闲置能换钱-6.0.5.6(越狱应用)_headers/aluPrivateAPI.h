//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol IDataStore;

@interface aluPrivateAPI : NSObject
{
    id <IDataStore> _documentDataSotre;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <IDataStore> documentDataSotre; // @synthesize documentDataSotre=_documentDataSotre;
- (void).cxx_destruct;
- (id)imageWithColor:(id)arg1;
- (id)colorWithRGB:(int)arg1 alpha:(double)arg2;
- (id)imageByApplyingAlpha:(double)arg1 image:(id)arg2;
- (id)bgImageFromColors:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)setButtonStyle:(id)arg1 type:(int)arg2;
- (id)taobaoRegButtonWithFrame:(struct CGRect)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)taobaoLoginButtonWithFrame:(struct CGRect)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)assembleInfo:(id)arg1;
- (void)hideMBProgressHUD;
- (void)showMBProgressHUD;
- (void)tokenLogin:(id)arg1 scene:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (void)autoLogin:(id)arg1 userId:(id)arg2 reserved:(id)arg3 onSuccess:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (id)getAlipayHandler;
- (void)aluCultivateAlipayCookies:(CDUnknownBlockType)arg1;
- (id)getMultiLanguageString:(id)arg1;
- (void)setProxySession:(id)arg1;
- (void)loginBySsoTokenUrl:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)clearSsoPageAsLoginRefer;
- (void)markSsoPageAsLoginRefer;
- (id)readClock;
- (void)writeClock:(id)arg1;
- (void)saveCompatibleUser:(id)arg1;
- (id)getCurrentUserTokenKey;
- (id)generateSignWithContentDic:(id)arg1;
- (id)generateSignWithContent:(id)arg1;
- (void)setSecrityKey:(id)arg1;
- (void)debug:(id)arg1;
- (id)getSSOMoinitorValueByKey:(id)arg1;
- (id)getOtherMoinitorValueByKey:(id)arg1;
- (id)getLoginMoinitorValueByKey:(id)arg1;
- (id)init;

@end

