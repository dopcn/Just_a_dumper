//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KTVWXBaseRecordStatistics.h"

@class NSString;

@interface KTVFeedWatchedStatistics : KTVWXBaseRecordStatistics
{
    NSString *_feedId;
    NSString *_tab;
    NSString *_feedTag;
    long long _watchedTime;
    long long _line;
    unsigned long long _actionType;
    long long _hasFriendLive;
    long long _startId;
    long long _isRefresh;
}

+ (void)clearAllData;
+ (void)clearAllFilterData;
+ (void)saveWatchedFeedIfNeedWithFeedId:(long long)arg1 tab:(id)arg2 feedTag:(id)arg3 line:(long long)arg4 actionType:(unsigned long long)arg5 hasFriendLive:(long long)arg6 startId:(long long)arg7;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long isRefresh; // @synthesize isRefresh=_isRefresh;
@property(nonatomic) long long startId; // @synthesize startId=_startId;
@property(nonatomic) long long hasFriendLive; // @synthesize hasFriendLive=_hasFriendLive;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) long long line; // @synthesize line=_line;
@property(nonatomic) long long watchedTime; // @synthesize watchedTime=_watchedTime;
@property(retain, nonatomic) NSString *feedTag; // @synthesize feedTag=_feedTag;
@property(retain, nonatomic) NSString *tab; // @synthesize tab=_tab;
@property(nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void).cxx_destruct;
- (id)initWithReport:(id)arg1 feedId:(id)arg2 tab:(id)arg3 feedTag:(id)arg4 watchedTime:(long long)arg5 line:(long long)arg6 actionType:(unsigned long long)arg7 hasFriendLive:(long long)arg8 startId:(long long)arg9 isRefresh:(long long)arg10;

@end

