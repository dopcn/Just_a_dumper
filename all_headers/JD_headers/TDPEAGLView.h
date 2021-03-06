//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLKit/GLKView.h>

@class NSString, TDPIrrViewController;
@protocol TDPEAGLViewDelegate;

@interface TDPEAGLView : GLKView
{
    struct TDPView *cppView;
    float _lastScale;
    long long _type;
    NSString *_modelPath;
    NSString *_password;
    TDPIrrViewController<TDPEAGLViewDelegate> *_irrViewController;
}

@property(nonatomic) float lastScale; // @synthesize lastScale=_lastScale;
@property(nonatomic) __weak TDPIrrViewController<TDPEAGLViewDelegate> *irrViewController; // @synthesize irrViewController=_irrViewController;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, copy, nonatomic) NSString *modelPath; // @synthesize modelPath=_modelPath;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (const char *)getInViewString;
- (void)pause;
- (void)resume;
- (void)onReset;
- (void)onSensorChanged:(int)arg1 timestamp:(long long)arg2 values:(float *)arg3;
- (void)onRotation:(float)arg1 y:(float)arg2 z:(float)arg3;
- (void)onResize:(float)arg1 width:(float)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)onDraw;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)panch:(id)arg1;
- (void)pinch:(id)arg1;
- (void)addFilesPath:(id)arg1;
- (long long)getCurrentSceneType;
- (void)getModelPositionWithCameraX:(float *)arg1 cameraY:(float *)arg2 modelX:(float *)arg3 modelY:(float *)arg4;
- (long long)transform:(_Bool)arg1 infoString:(const char *)arg2;
- (long long)loadSceneWithPath:(id)arg1;
- (long long)loadModel;
- (id)initWithFrame:(struct CGRect)arg1 context:(id)arg2 filesPath:(id)arg3 modelPath:(id)arg4 password:(id)arg5 type:(long long)arg6 irrViewControllr:(id)arg7;
- (void)dealloc;

@end

