//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface YLUTDDataSource : NSObject
{
    _Bool _isInitialized;
    NSString *_currentPage;
    NSMutableDictionary *_dbManager;
    NSMutableDictionary *_urlManager;
    double _lat;
    double _lng;
    long long _lastLocationTime;
    NSMutableDictionary *_appKeyDic;
    NSMutableDictionary *_channelDic;
}

+ (id)sharedDataSource;
@property(retain, nonatomic) NSMutableDictionary *channelDic; // @synthesize channelDic=_channelDic;
@property(retain, nonatomic) NSMutableDictionary *appKeyDic; // @synthesize appKeyDic=_appKeyDic;
@property(nonatomic) long long lastLocationTime; // @synthesize lastLocationTime=_lastLocationTime;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(retain, nonatomic) NSMutableDictionary *urlManager; // @synthesize urlManager=_urlManager;
@property(retain, nonatomic) NSMutableDictionary *dbManager; // @synthesize dbManager=_dbManager;
@property(retain, nonatomic) NSString *currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
- (void).cxx_destruct;
- (void)unarchiveFromFile;
- (void)archiveToFile;
- (id)getChannelIDWithsubmoduleType:(long long)arg1;
- (id)getAppKeyWithsubmoduleType:(long long)arg1;
- (void)setAppKey:(id)arg1 channelID:(id)arg2 withsubmoduleType:(long long)arg3;
- (id)init;

@end

