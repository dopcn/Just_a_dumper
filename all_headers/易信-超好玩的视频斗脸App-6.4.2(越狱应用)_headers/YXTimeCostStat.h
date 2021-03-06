//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface YXTimeCostStat : NSObject
{
    NSString *_eventKey;
    NSString *_category;
    NSString *_label;
    NSDictionary *_attribute;
    NSDate *_statTime;
    double _timeCost;
}

+ (id)statWithKey:(id)arg1 withCategory:(id)arg2 withLable:(id)arg3 withAAttribute:(id)arg4;
@property(nonatomic) double timeCost; // @synthesize timeCost=_timeCost;
@property(retain, nonatomic) NSDate *statTime; // @synthesize statTime=_statTime;
@property(retain, nonatomic) NSDictionary *attribute; // @synthesize attribute=_attribute;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *eventKey; // @synthesize eventKey=_eventKey;
- (void).cxx_destruct;
- (void)enterForceground:(id)arg1;
- (void)enterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

@end

