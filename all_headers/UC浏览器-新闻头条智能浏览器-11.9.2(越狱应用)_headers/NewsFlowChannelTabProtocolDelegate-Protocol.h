//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol NewsFlowChannelTabProtocol;

@protocol NewsFlowChannelTabProtocolDelegate <NSObject>
- (void)channelTab:(id <NewsFlowChannelTabProtocol>)arg1 didChannelsChangeTo:(NSArray *)arg2;
- (void)channelTab:(id <NewsFlowChannelTabProtocol>)arg1 fromChannel:(NSString *)arg2 toChannel:(NSString *)arg3;

@optional
- (void)channelTabBackButtonClick;
- (void)channelTab:(id <NewsFlowChannelTabProtocol>)arg1 didEnterLongPressMode:(_Bool)arg2;
- (_Bool)channelIsReqWithIndex:(long long)arg1;
@end

