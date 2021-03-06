//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OIFilter.h"

@interface OIToneFilter : OIFilter
{
    float red_;
    float green_;
    float blue_;
    float percentage_;
    float targetRed_;
    float targetGreen_;
    float targetBlue_;
    float targetPercentage_;
    float originalRed_;
    float originalGreen_;
    float originalBlue_;
    float originalPercentage_;
}

+ (id)fragmentShaderFilename;
@property(nonatomic) float percentage; // @synthesize percentage=percentage_;
@property(nonatomic) float blue; // @synthesize blue=blue_;
@property(nonatomic) float green; // @synthesize green=green_;
@property(nonatomic) float red; // @synthesize red=red_;
- (void)setAnimationParametersToTargetForFinish;
- (void)setAnimationParametersToOriginalForRepeat;
- (void)calculateAnimationParametersWithFactor:(double)arg1;
- (id)initWithRed:(float)arg1 green:(double)arg2 blue:(double)arg3 percentage:(double)arg4;

@end

