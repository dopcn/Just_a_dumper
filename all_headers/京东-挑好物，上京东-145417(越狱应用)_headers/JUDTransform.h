//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JUDLength, JUDSDKInstance;

@interface JUDTransform : NSObject
{
    float _rotateAngle;
    float _scaleX;
    float _scaleY;
    JUDLength *_translateX;
    JUDLength *_translateY;
    JUDLength *_originX;
    JUDLength *_originY;
    JUDSDKInstance *_judInstance;
}

@property(nonatomic) __weak JUDSDKInstance *judInstance; // @synthesize judInstance=_judInstance;
- (void).cxx_destruct;
- (double)deg2rad:(double)arg1;
- (double)getAngle:(id)arg1;
- (void)parseScaley:(id)arg1;
- (void)parseScalex:(id)arg1;
- (void)parseScale:(id)arg1;
- (void)parseTranslatey:(id)arg1;
- (void)parseTranslatex:(id)arg1;
- (void)parseTranslate:(id)arg1;
- (void)parseRotate:(id)arg1;
- (void)parseTransformOrigin:(id)arg1;
- (void)parseTransform:(id)arg1;
- (void)applyTransformForView:(id)arg1;
- (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (struct CGAffineTransform)nativeTransformWithoutRotateWithView:(id)arg1;
- (struct CGAffineTransform)nativeTransformWithView:(id)arg1;
@property(readonly, nonatomic) float scaleY;
@property(readonly, nonatomic) float scaleX;
@property(readonly, nonatomic) JUDLength *translateY;
@property(readonly, nonatomic) JUDLength *translateX;
@property(readonly, nonatomic) float rotateAngle;
- (id)initWithCSSValue:(id)arg1 origin:(id)arg2 instance:(id)arg3;

@end

