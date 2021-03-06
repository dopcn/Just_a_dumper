//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface InternetTimeTool : NSObject
{
    _Bool _isOpen;
    NSDate *_serverTime;
    long long _serverUpTimes;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) long long serverUpTimes; // @synthesize serverUpTimes=_serverUpTimes;
@property(retain, nonatomic) NSDate *serverTime; // @synthesize serverTime=_serverTime;
- (void).cxx_destruct;
- (_Bool)InternetTimeStatus;
- (void)closeInternetTime;
- (void)openInternetTime;
- (long long)getTimeBetweenInternetAndSys;
- (id)getInternetTime;
- (void)internetTimeSet:(double)arg1;
- (long long)sysUpTime;
- (id)init;

@end

