//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;

@interface BaiduMobStatBgTimer : NSObject
{
    NSTimer *_backgroundTimer;
    unsigned long long _currentBgTaskId;
}

+ (id)sharedTimer;
@property(nonatomic) unsigned long long currentBgTaskId; // @synthesize currentBgTaskId=_currentBgTaskId;
@property(retain, nonatomic) NSTimer *backgroundTimer; // @synthesize backgroundTimer=_backgroundTimer;
- (void).cxx_destruct;
- (void)backgroundSessionEnd;
- (void)clearTimer;
- (void)clearTask;
- (void)startTimer;
- (id)init;

@end

