//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FMNetProtocol-Protocol.h"
#import "XModuleProtocol-Protocol.h"

@class FMNetMtopService, NSMutableDictionary, NSString, UIWindow;

@interface FMNetModule : NSObject <XModuleProtocol, FMNetProtocol>
{
    NSMutableDictionary *_mtopApiMap;
    FMNetMtopService *_mtopService;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FMNetMtopService *mtopService; // @synthesize mtopService=_mtopService;
@property(retain, nonatomic) NSMutableDictionary *mtopApiMap; // @synthesize mtopApiMap=_mtopApiMap;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateViewControllerForAnalysis:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)removeResponseFilterHandler:(CDUnknownBlockType)arg1;
- (void)addResponseFilterHandler:(CDUnknownBlockType)arg1;
- (void)removeMtopHandler:(CDUnknownBlockType)arg1 for:(id)arg2;
- (void)addMtopHandler:(CDUnknownBlockType)arg1 for:(id)arg2;
- (id)sendRequestWithMtopRequestModel:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)sendMtopRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (id)initInstance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

