//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray;

@interface ACRecommendHomeExposureViewHandler : NSObject
{
    _Bool _isReportExposure;
    NSDate *_beginPvExposureDate;
    NSMutableArray *_exposureArray;
}

@property(nonatomic) _Bool isReportExposure; // @synthesize isReportExposure=_isReportExposure;
@property(retain, nonatomic) NSMutableArray *exposureArray; // @synthesize exposureArray=_exposureArray;
@property(retain, nonatomic) NSDate *beginPvExposureDate; // @synthesize beginPvExposureDate=_beginPvExposureDate;
- (void).cxx_destruct;
- (void)postExposurePV:(id)arg1;
- (void)saveExposureData:(id)arg1 dataArray:(id)arg2;
- (void)endPageExposureCalculate:(id)arg1 dataArray:(id)arg2;
- (void)beginPageExposureCalculate;
- (id)init;

@end

