//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface NMTrafficReportData : NSObject
{
    NSMutableArray *_trafficReportEvents;
    NSMutableArray *_naviErrorReportEvents;
}

@property(retain, nonatomic) NSMutableArray *naviErrorReportEvents; // @synthesize naviErrorReportEvents=_naviErrorReportEvents;
@property(retain, nonatomic) NSMutableArray *trafficReportEvents; // @synthesize trafficReportEvents=_trafficReportEvents;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

