//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OIFilter.h"

@class OITexture;

@interface PORSDarkenCornerFilter : OIFilter
{
    OITexture *darkenCornerTexture;
    int multiplyOpacity;
    unsigned int filterInputTextureUniform;
    unsigned int filterDarkenCornerTextureUniform;
    _Bool _isDarkenMaskUpdating;
}

@property _Bool isDarkenMaskUpdating; // @synthesize isDarkenMaskUpdating=_isDarkenMaskUpdating;
- (void).cxx_destruct;
- (void)renderRect:(struct CGRect)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)updateDarkenCornerEffectImage:(id)arg1 blendOpacity:(int)arg2;
- (id)initWithContentSize:(struct CGSize)arg1;
- (id)init;

@end

