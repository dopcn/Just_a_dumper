//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBFilter.h"

@class FBGLContext, NSBundle;

@interface FBOpenGLFilter : FBFilter
{
    FBGLContext *_context;
    NSBundle *_assetBundle;
}

@property(retain, nonatomic) NSBundle *assetBundle; // @synthesize assetBundle=_assetBundle;
- (void).cxx_destruct;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3 time:(CDStruct_1b6d18a9)arg4;
- (void)render:(id)arg1 to:(id)arg2 time:(CDStruct_1b6d18a9)arg3;
- (id)_openGLProgram;
- (id)shaderConstsForSplineSamplers;
- (id)samplers;
- (id)textureFromPath:(id)arg1;
- (id)textureNamed:(id)arg1;
- (id)textureWithContentsOfData:(id)arg1;
- (void)finalizeRendering;
- (id)fullFragmentShader;
- (id)fullVertexShader;
- (id)init;

@end

