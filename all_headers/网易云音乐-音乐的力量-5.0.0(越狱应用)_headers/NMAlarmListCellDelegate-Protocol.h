//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NMAlarmListCell, NMAlarmRingInfo;

@protocol NMAlarmListCellDelegate <NSObject>

@optional
- (void)alarmListCellDeleteClicked:(NMAlarmListCell *)arg1 alarmRingInfo:(NMAlarmRingInfo *)arg2;
- (void)alarmListCellDownloadClicked:(NMAlarmListCell *)arg1 alarmRingInfo:(NMAlarmRingInfo *)arg2;
- (void)alarmListCellUseAlarmClicked:(NMAlarmListCell *)arg1 alarmRingInfo:(NMAlarmRingInfo *)arg2;
- (void)alarmListCellClicked:(NMAlarmListCell *)arg1 alarmRingInfo:(NMAlarmRingInfo *)arg2;
@end

