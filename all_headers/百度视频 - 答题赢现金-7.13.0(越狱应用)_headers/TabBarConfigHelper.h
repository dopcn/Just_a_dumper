//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PkgUpgradeClientBase.h"

@class TabBarData, TabCenterButtonConfig;

@interface TabBarConfigHelper : PkgUpgradeClientBase
{
    TabBarData *_tabBarData;
    TabCenterButtonConfig *_tabCenterBtnConfig;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TabCenterButtonConfig *tabCenterBtnConfig; // @synthesize tabCenterBtnConfig=_tabCenterBtnConfig;
@property(retain, nonatomic) TabBarData *tabBarData; // @synthesize tabBarData=_tabBarData;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isSuportPageType:(id)arg1;
- (id)hostAPI4configFile;
- (id)hostUrl4configFile;
- (id)defaultVersion;
- (void)handlePkgUpgraded:(id)arg1 pkg:(id)arg2;
- (id)path4defaultBundle;
- (id)clientID;
- (int)mode4autoUp;
- (id)getCurrentBndl;
- (id)script4url;
- (id)parseJsonData:(id)arg1;
- (id)getTabBarMenuItemArr;
- (id)getIconImagePath:(id)arg1;
- (id)getIconImageData:(id)arg1;
- (void)updateWillForeground;
- (id)init;

@end

