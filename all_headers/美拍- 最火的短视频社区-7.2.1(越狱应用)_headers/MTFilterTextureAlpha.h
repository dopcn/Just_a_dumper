//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@class MTMovieTexture;

@interface MTFilterTextureAlpha : GPUImageFilter
{
    MTMovieTexture *_texture;
    unsigned int _progress;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _currentTime;
    unsigned long long _animationCount;
    struct __MTTextureKeyData **_textureKeyDatas;
    int mTextureRotation;
    unsigned int _matrix;
}

+ (union _GLKMatrix4)matrixForRotationMode:(int)arg1 rect:(struct CGRect)arg2 sceneSize:(struct CGSize)arg3;
- (void).cxx_destruct;
- (void)changeTextureRotation:(int)arg1;
- (void)changeTexture:(id)arg1;
- (void)changeTexturePosition:(id)arg1 textureRotation:(int)arg2;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (id)initWithTexture:(id)arg1 animations:(id)arg2 textureRotation:(int)arg3;
- (void)addAnimation:(id)arg1;
- (void)dealloc;

@end

