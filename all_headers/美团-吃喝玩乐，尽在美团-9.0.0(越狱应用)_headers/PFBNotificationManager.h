//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PushOperationDelegate-Protocol.h"

@class NSString, SAKBaseModel, StrongPushOperation, UIWindow, WeakPushOperation;

@interface PFBNotificationManager : NSObject <PushOperationDelegate>
{
    StrongPushOperation *_strongPushOperation;
    WeakPushOperation *_weakPushOperation;
    UIWindow *_showPushWindow;
    SAKBaseModel *_requestModel;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SAKBaseModel *requestModel; // @synthesize requestModel=_requestModel;
@property(retain, nonatomic) UIWindow *showPushWindow; // @synthesize showPushWindow=_showPushWindow;
@property(retain, nonatomic) WeakPushOperation *weakPushOperation; // @synthesize weakPushOperation=_weakPushOperation;
@property(retain, nonatomic) StrongPushOperation *strongPushOperation; // @synthesize strongPushOperation=_strongPushOperation;
- (void).cxx_destruct;
- (void)pushViewHiddenAllFinishBackCall:(id)arg1;
- (void)handleNotificationQueue:(id)arg1 messageClickBlock:(CDUnknownBlockType)arg2;
- (void)reportReciverStrongPushState:(id)arg1;
- (_Bool)isReportPush:(id)arg1;
- (_Bool)isStrongPush:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

