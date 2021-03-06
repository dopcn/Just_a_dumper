//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FSVideoEffectGPUAction.h"

@class FSVideoEffectShaderActionXMLItem, FSVideoEffectShaderFilter;

@interface FSVideoEffectShaderAction : FSVideoEffectGPUAction
{
    FSVideoEffectShaderActionXMLItem *_shaderXMLItem;
    FSVideoEffectShaderFilter *_filter;
}

@property(retain, nonatomic) FSVideoEffectShaderFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) FSVideoEffectShaderActionXMLItem *shaderXMLItem; // @synthesize shaderXMLItem=_shaderXMLItem;
- (void).cxx_destruct;
- (void)setVideoTime:(double)arg1;
- (void)createFilter;
- (id)outputFilter;
- (void)removeAllTargets;
- (id)initWithXMLItem:(id)arg1;

@end

