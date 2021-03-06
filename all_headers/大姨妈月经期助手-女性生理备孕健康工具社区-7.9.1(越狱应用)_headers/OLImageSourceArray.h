//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@class NSCache;

@interface OLImageSourceArray : NSArray
{
    struct CGImageSource *_imageSource;
    NSCache *_frameCache;
    unsigned long long _frameCount;
    double _scale;
}

+ (id)arrayWithImageSource:(struct CGImageSource *)arg1 scale:(double)arg2;
+ (id)arrayWithImageSource:(struct CGImageSource *)arg1;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) NSCache *frameCache; // @synthesize frameCache=_frameCache;
@property(readonly, nonatomic) struct CGImageSource *imageSource; // @synthesize imageSource=_imageSource;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateCount;
- (id)_objectAtIndex:(unsigned long long)arg1;
- (_Bool)containsObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithImageSource:(struct CGImageSource *)arg1 scale:(double)arg2;

@end

