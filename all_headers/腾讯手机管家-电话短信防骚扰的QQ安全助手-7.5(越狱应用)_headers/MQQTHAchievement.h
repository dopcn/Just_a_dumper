//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface MQQTHAchievement : NSObject
{
    unsigned long long _itemType;
    NSDate *_beginDate;
    NSDate *_endDate;
    unsigned long long _duration;
}

@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
- (void)dealloc;

@end

