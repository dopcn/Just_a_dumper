//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "XAdVideoExposureProtocol-Protocol.h"

@class ADStatisticsExposureModule;
@protocol XAdVideoDataSource;

@interface XAdVideoExposure : NSObject <XAdVideoExposureProtocol>
{
    id <XAdVideoDataSource> _dataSource;
    ADStatisticsExposureModule *_exposureModule;
    long long _emTime;
    long long _suTime;
}

@property(nonatomic) long long suTime; // @synthesize suTime=_suTime;
@property(nonatomic) long long emTime; // @synthesize emTime=_emTime;
@property(retain, nonatomic) ADStatisticsExposureModule *exposureModule; // @synthesize exposureModule=_exposureModule;
@property(nonatomic) __weak id <XAdVideoDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)exposureADClose;
- (void)exposureVR;
- (void)exposureEmbed:(long long)arg1;
- (void)exposureADWatch;
- (void)exposureADSkip;
- (void)exposureSHU;
- (void)exposureVC;
- (void)exposureCUM;
- (void)exposureSU:(long long)arg1;
- (void)exposureSUE;
- (void)exposureSUS;
- (id)init;

@end

