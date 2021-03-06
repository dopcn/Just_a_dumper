//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SubscribeFileManager : NSObject
{
}

+ (void)setupNewsFileSysterm;
+ (id)mttSharedInstance;
- (id)summaryDetailUrl:(id)arg1;
- (id)locationReferer:(id)arg1;
- (id)locationCallback:(id)arg1;
- (id)locationBaseUrl:(id)arg1;
- (id)summaryReferer:(id)arg1;
- (id)summaryBaseUrl:(id)arg1;
- (long long)getLocalNewsFeedsServiceType:(id)arg1;
- (long long)getFeedsSubscribeServiceType:(id)arg1;
- (long long)getSubscribeServiceType:(id)arg1;
- (void)clearCache;
- (void)updateNewsSummaryByNewsId:(id)arg1 commentCount:(long long)arg2;
- (id)readNewsSummmaryByNewsId:(id)arg1;
- (_Bool)writeDictionary:(id)arg1 toPath:(id)arg2;
- (_Bool)writeArray:(id)arg1 toPath:(id)arg2;
- (id)readDictionaryFromPath:(id)arg1;
- (id)readArrayFromPath:(id)arg1;

@end

