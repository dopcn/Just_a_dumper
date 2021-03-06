//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FSVideoEffectGPUAction.h"

@class FSBlendImageFilter, FSVideoEffectWatermarkActionXMLItem, UIImage;

@interface FSVideoEffectWatermarkAction : FSVideoEffectGPUAction
{
    FSVideoEffectWatermarkActionXMLItem *_watermarkXMLItem;
    UIImage *_watermarkImage;
    FSBlendImageFilter *_blendImageFilter;
}

@property(retain, nonatomic) FSBlendImageFilter *blendImageFilter; // @synthesize blendImageFilter=_blendImageFilter;
@property(retain, nonatomic) UIImage *watermarkImage; // @synthesize watermarkImage=_watermarkImage;
@property(retain, nonatomic) FSVideoEffectWatermarkActionXMLItem *watermarkXMLItem; // @synthesize watermarkXMLItem=_watermarkXMLItem;
- (void).cxx_destruct;
- (void)createFilter;
- (id)outputFilter;
- (void)removeAllTargets;
- (void)dealloc;
- (id)initWithXMLItem:(id)arg1;

@end

