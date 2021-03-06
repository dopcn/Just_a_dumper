//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface JMHybridManager : NSObject
{
    NSString *_defaultUserAgent;
    NSString *_currentUserAgent;
}

+ (void)copyBundleFilesToSandboxWithVersion:(id)arg1;
+ (id)defaultUserAgent;
+ (id)hybridVersion;
+ (id)h5ContainerVersion;
+ (void)startWithOpenLog:(_Bool)arg1 andUseLocalServer:(_Bool)arg2;
+ (id)sharedJMHybridManager;
@property(copy, nonatomic) NSString *currentUserAgent; // @synthesize currentUserAgent=_currentUserAgent;
@property(copy, nonatomic) NSString *defaultUserAgent; // @synthesize defaultUserAgent=_defaultUserAgent;
- (void).cxx_destruct;

@end

