//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface PLCrashReportThreadInfo : NSObject
{
    int _threadNumber;
    NSArray *_stackFrames;
    BOOL _crashed;
    NSArray *_registers;
}

@property(readonly, nonatomic) NSArray *registers; // @synthesize registers=_registers;
@property(readonly, nonatomic) BOOL crashed; // @synthesize crashed=_crashed;
@property(readonly, nonatomic) NSArray *stackFrames; // @synthesize stackFrames=_stackFrames;
@property(readonly, nonatomic) int threadNumber; // @synthesize threadNumber=_threadNumber;
- (void)dealloc;
- (id)initWithThreadNumber:(int)arg1 stackFrames:(id)arg2 crashed:(BOOL)arg3 registers:(id)arg4;

@end

