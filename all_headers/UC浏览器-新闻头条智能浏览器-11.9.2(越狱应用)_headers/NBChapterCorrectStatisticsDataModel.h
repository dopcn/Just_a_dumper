//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface NBChapterCorrectStatisticsDataModel : NSObject
{
}

+ (const CDStruct_ae5bf2ad *)findEventItemByType:(int)arg1;
+ (const CDStruct_ae5bf2ad *)findMarkEventItemByType:(int)arg1;
+ (id)onAddMark:(int)arg1;
+ (void)onAddStatistics:(id)arg1;
+ (void)markEvent:(id)arg1 withKey:(id)arg2 withValue:(id)arg3;
+ (void)onAddStatistics:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (void)onMarkAndAddStatistics:(int)arg1;
+ (void)onAddInvalidSourceStatistics:(id)arg1;
+ (void)onMarkInvalidSource:(int)arg1;

@end

