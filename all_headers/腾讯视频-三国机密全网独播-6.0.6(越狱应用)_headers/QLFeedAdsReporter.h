//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QLFeedAdsReporterProtocol-Protocol.h"

@class NSString;
@protocol QLFeedAdsReporterConfigDelegate;

@interface QLFeedAdsReporter : NSObject <QLFeedAdsReporterProtocol>
{
    id <QLFeedAdsReporterConfigDelegate> _feedAdsReportConfig;
}

@property(retain, nonatomic) id <QLFeedAdsReporterConfigDelegate> feedAdsReportConfig; // @synthesize feedAdsReportConfig=_feedAdsReportConfig;
- (void).cxx_destruct;
- (id)getReportErrorParams:(id)arg1 error:(id)arg2 result:(id)arg3 adId:(id)arg4 adPos:(id)arg5;
- (_Bool)isReportSuccess:(id)arg1 error:(id)arg2;
- (id)parseData:(id)arg1;
- (void)feedAdsPullAppSuccessEventReport:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)feedAdsUninterestedEventReport:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)feedAdsClickEventReport:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)videoFeedAdsPlayEventReport:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)feedAdsShowUpEventReport:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithFeedAdsReportConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

