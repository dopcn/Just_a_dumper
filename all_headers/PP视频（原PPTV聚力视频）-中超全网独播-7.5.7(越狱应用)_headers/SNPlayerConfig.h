//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SNPlayerConfig : NSObject
{
    _Bool _hwDecoderEnabled;
    double _maxBufferLatency;
    double _minBufferLatency;
}

+ (id)defaultConfig;
@property(nonatomic) _Bool hwDecoderEnabled; // @synthesize hwDecoderEnabled=_hwDecoderEnabled;
@property(nonatomic) double minBufferLatency; // @synthesize minBufferLatency=_minBufferLatency;
@property(nonatomic) double maxBufferLatency; // @synthesize maxBufferLatency=_maxBufferLatency;
- (id)init;

@end

