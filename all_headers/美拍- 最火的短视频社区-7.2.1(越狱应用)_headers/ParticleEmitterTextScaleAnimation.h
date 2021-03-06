//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ParticleEmitterTextBaseAnimation.h"

@interface ParticleEmitterTextScaleAnimation : ParticleEmitterTextBaseAnimation
{
    float fBackColorRect[4];
    _Bool _mirror;
    double _textBeginScale;
}

@property(nonatomic) double textBeginScale; // @synthesize textBeginScale=_textBeginScale;
@property(nonatomic) _Bool mirror; // @synthesize mirror=_mirror;
- (_Bool)initParticle:(int)arg1 textSize:(struct CGSize)arg2 scale:(float)arg3 alpha:(float)arg4;
- (float *)getBackColorRect;
- (void)initParticleWithTextObject:(id)arg1;
- (void)updateWithDelta:(float)arg1;
- (id)init;

@end

