//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FOXEventTimeCell, NSDate;

@protocol FOXEventTimeCellDelegate <NSObject>
- (void)updateStartTime:(NSDate *)arg1 endTime:(NSDate *)arg2;
- (void)didClickEndTimeWithCell:(FOXEventTimeCell *)arg1 isAllDayEvent:(_Bool)arg2;
- (void)didClickStartTimeWithCell:(FOXEventTimeCell *)arg1 isAllDayEvent:(_Bool)arg2;
- (void)didClickCellWithCell:(FOXEventTimeCell *)arg1;
@end

