//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "bbkxMovieGLRenderer-Protocol.h"

@interface bbkxMovieGLRenderer_RGB : NSObject <bbkxMovieGLRenderer>
{
    int _uniformSampler;
    unsigned int _texture;
}

- (void)dealloc;
- (_Bool)prepareRender;
- (void)setFrame:(id)arg1;
- (void)resolveUniforms:(unsigned int)arg1;
- (id)fragmentShader;
- (_Bool)isValid;

@end

