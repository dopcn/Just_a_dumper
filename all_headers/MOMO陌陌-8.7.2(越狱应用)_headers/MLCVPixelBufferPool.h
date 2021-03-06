//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface MLCVPixelBufferPool : NSObject
{
    unsigned long long _pixelBufferWidth;
    unsigned long long _pixelBufferHeight;
    unsigned long long _minimumBufferCount;
    NSDictionary *_poolAttributes;
    NSDictionary *_pixelBufferAttributes;
    struct __CVPixelBufferPool *_pool;
}

@property(readonly, nonatomic) struct __CVPixelBufferPool *pool; // @synthesize pool=_pool;
@property(readonly, copy, nonatomic) NSDictionary *pixelBufferAttributes; // @synthesize pixelBufferAttributes=_pixelBufferAttributes;
@property(readonly, copy, nonatomic) NSDictionary *poolAttributes; // @synthesize poolAttributes=_poolAttributes;
@property(readonly, nonatomic) unsigned long long minimumBufferCount; // @synthesize minimumBufferCount=_minimumBufferCount;
@property(readonly, nonatomic) unsigned long long pixelBufferHeight; // @synthesize pixelBufferHeight=_pixelBufferHeight;
@property(readonly, nonatomic) unsigned long long pixelBufferWidth; // @synthesize pixelBufferWidth=_pixelBufferWidth;
- (void).cxx_destruct;
- (_Bool)fetchPixelBuffer:(struct __CVBuffer **)arg1 error:(id *)arg2;
- (id)initWithPixelBufferSize:(struct CGSize)arg1 minimumBufferCount:(unsigned long long)arg2;
- (id)initWithPoolAttributes:(id)arg1 pixelBufferAttributes:(id)arg2 error:(id *)arg3;
- (void)dealloc;

@end

