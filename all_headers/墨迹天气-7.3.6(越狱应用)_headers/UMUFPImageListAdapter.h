//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UMUFPHandleAdapter.h"

#import "UMUFPWaterFlowViewDataSource-Protocol.h"

@class NSString;

@interface UMUFPImageListAdapter : UMUFPHandleAdapter <UMUFPWaterFlowViewDataSource>
{
}

- (double)waterFlowView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)waterFlowView:(id)arg1 relayoutCellSubview:(id)arg2 withIndexPath:(id)arg3 shouldLazyLoadImage:(_Bool)arg4;
- (id)waterFlowView:(id)arg1 cellForRowAtIndexPath:(id)arg2 baseCell:(id)arg3;
- (long long)numberOfAllWaterFlowView:(id)arg1;
- (long long)numberOfColumsInWaterFlowView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

