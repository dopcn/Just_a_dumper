//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AHLogger.h"

@protocol QMCalibrationDelegate;

@interface QMProcessGather : AHLogger
{
    id <QMCalibrationDelegate> _calibrationDelegate;
}

+ (id)getInstance;
@property(nonatomic) __weak id <QMCalibrationDelegate> calibrationDelegate; // @synthesize calibrationDelegate=_calibrationDelegate;
- (void).cxx_destruct;
- (_Bool)sendProcessDatas:(_Bool)arg1;
- (_Bool)sendFirstProcessDatas:(id)arg1;
- (id)converProcessDataToStr:(id)arg1;
- (id)processesHandleWith:(id)arg1 andWithTodayPdic:(id)arg2;
- (void)displayProcess:(id)arg1;
- (void)beginRun;
- (id)init;

@end

