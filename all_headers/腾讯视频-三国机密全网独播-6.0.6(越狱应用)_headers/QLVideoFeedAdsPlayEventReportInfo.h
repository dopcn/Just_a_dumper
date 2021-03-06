//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QLJCEAdReport;

@interface QLVideoFeedAdsPlayEventReportInfo : NSObject
{
    QLJCEAdReport *_playAdReport;
    long long _playType;
    double _timeOffest;
    double _timeStamp;
    long long _failReason;
    NSString *_adId;
    NSString *_adPos;
}

@property(copy, nonatomic) NSString *adPos; // @synthesize adPos=_adPos;
@property(copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(nonatomic) long long failReason; // @synthesize failReason=_failReason;
@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) double timeOffest; // @synthesize timeOffest=_timeOffest;
@property(nonatomic) long long playType; // @synthesize playType=_playType;
@property(retain, nonatomic) QLJCEAdReport *playAdReport; // @synthesize playAdReport=_playAdReport;
- (void).cxx_destruct;
- (id)description;

@end

