//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LMDirector, LMShader;

@interface LMRender : NSObject
{
    unsigned int _vertexBuffer;
    unsigned int _indiceBuffer;
    float _globalRotation;
    LMDirector *_director;
    LMShader *_spriteShader;
}

@property(retain, nonatomic) LMShader *spriteShader; // @synthesize spriteShader=_spriteShader;
@property(nonatomic) __weak LMDirector *director; // @synthesize director=_director;
@property(nonatomic) float globalRotation; // @synthesize globalRotation=_globalRotation;
- (void).cxx_destruct;
- (void)renderScene:(id)arg1 renderTarget:(id)arg2;
- (void)setupSpriteVBO;
- (void)dealloc;
- (id)init;

@end

