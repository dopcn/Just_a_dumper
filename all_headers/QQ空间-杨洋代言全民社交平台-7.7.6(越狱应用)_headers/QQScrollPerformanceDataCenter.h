//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, NSString, QQScrollPerformanceTracker;
@protocol ScrollPerformanceDelegate;

@interface QQScrollPerformanceDataCenter : NSObject
{
    NSMutableDictionary *_paraDic;
    NSRecursiveLock *_lock;
    NSString *_currentKey;
    NSString *_uin;
    NSString *_pid;
    NSString *_versionName;
    _Bool _isTracking;
    _Bool _enableTrack;
    _Bool _hasUpload;
    _Bool _hasReadData;
    int _scrollType;
    id <ScrollPerformanceDelegate> _delegate;
    QQScrollPerformanceTracker *_performanceTracker;
}

+ (id)getInstance;
@property(retain, nonatomic) QQScrollPerformanceTracker *performanceTracker; // @synthesize performanceTracker=_performanceTracker;
@property int scrollType; // @synthesize scrollType=_scrollType;
@property(nonatomic) id <ScrollPerformanceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)FrameDropParaDir;
- (void)saveParameter;
- (id)getKeyForType:(int)arg1;
- (void)appendPara:(CDStruct_a5aee9c1)arg1 forArray:(id)arg2;
- (void)appendDropDurationPara:(CDStruct_a5aee9c1)arg1 forArray:(id)arg2;
- (id)getDropArrayForPara:(CDStruct_a5aee9c1)arg1;
- (id)getDropDurationArrayForPara:(CDStruct_a5aee9c1)arg1;
- (void)setFrameDic:(id)arg1 type:(int)arg2 para:(CDStruct_a5aee9c1)arg3;
- (void)clear;
- (void)stopWithKey:(id)arg1;
- (void)startWithKey:(id)arg1;
- (void)appWillTerminate;
- (void)enterBackground;
- (id)getCurrentKey;
- (void)setVersionname:(id)arg1;
- (void)setPid:(id)arg1;
- (void)setUin:(id)arg1;
- (void)startTracking;
- (void)uploadToAPM;
- (id)init;

@end

