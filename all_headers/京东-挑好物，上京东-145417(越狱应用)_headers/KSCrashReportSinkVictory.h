//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSCrashReportFilter-Protocol.h"

@class KSReachableOperationKSCrash, NSString, NSURL;

@interface KSCrashReportSinkVictory : NSObject <KSCrashReportFilter>
{
    NSURL *_url;
    NSString *_userName;
    NSString *_userEmail;
    KSReachableOperationKSCrash *_reachableOperation;
}

+ (id)sinkWithURL:(id)arg1 userName:(id)arg2 userEmail:(id)arg3;
@property(retain, nonatomic) KSReachableOperationKSCrash *reachableOperation; // @synthesize reachableOperation=_reachableOperation;
@property(retain, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)filterReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)defaultCrashReportFilterSet;
- (id)initWithURL:(id)arg1 userName:(id)arg2 userEmail:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

