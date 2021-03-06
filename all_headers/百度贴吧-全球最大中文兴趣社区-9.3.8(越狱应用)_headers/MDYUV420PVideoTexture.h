//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MD360Texture.h"

#import "YUV420PTextureCallback-Protocol.h"

@class NSString;
@protocol IMDYUV420PProvider;

@interface MDYUV420PVideoTexture : MD360Texture <YUV420PTextureCallback>
{
    _Bool _mRendererBegin;
    id <IMDYUV420PProvider> _mProvider;
    unsigned int *_textures;
}

+ (id)createWithProvider:(id)arg1;
@property(nonatomic) _Bool mRendererBegin; // @synthesize mRendererBegin=_mRendererBegin;
@property(nonatomic) unsigned int *textures; // @synthesize textures=_textures;
@property(retain, nonatomic) id <IMDYUV420PProvider> mProvider; // @synthesize mProvider=_mProvider;
- (void).cxx_destruct;
- (_Bool)updateTexture:(id)arg1;
- (void)destroy;
- (void)texture:(struct MDVideoFrame *)arg1;
- (void)createTexture:(id)arg1 program:(id)arg2;
- (id)initWithProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

