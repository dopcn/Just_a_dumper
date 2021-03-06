//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface BlendEffectSingleInfo : NSObject <NSCoding>
{
    unsigned long long _frameCount;
    int _currentFrame;
    _Bool _isBackGround;
    _Bool _isCycle;
    _Bool _isStatic;
    _Bool _isVideo;
    long long _type;
    long long _level;
    NSString *_note;
    NSArray *_texture16;
    NSArray *_texture9;
    NSArray *_texture1;
    NSArray *_texture4;
    NSArray *_textureArray;
}

+ (id)texturePathFromDic:(id)arg1;
+ (id)praseFromDic:(id)arg1;
@property(retain, nonatomic) NSArray *textureArray; // @synthesize textureArray=_textureArray;
@property(retain, nonatomic) NSArray *texture4; // @synthesize texture4=_texture4;
@property(retain, nonatomic) NSArray *texture1; // @synthesize texture1=_texture1;
@property(retain, nonatomic) NSArray *texture9; // @synthesize texture9=_texture9;
@property(retain, nonatomic) NSArray *texture16; // @synthesize texture16=_texture16;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) _Bool isStatic; // @synthesize isStatic=_isStatic;
@property(nonatomic) _Bool isCycle; // @synthesize isCycle=_isCycle;
@property(nonatomic) _Bool isBackGround; // @synthesize isBackGround=_isBackGround;
@property(copy, nonatomic) NSString *note; // @synthesize note=_note;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setTextureType:(unsigned long long)arg1;
- (int)getCurrentTextureIndexAtTime:(float)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

