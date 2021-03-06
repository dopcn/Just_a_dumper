//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NewsFlowChannelInfo, ReqLocalChannelArticlesItem;

@protocol NFChannelsManagerObserver <NSObject>

@optional
- (void)didChannelInfoUpdate:(NewsFlowChannelInfo *)arg1;
- (void)didLocalCityChangeTo:(NSString *)arg1;
- (void)item:(ReqLocalChannelArticlesItem *)arg1 data:(NSDictionary *)arg2 isCitySuportLocalNews:(_Bool)arg3;
- (void)didCityListUpdated;
- (void)didChannelListUpdatedByUser;
- (void)didChannelsUpdated;
@end

