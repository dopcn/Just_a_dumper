//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSOperationQueue, NSRecursiveLock, NSString, QYMsgCount, Rootdatabase;

@interface QYDataLayer : NSObject
{
    long long currentOrder;
    NSString *currentChannelRequest;
    NSString *currentAlbums;
    long long currentPageNumber;
    long long currentChannelSort;
    NSString *currentTvid;
    Rootdatabase *rootdb;
    _Bool isDbOpen;
    id delegate;
    NSDictionary *userInfo;
    NSOperationQueue *_viewOperationQueue;
    id restoreDelegate;
    NSString *play_info;
    NSRecursiveLock *_viewLock;
    QYMsgCount *_msgCount;
}

+ (void)dispatch_global_aysnc:(CDUnknownBlockType)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)releaseSharedInstance;
+ (id)sharedInstance;
@property(retain, nonatomic) QYMsgCount *msgCount; // @synthesize msgCount=_msgCount;
@property(copy, nonatomic) NSString *play_info; // @synthesize play_info;
@property(nonatomic) __weak id restoreDelegate; // @synthesize restoreDelegate;
@property(copy, nonatomic) NSString *currentTvid; // @synthesize currentTvid;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo;
@property(nonatomic) __weak id delegate; // @synthesize delegate;
@property(nonatomic) _Bool isDbOpen; // @synthesize isDbOpen;
@property(retain, nonatomic) Rootdatabase *rootdb; // @synthesize rootdb;
- (void).cxx_destruct;
- (void)dispatch_global_aysnc:(CDUnknownBlockType)arg1;
- (long long)deleteAllofFavorite;
- (long long)deleteAllofPlayHistoryByUserId:(id)arg1;
- (long long)deleteAllofPlayHistory;
- (long long)deleteFromPlayHistory:(id)arg1 andUserID:(id)arg2;
- (id)getPlayHistoryWithAlbumId:(id)arg1;
- (id)getCategoryArray;
- (id)getMyfavorList:(long long)arg1;
- (id)getTvotherByAlbumid:(long long)arg1;
- (id)getCategorys:(long long)arg1;
- (id)getSettingByKey:(id)arg1;
- (_Bool)insertUserLoginStatus:(long long)arg1;
- (long long)replaceSettingWithKey:(id)arg1 Value:(id)arg2;
- (void)pasteMsgCount:(id)arg1;
- (void)_finalization;
- (id)initShare;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (oneway void)superRelease;

@end

