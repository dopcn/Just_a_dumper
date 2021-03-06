//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NativeRapidFeedbackSpec-Protocol.h"
#import "RCTFBSessionModule-Protocol.h"

@class FBUserSession, NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface FBRapidFeedbackNativeModule : NSObject <NativeRapidFeedbackSpec, RCTFBSessionModule>
{
    RCTBridge *_bridge;
    FBUserSession *_session;
}

+ (const struct RCTMethodInfo *)__rct_export__230;
+ (void)load;
+ (id)moduleName;
@property(nonatomic) __weak FBUserSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)showSurvey:(id)arg1 rootTag:(double)arg2 contextData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

