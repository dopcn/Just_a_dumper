//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FTKFlightBaseModuleController.h"

#import "MTPRouterProtocol-Protocol.h"

@class NSString;

@interface FTKFlightListModuleController : FTKFlightBaseModuleController <MTPRouterProtocol>
{
}

+ (id)processNSURL:(id)arg1 fromSource:(id)arg2 needTransfer:(_Bool)arg3;
- (id)modules;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

