//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CCConfiguration : NSObject
{
    unsigned long long _graphicsAPI;
    _Bool _configured;
    _Bool _openGLInitialized;
    int _maxTextureSize;
    _Bool _supportsPVRTC;
    _Bool _supportsNPOT;
    _Bool _supportsBGRA8888;
    _Bool _supportsDiscardFramebuffer;
    _Bool _supportsShareableVAO;
    int _maxSamplesAllowed;
    int _maxTextureUnits;
    _Bool _supportsPackedDepthStencil;
    unsigned int _OSVersion;
}

+ (id)alloc;
+ (id)sharedConfiguration;
@property(readonly, nonatomic) unsigned int OSVersion; // @synthesize OSVersion=_OSVersion;
- (void)dumpInfo;
@property(readonly, nonatomic) _Bool supportsShareableVAO; // @synthesize supportsShareableVAO=_supportsShareableVAO;
@property(readonly, nonatomic) _Bool supportsDiscardFramebuffer; // @synthesize supportsDiscardFramebuffer=_supportsDiscardFramebuffer;
@property(readonly, nonatomic) _Bool supportsBGRA8888; // @synthesize supportsBGRA8888=_supportsBGRA8888;
@property(readonly, nonatomic) _Bool supportsPackedDepthStencil;
@property(readonly, nonatomic) _Bool supportsPVRTC; // @synthesize supportsPVRTC=_supportsPVRTC;
@property(readonly, nonatomic) _Bool supportsNPOT; // @synthesize supportsNPOT=_supportsNPOT;
@property(readonly, nonatomic) int maxTextureUnits; // @synthesize maxTextureUnits=_maxTextureUnits;
@property(readonly, nonatomic) int maxTextureSize; // @synthesize maxTextureSize=_maxTextureSize;
- (void)configure;
- (void)getOpenGLvariables;
- (long long)runningDevice;
- (_Bool)checkForGLExtension:(id)arg1;
@property(readonly, nonatomic) unsigned long long graphicsAPI;
- (id)init;

@end

