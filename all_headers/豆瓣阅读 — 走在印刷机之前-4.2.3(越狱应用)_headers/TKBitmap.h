//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@interface TKBitmap : NSObject <NSCopying>
{
    void *_bitmap;
    struct CGImage *_cgImage;
    struct CGContext *_cgContext;
}

+ (id)bitmapWithContentsOfPNGFile:(id)arg1;
+ (id)openGLBackedBitmapWithSize:(struct CGSize)arg1 format:(unsigned long long)arg2 context:(id)arg3 options:(unsigned long long)arg4;
+ (id)bitmapWithSize:(struct CGSize)arg1 format:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (void *)internalBitmap;
- (_Bool)copyDataToBitmap:(id)arg1;
- (void)wipeoutWithCGColor:(struct CGColor *)arg1;
- (void)wipeout;
- (void)unlock;
- (_Bool)lock;
- (_Bool)isLocked;
- (char *)mutableBytePtr;
- (const char *)bytePtr;
@property(readonly, nonatomic, getter=isFlipped) _Bool flipped;
@property(readonly, nonatomic) unsigned long long backingType;
@property(readonly, nonatomic) unsigned long long format;
@property(readonly, nonatomic) unsigned long long bytesPerRow;
@property(readonly, nonatomic) struct CGSize size;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithContentsOfPNGFile:(id)arg1;
- (id)initOpenGLBackedWithSize:(struct CGSize)arg1 format:(unsigned long long)arg2 context:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithSize:(struct CGSize)arg1 format:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)init;
- (void)applyShadowTintColor:(id)arg1 toBitmap:(id)arg2;
- (void)applyShadowTintColor:(id)arg1;
- (void)applyAlphaBlendWithTopBitmap:(id)arg1 bottomBitmap:(id)arg2;
- (void)applyAffineWarp:(struct CGAffineTransform)arg1 toBitmap:(id)arg2;
- (void)applyAffineWarp:(struct CGAffineTransform)arg1;
- (void)writeToPNGFile:(id)arg1;
- (void)unbindOpenGLBacked;
- (void)bindOpenGLBacked;
- (void)flushOpenGLBacked;
- (id)uiImage;
- (struct CGContext *)cgContext;
- (struct CGImage *)cgImage;
- (void)applyContentsShadow:(id)arg1 contentsScale:(double)arg2;
- (void)applyContentsShadow:(id)arg1;
- (void)applyGaussianConvolutionWithRadius:(double)arg1 toBitmap:(id)arg2 temporaryBitmap:(id)arg3;
- (void)applyGaussianConvolutionWithRadius:(double)arg1 toBitmap:(id)arg2;
- (void)applyGaussianConvolutionWithKernelSize:(unsigned long long)arg1 toBitmap:(id)arg2 temporaryBitmap:(id)arg3;
- (void)applyGaussianConvolutionWithKernelSize:(unsigned long long)arg1 toBitmap:(id)arg2;
- (void)applyBoxConvolutionWithKernelSize:(unsigned long long)arg1 toBitmap:(id)arg2;
- (void)_applyBoxConvolutionWithKernelSize:(unsigned long long)arg1 toBitmap:(id)arg2 tempBuffer:(id)arg3;
- (id)_tempBufferForBoxConvolutionWithKernelSize:(unsigned long long)arg1 toBitmap:(id)arg2;

@end

