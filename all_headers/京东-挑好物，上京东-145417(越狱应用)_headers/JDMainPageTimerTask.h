//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JDMainPageTimerTask : NSObject
{
    NSObject *_observer;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
    double _timeRemain;
}

@property(nonatomic) double timeRemain; // @synthesize timeRemain=_timeRemain;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) __weak NSObject *observer; // @synthesize observer=_observer;
- (void).cxx_destruct;

@end

