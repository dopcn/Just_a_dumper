//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class EAGLContext, NSTimer, SMEMapView;

@interface EAGLView : UIView
{
    int backingWidth;
    int backingHeight;
    EAGLContext *context;
    unsigned int viewRenderbuffer;
    unsigned int viewFramebuffer;
    unsigned int depthRenderbuffer;
    _Bool resetBuffer;
    NSTimer *animationTimer;
    long long animationFrameInterval;
    _Bool animating;
    id displayLink;
    _Bool displayLinkSupported;
    _Bool active;
    _Bool layoutFinished;
    SMEMapView *mapView;
}

+ (Class)layerClass;
@property(nonatomic) SMEMapView *mapView; // @synthesize mapView;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating;
@property(nonatomic) NSTimer *animationTimer; // @synthesize animationTimer;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context;
- (void)dealloc;
- (void)checkGLError:(_Bool)arg1;
@property(nonatomic) long long animationFrameInterval;
- (void)destory;
- (void)stopAnimation;
- (void)startAnimation;
- (void)destroyFramebuffer;
- (void)setupView;
- (_Bool)createFramebufferIfMissing;
- (void)layoutSubviews;
- (void)drawView;
- (void)didMoveToWindow;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)resizeNative:(struct CGSize)arg1;
- (void)appWillResignActive;
- (void)appDidBecomeActive;
- (id)initWithFrame:(struct CGRect)arg1;

@end

