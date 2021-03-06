//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, UIImage;

@interface MGIDCardQualityResult : NSObject
{
    struct MGIDCardAttr _attr;
    NSMutableArray *_fails;
    UIImage *_image;
    struct CGRect _roi;
}

@property(readonly) UIImage *image; // @synthesize image=_image;
@property(readonly) NSArray *fails; // @synthesize fails=_fails;
@property(readonly) struct MGIDCardAttr attr; // @synthesize attr=_attr;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getImageDataWithMaxSize:(int)arg1 isPortrait:(_Bool)arg2 andJPEGCompressionQuality:(double)arg3 andNeedEncrypt:(_Bool)arg4 andNeedWatermark:(_Bool)arg5 andCode:(int)arg6;
- (id)croppedImageOfPortraitWithMaxSize:(int)arg1;
- (id)croppedImageOfPortrait;
- (id)croppedImageOfIDCardWithMaxSize:(int)arg1;
- (id)croppedImageOfIDCard;
- (id)croppedImage:(struct CGRect)arg1 maxSize:(int)arg2;
- (_Bool)isValid;
- (id)initWithImage:(id)arg1 andAttr:(struct MGIDCardAttr)arg2 andROI:(struct CGRect)arg3 andSide:(int)arg4;
- (void)dealloc;
- (float)dist:(struct CGPoint)arg1:(struct CGPoint)arg2;

@end

