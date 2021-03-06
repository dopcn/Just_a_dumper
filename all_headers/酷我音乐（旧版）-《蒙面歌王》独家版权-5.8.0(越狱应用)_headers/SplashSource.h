//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableArray;

@interface SplashSource : NSObject
{
    struct dispatch_queue_s *m_Queue;
    NSDateFormatter *_dateFormater;
    NSMutableArray *_taskQueue;
}

+ (id)instance;
@property(retain, nonatomic) NSMutableArray *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) NSDateFormatter *dateFormater; // @synthesize dateFormater=_dateFormater;
- (void)removeTask:(id)arg1 fromQueue:(id)arg2;
- (void)notifyNewTaskInQueue:(id)arg1;
- (id)md5EncodeFileName:(id)arg1;
- (void)asynUpdateSplashFile:(id)arg1;
- (_Bool)saveSplashInfo:(id)arg1 withSource:(int)arg2;
- (id)loadSplashInfo;
- (id)makeNewAdInfoUrl;
- (id)makeAdInfoUrl;
- (id)makeYunyingInfoUrl;
- (void)onSplashBtnPictureComplete:(id)arg1;
- (void)onSplashPictureComplete:(id)arg1;
- (void)onSplashInfoAdRequestComplete:(id)arg1;
- (void)onSplashInfoRequestComplete:(id)arg1;
- (void)cleanData;
- (void)synData:(int)arg1;
- (id)splashInfo4Today:(int)arg1;
- (id)splashBtnPath4Today:(int)arg1;
- (id)splashPath4Today:(int)arg1;
- (id)init;
- (void)dealloc;

@end

