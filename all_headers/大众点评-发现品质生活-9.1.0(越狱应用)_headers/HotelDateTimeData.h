//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HotelDateTimeData : NSObject
{
    long long year;
    long long month;
    long long day;
}

@property(nonatomic) long long day; // @synthesize day;
@property(nonatomic) long long month; // @synthesize month;
@property(nonatomic) long long year; // @synthesize year;
- (id)description;
- (id)date;
- (id)initWithDate:(id)arg1;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;

@end

