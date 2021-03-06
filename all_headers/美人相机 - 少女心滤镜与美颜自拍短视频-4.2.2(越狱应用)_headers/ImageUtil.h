//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ImageUtil : NSObject
{
}

+ (id)generatorSplitGeometricImage:(id)arg1 geometriType:(unsigned long long)arg2 pixelModel:(unsigned long long)arg3;
+ (id)resizeImage:(id)arg1 desiredSize:(struct CGSize)arg2;
+ (id)rotateImg:(id)arg1 canvasSize:(struct CGSize)arg2 center:(struct CGPoint)arg3 angle:(double)arg4 mapPoint:(inout struct CGPoint *)arg5 offset:(struct CGPoint)arg6 alpha:(double)arg7 bgImage:(id)arg8;
+ (id)rotateScaleOffsetImg:(id)arg1 center:(struct CGPoint)arg2 radian:(double)arg3 scale:(double)arg4 mpoint:(struct CGPoint)arg5 offset:(struct CGPoint)arg6 alpha:(double)arg7 bgImg:(id)arg8;
+ (id)colorAtPixel:(id)arg1 point:(struct CGPoint)arg2;
+ (id)scaleRotateImage:(id)arg1 scale:(double)arg2 radian:(double)arg3;
+ (id)fanzhuan:(id)arg1;
+ (id)drawImageWithImageArray:(id)arg1 rectArray:(id)arg2 resultSize:(struct CGSize)arg3;
+ (id)getImageWithRect:(struct CGRect)arg1 image:(id)arg2;
+ (id)drawTextSize:(struct CGSize)arg1 font_size:(int)arg2 content:(id)arg3 color:(id)arg4 bg_color:(id)arg5;
+ (id)drawTextSize:(struct CGSize)arg1 font_size:(int)arg2 content:(id)arg3 color:(id)arg4 bg_color:(id)arg5 is_english:(_Bool)arg6;
+ (id)createRoundedRectImage:(id)arg1 size:(struct CGSize)arg2;
+ (id)createNomalRectImage:(id)arg1 size:(struct CGSize)arg2;
+ (struct __CVBuffer *)pixelBufferFromCGImage:(struct CGImage *)arg1 andSize:(struct CGSize)arg2;
+ (struct __CVBuffer *)pixelBufferFromCGImage:(struct CGImage *)arg1 size:(struct CGSize)arg2;
+ (void)writeImagesToMovieAtPath:(id)arg1 destPath:(id)arg2 withSize:(struct CGSize)arg3 frameRate:(float)arg4 delegate:(id)arg5;
+ (void)resizeOneImg:(id)arg1 withSize:(struct CGSize)arg2;
+ (void)resizeImageFitMovie:(id)arg1 withSize:(struct CGSize)arg2;
+ (void)writeImagesToMovieAtAlbum:(id)arg1 withSize:(struct CGSize)arg2 frameRate:(float)arg3 delegate:(id)arg4;
+ (int)MakeGif:(id)arg1 make_param:(id)arg2 dest_path:(id)arg3;
+ (id)CreateGaussBlur:(id)arg1 sigma:(int)arg2 radius:(int)arg3;
+ (id)circleBlur:(id)arg1 radius1:(int)arg2 radius2:(int)arg3 cenx:(int)arg4 ceny:(int)arg5 sigma:(int)arg6 radius:(int)arg7;
+ (id)createCircleMask:(id)arg1 radius1:(int)arg2 radius2:(int)arg3 cenx:(int)arg4 ceny:(int)arg5 sigma:(int)arg6 radius:(int)arg7;
+ (id)linearBlur2:(id)arg1 inner:(int)arg2 outer:(int)arg3 angle:(float)arg4 cenx:(int)arg5 ceny:(int)arg6 sigma:(int)arg7 radius:(int)arg8;
+ (id)linearBlur:(id)arg1 inner:(int)arg2 outer:(int)arg3 angle:(float)arg4 cenx:(int)arg5 ceny:(int)arg6 sigma:(int)arg7 radius:(int)arg8;
+ (id)createLinearMask:(id)arg1 inner:(int)arg2 outer:(int)arg3 angle:(float)arg4 cenx:(int)arg5 ceny:(int)arg6 sigma:(int)arg7 radius:(int)arg8;
+ (id)OplinearMask:(int)arg1 height:(int)arg2 inner:(int)arg3 outer:(int)arg4 cenx:(int)arg5 ceny:(int)arg6;
+ (id)changeBrightnessContrast:(id)arg1 brightness:(int)arg2 contrast:(int)arg3;
+ (id)changeContrast:(id)arg1 contrast:(double)arg2;
+ (id)changeBrightnessContrastSaturation2:(id)arg1 brightness:(int)arg2 contrast:(int)arg3 saturationValue:(float)arg4 sharpen:(int)arg5;
+ (id)changeBrightness:(id)arg1 brightness:(int)arg2;
+ (id)ViewToImage2:(id)arg1 size:(struct CGSize)arg2;
+ (id)ViewToImage3:(id)arg1 size:(struct CGSize)arg2;
+ (id)ViewToImage:(id)arg1 size:(struct CGSize)arg2;
+ (id)CombineImage:(id)arg1 img2:(id)arg2;
+ (id)ScaleImage:(id)arg1 newsize:(struct CGSize)arg2 x:(double)arg3 y:(double)arg4;
+ (id)createMagickHour:(int)arg1 height:(int)arg2 colors:(int *)arg3 locations:(double *)arg4 gradient_num:(int)arg5;
+ (id)createMagickHour:(int)arg1 height:(int)arg2 color:(int)arg3 blur:(int)arg4;
+ (id)createDazzle:(int)arg1 height:(int)arg2 colors:(int *)arg3 locations:(double *)arg4 gradient_num:(int)arg5;
+ (id)createDarkCornerMask:(int)arg1 height:(int)arg2 colors:(int *)arg3 locations:(double *)arg4 gradient_num:(int)arg5;
+ (id)colorFromInt:(int)arg1;
+ (id)drawCircle:(struct CGSize)arg1 x:(float)arg2 y:(float)arg3 r:(int)arg4 color:(id)arg5;
+ (id)addFont:(id)arg1 FontType:(id)arg2 FontSize:(float)arg3 x:(float)arg4 y:(float)arg5 color:(int)arg6 FontText:(id)arg7;
+ (id)fillView:(id)arg1 view:(id)arg2;
+ (id)ScaleSize:(id)arg1 viewsize:(struct CGSize)arg2;
+ (id)resizeHalf:(id)arg1;
+ (id)setImgRectToFillButton:(struct CGRect)arg1 sourceImg:(id)arg2;
+ (id)topAndDownInSize:(id)arg1 viewsize:(struct CGSize)arg2;
+ (id)fillVideoImageTo11:(id)arg1;
+ (id)fillSize:(id)arg1 viewsize:(struct CGSize)arg2;
+ (id)centerInView:(id)arg1 view:(id)arg2;
+ (id)centerInSize:(id)arg1 viewsize:(struct CGSize)arg2;
+ (struct CGSize)fitSize:(struct CGSize)arg1 inSize:(struct CGSize)arg2;
+ (struct CGRect)frameSize:(struct CGSize)arg1 inSize:(struct CGSize)arg2;
+ (id)fitInView:(id)arg1 view:(id)arg2;
+ (id)fitInSize:(id)arg1 viewsize:(struct CGSize)arg2 ishigh:(_Bool)arg3;
+ (id)fitInSize:(id)arg1 viewsize:(struct CGSize)arg2;
+ (id)copyImage:(id)arg1;
+ (id)CreateMask:(unsigned int)arg1 height:(unsigned int)arg2 color:(id)arg3;
+ (id)imageWithBits_alloc:(char *)arg1 withSize:(struct CGSize)arg2;
+ (id)imageWithBits:(char *)arg1 withSize:(struct CGSize)arg2;
+ (id)FromPixData:(char *)arg1 length:(unsigned int)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4;
+ (void)freeStImage:(struct _PocoImage *)arg1;
+ (id)stImage2UIImage_alloced:(struct _PocoImage *)arg1;
+ (id)stImage2UIImageWithoutAlpha:(struct _PocoImage *)arg1;
+ (id)stImage2UIImage:(struct _PocoImage *)arg1;
+ (void)UIImage2stImageWithoutAlpha:(id)arg1 stImage:(struct _PocoImage *)arg2;
+ (void)UIImage2stImage:(id)arg1 stImage:(struct _PocoImage *)arg2;
+ (char *)GetPixData:(id)arg1 length:(unsigned int *)arg2 transYaxis:(_Bool)arg3;
+ (char *)GetPixData:(id)arg1 length:(unsigned int *)arg2;
+ (struct CGSize)fixSize:(struct CGSize)arg1;

@end

