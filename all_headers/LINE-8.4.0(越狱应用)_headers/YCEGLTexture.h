//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, YCEGLContext;

@interface YCEGLTexture : NSObject
{
    YCEGLContext *mContext;
    int mHandleCount;
    unsigned int mHandles[3];
    int mWidth;
    int mHeight;
    _Bool mHasImage;
    unsigned int mTextureIndex;
    unsigned int mPixelFormat;
    int mPixelByte;
    NSArray *mDefaultVariableNames;
}

@property(retain, nonatomic) NSArray *defaultVariableNames; // @synthesize defaultVariableNames=mDefaultVariableNames;
@property(nonatomic) unsigned int textureIndex; // @synthesize textureIndex=mTextureIndex;
@property(readonly, nonatomic) _Bool hasImage; // @synthesize hasImage=mHasImage;
@property(readonly, nonatomic) int height; // @synthesize height=mHeight;
@property(readonly, nonatomic) int width; // @synthesize width=mWidth;
- (void).cxx_destruct;
- (void)setImageBuffer:(const void *)arg1;
- (_Bool)setImageWidth:(int)arg1 height:(int)arg2;
- (void)bindWithTextureUnits;
- (void)bindWithProgram:(id)arg1 variableNames:(id)arg2;
- (void)bindWithProgram:(id)arg1;
@property(readonly, nonatomic) unsigned int handle;
- (void)dealloc;
- (id)initWithContext:(id)arg1 option:(id)arg2;
- (id)initWithContext:(id)arg1 handleCount:(int)arg2;

@end

