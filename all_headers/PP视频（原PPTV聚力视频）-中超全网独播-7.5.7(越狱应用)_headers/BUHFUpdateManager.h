//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BUTracingLogManager, NSDate;

@interface BUHFUpdateManager : NSObject
{
    NSDate *_lastDate;
    BUTracingLogManager *_tracingLogManager;
}

+ (id)sharedManager;
@property(retain, nonatomic) BUTracingLogManager *tracingLogManager; // @synthesize tracingLogManager=_tracingLogManager;
@property(retain, nonatomic) NSDate *lastDate; // @synthesize lastDate=_lastDate;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)startUpdateService;
- (void)dealloc;
- (id)init;

@end

