//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMBaseUtility.h"

#import "LTMLayerNavigationControlClassService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface LTMLayerNavigationControl : NMBaseUtility <LTMLayerNavigationControlClassService>
{
    NSMutableDictionary *_layers;
}

+ (id)sharedLayerNavigation;
@property(retain, nonatomic) NSMutableDictionary *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (void)removeShowLayers:(Class)arg1;
- (void)registerLayer:(id)arg1 andManager:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

