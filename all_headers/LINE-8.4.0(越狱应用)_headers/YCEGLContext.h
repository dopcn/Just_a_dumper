//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EAGLContext;

@interface YCEGLContext : NSObject
{
    EAGLContext *mOpenGLContext;
    struct __CVOpenGLESTextureCache *mCoreVideoTextureCache;
    _Bool mActive;
}

+ (id)currentOpenGLContext;
@property(readonly, nonatomic) EAGLContext *openGLContext; // @synthesize openGLContext=mOpenGLContext;
- (void).cxx_destruct;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (_Bool)performBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) struct __CVOpenGLESTextureCache *coreVideoTextureCache;
- (void)dealloc;
- (id)initWithOpenGLContext:(id)arg1;

@end

