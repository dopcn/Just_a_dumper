//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface IGDirectMessageLoggingContext : NSObject
{
    long long _triggerType;
    NSDate *_triggerTime;
}

+ (id)debugContext;
+ (id)autoRetryContext;
+ (id)manualRetryContext;
+ (id)manualContext;
@property(retain, nonatomic) NSDate *triggerTime; // @synthesize triggerTime=_triggerTime;
@property(nonatomic) long long triggerType; // @synthesize triggerType=_triggerType;
- (void).cxx_destruct;
- (id)initWithTriggerType:(long long)arg1 triggerTime:(id)arg2;

@end

