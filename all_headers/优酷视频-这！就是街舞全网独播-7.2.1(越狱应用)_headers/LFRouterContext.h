//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LFRouterProtocol-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface LFRouterContext : NSObject <LFRouterProtocol>
{
    NSArray *_practicalComponets;
    NSMutableArray *_controllerList;
}

@property(retain, nonatomic) NSMutableArray *controllerList; // @synthesize controllerList=_controllerList;
@property(retain, nonatomic) NSArray *practicalComponets; // @synthesize practicalComponets=_practicalComponets;
- (void).cxx_destruct;
- (void)closeController:(id)arg1 transition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (_Bool)routeWithUrl:(id)arg1 parameter:(id)arg2 fromController:(id)arg3 targetController:(id)arg4 transition:(unsigned long long)arg5 animated:(_Bool)arg6;
- (_Bool)routeWithUrl:(id)arg1 fromController:(id)arg2 targetController:(id)arg3 transition:(unsigned long long)arg4 animated:(_Bool)arg5;
- (_Bool)routeWithUrl:(id)arg1 parameter:(id)arg2 fromController:(id)arg3 targetControllerAddress:(id *)arg4 transition:(unsigned long long)arg5 animated:(_Bool)arg6;
- (id)targetControllerWithParameter:(id)arg1;
- (_Bool)addNavigationControllerWhenPresent;
- (_Bool)canPresent;
- (_Bool)canPush;
- (unsigned long long)mask;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

