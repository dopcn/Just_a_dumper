//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LocalMapDelegate-Protocol.h"

@class LocalMap, NSString;
@protocol BMKOfflineMapDelegate;

@interface BMKOfflineMap : NSObject <LocalMapDelegate>
{
    id <BMKOfflineMapDelegate> _delegate;
    LocalMap *_localMap;
    _Bool deleteFailZip;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)onGetImportLocalMapResult:(int)arg1 withFailCount:(int)arg2;
- (void)onGetResultOfLocalMapVersionUpdata:(int)arg1;
- (void)onGetResultOfCompressOperation:(int)arg1;
- (void)onGetIndexOfCompressingZipFile:(int)arg1;
- (void)onGetCountOfImportMapZipFile:(int)arg1;
- (void)onGetDiskSpaceLackResult;
- (void)onGetUpdateResult:(int)arg1;
- (id)getOfflineCityList;
- (id)getHotCityList;
- (id)getUpdateInfo:(int)arg1;
- (id)searchCity:(id)arg1;
- (id)getAllUpdateInfo;
- (_Bool)remove:(int)arg1;
- (_Bool)scan:(_Bool)arg1;
- (_Bool)pause:(int)arg1;
- (_Bool)update:(int)arg1;
- (_Bool)start:(int)arg1;
@property(nonatomic) __weak id <BMKOfflineMapDelegate> delegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

