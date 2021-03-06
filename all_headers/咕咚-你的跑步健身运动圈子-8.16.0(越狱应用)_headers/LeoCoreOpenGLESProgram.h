//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface LeoCoreOpenGLESProgram : NSObject
{
    unsigned int _program;
    unsigned int _vertexShader;
    unsigned int _fragmentShader;
    NSMutableArray *_attributes;
    NSMutableArray *_uniforms;
}

@property(nonatomic) unsigned int fragmentShader; // @synthesize fragmentShader=_fragmentShader;
@property(nonatomic) unsigned int vertexShader; // @synthesize vertexShader=_vertexShader;
@property(nonatomic) unsigned int program; // @synthesize program=_program;
@property(retain, nonatomic) NSMutableArray *uniforms; // @synthesize uniforms=_uniforms;
@property(retain, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (void)validate;
- (id)programLog;
- (id)fragmentShaderLog;
- (id)vertexShaderLog;
- (id)logForOpenGLObject:(unsigned int)arg1 infoCallback:(CDUnknownFunctionPointerType)arg2 logFunc:(CDUnknownFunctionPointerType)arg3;
- (unsigned int)indexOfUniform:(id)arg1;
- (unsigned int)indexOfAttribute:(id)arg1;
- (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 content:(id)arg3;
- (void)use;
- (_Bool)link;
- (unsigned int)uniformIndex:(id)arg1;
- (unsigned int)attributeIndex:(id)arg1;
- (void)addAttribute:(id)arg1;
- (id)initWithVertexShaderFile:(id)arg1 fragmentShaderFile:(id)arg2;
- (id)initWithVertexShaderFile:(id)arg1 fragmentShaderString:(id)arg2;
- (id)initWithVertexShaderString:(id)arg1 fragmentShaderFile:(id)arg2;
- (id)initWithVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2;

@end

