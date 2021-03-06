//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FSVideoEffectGPUAction.h"

@class FSImageGhostTrailFilter, FSVideoEffectGhostTrailActionXMLItem;

@interface FSVideoEffectGhostTrailAction : FSVideoEffectGPUAction
{
    FSVideoEffectGhostTrailActionXMLItem *_ghostTrailEffectItem;
    FSImageGhostTrailFilter *_ghostTrailFilter;
}

@property(retain, nonatomic) FSImageGhostTrailFilter *ghostTrailFilter; // @synthesize ghostTrailFilter=_ghostTrailFilter;
@property(retain, nonatomic) FSVideoEffectGhostTrailActionXMLItem *ghostTrailEffectItem; // @synthesize ghostTrailEffectItem=_ghostTrailEffectItem;
- (void).cxx_destruct;
- (void)setVideoTime:(double)arg1;
- (void)clearCachedBuffer;
- (void)reset;
- (void)createFilter;
- (id)outputFilter;
- (void)removeAllTargets;
- (void)dealloc;
- (id)initWithXMLItem:(id)arg1;

@end

