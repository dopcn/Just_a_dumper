//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (X)
+ (id)mimeTypeByGuessingFromData:(id)arg1;
+ (id)blurImageWithView:(id)arg1 scale:(double)arg2 blurLevel:(double)arg3;
+ (id)imageWithView:(id)arg1;
+ (id)imageWithImage:(id)arg1 alpha:(double)arg2;
+ (id)imageWithColor:(id)arg1 andSize:(struct CGSize)arg2;
+ (id)resizeableImageNamed:(id)arg1;
+ (id)resizeableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets)arg2;
+ (id)resizeableImageNamed:(id)arg1 capLeft:(double)arg2 capTop:(double)arg3;
+ (id)imageWithContentsOfFile:(id)arg1 rect:(struct CGRect)arg2;
+ (id)imageNamed:(id)arg1 rect:(struct CGRect)arg2;
+ (id)imageNamed:(id)arg1 scale:(float)arg2;
+ (id)imageWithFileInMainBundle:(id)arg1 ofType:(id)arg2;
+ (id)imageWithURL:(id)arg1;
- (struct CGSize)getCGImageSize:(struct CGImageSource *)arg1;
- (void)writeCGImageRefToFile:(struct CGImage *)arg1 path:(id)arg2;
- (id)imageWithGaussianBlur9;
- (id)blurImageWithRadius:(double)arg1 tintColor:(id)arg2 saturationDeltaFactor:(double)arg3 maskImage:(id)arg4;
- (id)xl_stretchToImageWithCapInsets:(struct UIEdgeInsets)arg1 newSize:(struct CGSize)arg2;
- (id)rotateImage:(double)arg1;
- (id)scaleImage:(double)arg1;
- (id)transformToSize:(struct CGSize)arg1;
- (_Bool)writeToFile:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 color:(id)arg2;
- (id)roundedCornersImageWithRefSize:(struct CGSize)arg1 andCornerRadius:(double)arg2 cornersType:(long long)arg3;
- (id)getImageCutIntoRect:(struct CGRect)arg1;
- (id)imageRotateToUp;
- (id)resizableImageWithCapInsets_x:(struct UIEdgeInsets)arg1;
@end

