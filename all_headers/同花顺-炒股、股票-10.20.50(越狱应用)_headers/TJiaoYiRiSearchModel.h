//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TJiaoYiRiSearchModel : NSObject
{
}

+ (_Bool)isSameDay:(id)arg1 otherDate:(id)arg2;
+ (_Bool)isDate:(id)arg1 BetweenStartTime:(long long)arg2 andEndTime:(long long)arg3;
+ (void)removeChengjiaoLiushuiWithAccount:(id)arg1;
+ (id)readChengJiaoLiushuiFromLocalWithAccount:(id)arg1;
+ (id)readAllLocalChengJiaoLiushui;
+ (void)saveChengJiaoLiushuiToLocal:(id)arg1 WithAccount:(id)arg2;
+ (_Bool)isNowDateBetweenStartTime:(long long)arg1 andEndTime:(long long)arg2;
+ (_Bool)isNowDateBetween000And915;
+ (_Bool)isNowDateBetween930And1457;
+ (_Bool)isNowDateBetween930And1500;
+ (_Bool)isNowDateBetween000And830;
+ (_Bool)isNowDateAfter1500;
+ (_Bool)isNowDateAfter945;
+ (_Bool)isNowDateBetween830And915;
+ (_Bool)isTodayJiaoYiDate;
+ (id)newFeaturePathWithName:(id)arg1;
+ (id)readDateArrayFromLocalFile;
+ (void)writeDataToFile:(id)arg1;
+ (id)searchSevenDatesLessthanDate:(id)arg1;
+ (id)searchMaxDateFromArray:(id)arg1 lessthanDate:(id)arg2;
+ (id)getPreviousTDateFromDate:(id)arg1;
+ (id)nextThirthJiaoYiRiFromToday;
+ (id)getNextJiaoYiRiFromDate:(id)arg1;
+ (id)getNextJiaoYiRiFromToday;
+ (id)getRecentTDateFromDate:(id)arg1;
+ (id)getStringFromDate:(id)arg1 formatter:(id)arg2;
+ (_Bool)shouldRefreshData;
+ (void)requestCurrentJiaoYiDate;
+ (long long)getNowWeekDay;
+ (_Bool)isNowDateBetween915And2359;

@end

