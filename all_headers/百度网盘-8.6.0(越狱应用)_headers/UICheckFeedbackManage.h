//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NewFeedbackDelegate-Protocol.h"

@class NSString, UFOCheckNewFeedback;

@interface UICheckFeedbackManage : NSObject <NewFeedbackDelegate>
{
    UFOCheckNewFeedback *_feedback;
    long long _feebackType;
}

+ (id)sharedInstance;
@property(nonatomic) long long feebackType; // @synthesize feebackType=_feebackType;
@property(retain, nonatomic) UFOCheckNewFeedback *feedback; // @synthesize feedback=_feedback;
- (void).cxx_destruct;
- (void)handleAppWillEnterForegroundNotification:(id)arg1;
- (void)handleAppLogoutNotification:(id)arg1;
- (void)handleAppLoginNotification:(id)arg1;
- (void)addObserver;
- (void)notifyHasNewFeedback:(_Bool)arg1;
- (void)dealloc;
- (void)endCheckFeedback;
- (void)startCheckFeedback:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

