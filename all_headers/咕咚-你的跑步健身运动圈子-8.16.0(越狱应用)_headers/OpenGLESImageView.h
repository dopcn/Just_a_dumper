//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LeoCoreInput-Protocol.h"

@class LeoCoreOpenGLESProgram;

@interface OpenGLESImageView : UIView <LeoCoreInput>
{
    unsigned int inputTextureForDisplay;
    int backWidth;
    int backHeight;
    unsigned int displayRenderBuffer;
    unsigned int displayFrameBuffer;
    LeoCoreOpenGLESProgram *program;
    int displayPositionAttribute;
    int displayTextureCoordinateAttribute;
    int displayInputTextureUniform;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (struct CGSize)maximumOutputSize;
- (void)setInputSize:(struct CGSize)arg1;
- (long long)nextAvailableTextureIndex;
- (void)setInputTexture:(unsigned int)arg1 atIndex:(long long)arg2;
- (void)newFrameReady;
- (void)presentFrameBuffer;
- (void)setDisplayFrameBuffer;
- (void)destoryDisplayFrameBuffer;
- (void)createDisplayFrameBuffer;
- (void)dealloc;
- (void)config;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

