//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class QLFeedAdsClickEventReportInfo, QLFeedAdsPullAppSuccessEventReportInfo, QLFeedAdsShowUpEventReportInfo, QLFeedAdsUninterestedEventReportInfo, QLVideoFeedAdsPlayEventReportInfo;

@protocol QLFeedAdsReporterProtocol <NSObject>

@optional
- (void)feedAdsPullAppSuccessEventReport:(QLFeedAdsPullAppSuccessEventReportInfo *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)feedAdsUninterestedEventReport:(QLFeedAdsUninterestedEventReportInfo *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)feedAdsClickEventReport:(QLFeedAdsClickEventReportInfo *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)videoFeedAdsPlayEventReport:(QLVideoFeedAdsPlayEventReportInfo *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)feedAdsShowUpEventReport:(QLFeedAdsShowUpEventReportInfo *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
@end

