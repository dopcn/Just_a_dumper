//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "OALSuspendManager-Protocol.h"

@class ALContext, NSArray, NSMutableArray, NSOperationQueue, NSString, OALSuspendHandler;

@interface OpenALManager : NSObject <OALSuspendManager>
{
    NSMutableArray *devices;
    OALSuspendHandler *suspendHandler;
    NSOperationQueue *operationQueue;
    ALContext *realCurrentContext;
}

+ (void)purgeSharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceSynch;
+ (id)sharedInstanceNoSynch;
@property(readonly, retain, nonatomic) NSArray *devices; // @synthesize devices;
@property(nonatomic) ALContext *realCurrentContext; // @synthesize realCurrentContext;
- (void)notifyDeviceDeallocating:(id)arg1;
- (void)notifyDeviceInitializing:(id)arg1;
- (void)clearAllBuffers;
- (id)bufferAsyncFromUrl:(id)arg1 reduceToMono:(_Bool)arg2 target:(id)arg3 selector:(SEL)arg4;
- (id)bufferAsyncFromUrl:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)bufferAsyncFromFile:(id)arg1 reduceToMono:(_Bool)arg2 target:(id)arg3 selector:(SEL)arg4;
- (id)bufferAsyncFromFile:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)bufferFromUrl:(id)arg1 reduceToMono:(_Bool)arg2;
- (id)bufferFromUrl:(id)arg1;
- (id)bufferFromFile:(id)arg1 reduceToMono:(_Bool)arg2;
- (id)bufferFromFile:(id)arg1;
- (void)setSuspended:(_Bool)arg1;
@property(readonly, nonatomic) _Bool suspended;
@property(nonatomic) _Bool interrupted;
@property(nonatomic) _Bool manuallySuspended;
- (void)removeSuspendListener:(id)arg1;
- (void)addSuspendListener:(id)arg1;
@property(nonatomic) int renderingQuality;
@property(nonatomic) double mixerOutputFrequency;
@property(readonly, retain, nonatomic) NSString *defaultDeviceSpecifier;
@property(readonly, retain, nonatomic) NSString *defaultCaptureDeviceSpecifier;
@property(nonatomic) ALContext *currentContext;
@property(readonly, retain, nonatomic) NSArray *availableDevices;
@property(readonly, retain, nonatomic) NSArray *availableCaptureDevices;
- (void)dealloc;
- (id)init;
- (id)autoreleaseDoSomething;
- (id)autoreleaseDoNothing;
- (id)autorelease;
- (oneway void)releaseDoSomething;
- (oneway void)releaseDoNothing;
- (oneway void)release;
- (unsigned long long)retainCountDoSomething;
- (unsigned long long)retainCountDoNothing;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

