//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ISystemSettingDataProvider-Protocol.h"

@class NSString;

@interface NBSystemSettingPageProvider : NSObject <ISystemSettingDataProvider>
{
    _Bool _isNeedDoCopyrightRiskAversion;
}

@property(nonatomic) _Bool isNeedDoCopyrightRiskAversion; // @synthesize isNeedDoCopyrightRiskAversion=_isNeedDoCopyrightRiskAversion;
- (id)getPushUpdateSwitchValue;
- (id)getShelfBookSortOrderValue;
- (id)getEnterNovelModeValue;
- (id)getWIFIAutoCacheUpdateValue;
- (const CDStruct_dd575f89 *)settingItemInfo;
- (int)settingItemSectionCount;
- (id)init:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

