//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MttBaseModuleBridge.h"

#import "MttQBOtherModulesBridgeDelegate-Protocol.h"

@class NSString;

@interface MttQBOtherModulesBridgeImpl : MttBaseModuleBridge <MttQBOtherModulesBridgeDelegate>
{
}

- (long long)getSpecificItuneslinkAlertTag;
- (id)getSpecificUrlAlertDelegate:(id)arg1 appleID:(id)arg2 pageUrl:(id)arg3 isShowAlert:(_Bool)arg4;
- (void)webViewUnitBackWhen302:(_Bool)arg1 withUrl:(id)arg2;
- (void)webViewUnitRemoveBlankPage;
- (void)reportAppDownloadToBeacon:(id)arg1 pageUrl:(id)arg2 jumpUrl:(id)arg3;
- (id)getAppChannelID;
- (_Bool)isAtWebViewUnit;
- (_Bool)isAtHomePageUnit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

