//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class CCBlendMode, CCShader, NSDictionary;

@interface CCRenderState : NSObject <NSCopying>
{
    _Bool _immutable;
    CCBlendMode *_blendMode;
    CCShader *_shader;
    NSDictionary *_shaderUniforms;
}

+ (id)debugColor;
+ (id)renderStateWithBlendMode:(id)arg1 shader:(id)arg2 shaderUniforms:(id)arg3 copyUniforms:(_Bool)arg4;
+ (id)renderStateWithBlendMode:(id)arg1 shader:(id)arg2 mainTexture:(id)arg3;
+ (void)flushCache;
+ (void)initialize;
- (void).cxx_destruct;
- (void)transitionRenderer:(id)arg1 FromState:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBlendMode:(id)arg1 shader:(id)arg2 shaderUniforms:(id)arg3 copyUniforms:(_Bool)arg4;
- (id)initWithBlendMode:(id)arg1 shader:(id)arg2 shaderUniforms:(id)arg3;

@end

