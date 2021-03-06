//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXModuleProtocol-Protocol.h"

@class NSMutableDictionary, NSString, WXSDKInstance;

@interface WXEBModule : NSObject <WXModuleProtocol>
{
    struct _opaque_pthread_mutex_t mutex;
    WXSDKInstance *weexInstance;
    NSMutableDictionary *_sourceMap;
}

+ (id)wx_export_method_sync_33;
+ (id)wx_export_method_sync_32;
+ (id)wx_export_method_31;
+ (id)wx_export_method_30;
+ (id)wx_export_method_sync_29;
+ (id)wx_export_method_28;
@property(retain, nonatomic) NSMutableDictionary *sourceMap; // @synthesize sourceMap=_sourceMap;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)removeHandler:(id)arg1 forToken:(id)arg2 expressionType:(long long)arg3;
- (void)putHandler:(id)arg1 forToken:(id)arg2 expressionType:(long long)arg3;
- (id)handlerForToken:(id)arg1 expressionType:(long long)arg2;
- (id)handlerMapForToken:(id)arg1;
- (id)transformFactor:(id)arg1 layer:(id)arg2;
- (id)getComputedStyle:(id)arg1;
- (id)supportFeatures;
- (void)unbindAll;
- (void)unbind:(id)arg1;
- (id)bind:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)prepare:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

