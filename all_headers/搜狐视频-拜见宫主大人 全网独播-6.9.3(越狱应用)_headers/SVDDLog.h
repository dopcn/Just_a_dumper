//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DDLog.h"

@class DDFileLogger, NSTimer;

@interface SVDDLog : DDLog
{
    NSTimer *_countDownTimer;
    DDFileLogger *_fileLogger;
}

+ (void)setDebugLogEnable:(_Bool)arg1;
+ (void)load;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) DDFileLogger *fileLogger; // @synthesize fileLogger=_fileLogger;
- (void)upLoadLogFilesToCatonServer;
- (void)uploadLogFileToServer;
- (void)countDownTimerFired:(id)arg1;
- (void)stopUploadTimer;
- (void)startUploadTimer;
- (void)clearLogFile;
- (void)removeFileLogger;
- (void)setupFileLogger;
- (void)configureLoggers;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

