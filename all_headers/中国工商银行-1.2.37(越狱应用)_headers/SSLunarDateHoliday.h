//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface SSLunarDateHoliday : NSObject
{
    NSDictionary *_lunarHoliday;
}

+ (id)convertIndexFrom:(int)arg1 day:(int)arg2;
+ (id)getPaddingStringForInt:(int)arg1;
+ (id)alloc;
+ (id)sharedSSLunarDateHoliday;
- (void).cxx_destruct;
- (id)getLunarHolidayNameForDateChina:(struct LibLunarContext *)arg1 index:(id)arg2;
- (_Bool)isDateLunarHolidayChina:(struct LibLunarContext *)arg1 index:(id)arg2;
- (id)getLunarHolidayNameForDate:(struct LibLunarContext *)arg1 region:(int)arg2;
- (_Bool)isDateLunarHoliday:(struct LibLunarContext *)arg1 region:(int)arg2;
- (id)getDongzhiDate:(int)arg1;
- (id)getQingmingDate:(int)arg1;
- (id)lunarHolidayChina;

@end

