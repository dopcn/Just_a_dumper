//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface YTEngineCacheLightItemQueue : NSObject
{
    NSMutableDictionary *_cacheDic;
    long long _maxQueueCount;
}

@property(nonatomic) long long maxQueueCount; // @synthesize maxQueueCount=_maxQueueCount;
@property(retain, nonatomic) NSMutableDictionary *cacheDic; // @synthesize cacheDic=_cacheDic;
- (void).cxx_destruct;
- (void)clearAll;
- (id)queryLightVideoItemWithVid:(id)arg1;
- (void)removeLightVideoItemWithVid:(id)arg1;
- (void)addLightVideoItem:(id)arg1;
- (id)findEarliestVid;
- (id)initWithQueueCount:(long long)arg1;

@end

