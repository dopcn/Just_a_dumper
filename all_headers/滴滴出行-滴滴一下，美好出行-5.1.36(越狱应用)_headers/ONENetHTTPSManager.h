//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ONENetHTTPSManager : NSObject
{
    NSArray *_switchers;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSArray *switchers; // @synthesize switchers=_switchers;
- (void).cxx_destruct;
- (void)traceRequestFailed:(id)arg1 error:(id)arg2;
- (id)tryTransformToHTTPSString:(id)arg1 type:(id)arg2;
- (id)tryTransformToHTTPS:(id)arg1;
- (void)setCommonSwitcherEnable:(_Bool)arg1;
- (id)configurableHTTPSHosts:(id)arg1;
- (id)init;

@end

