//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NewsFlowReqItem;
@protocol INewsFlowItem, INewsFlowModel, NewsFlowManagerObserver;

@protocol INewsFlowManager <NSObject>
+ (id)sharedInstance;
@property(readonly, retain, nonatomic) id <INewsFlowModel> model;
- (void)clearAllArticleCachedHeight;
- (void)updateChannelsIdentity;
- (void)updateArticle:(id)arg1 channel:(NSString *)arg2 shouldNotifyObservers:(_Bool)arg3;
- (void)addArticle:(id <INewsFlowItem>)arg1 atIndex:(unsigned long long)arg2 channel:(NSString *)arg3;
- (long long)refreshIntervalChannel;
- (long long)refreshIntervalWifi;
- (long long)refreshIntervalMobile;
- (long long)refreshIntervalHomeNormal;
- (_Bool)requestOldData:(NewsFlowReqItem *)arg1;
- (_Bool)requestNewData:(NewsFlowReqItem *)arg1;
- (NewsFlowReqItem *)requestForChannel:(NSString *)arg1;
- (_Bool)removeObserver:(id <NewsFlowManagerObserver>)arg1;
- (_Bool)addObserver:(id <NewsFlowManagerObserver>)arg1;
@end

