//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol SGIVoiceActivityDetector <NSObject>
@property(nonatomic) _Bool enableDynamicSilenceTimeThreshold;
@property(nonatomic) float silenceTimeThreshold;
@property(nonatomic) float tailInterval;
@property(nonatomic) float headInterval;
@property(nonatomic) unsigned long long vadMode;
@property(nonatomic) float maxVoiceLength;
@property(nonatomic) long long sampleOffset;
- (void)destroy;
- (void)reset:(long long)arg1;
- (NSData *)vadDetect:(NSData *)arg1 status:(int *)arg2 isWhisper:(int *)arg3 beginSampleOffset:(long long *)arg4 endSampleOffset:(long long *)arg5;
- (NSData *)vadDetect:(NSData *)arg1 status:(int *)arg2 beginSampleOffset:(long long *)arg3 endSampleOffset:(long long *)arg4 isOver:(_Bool)arg5;
- (NSData *)vadDetect:(NSData *)arg1 status:(int *)arg2 beginSampleOffset:(long long *)arg3 endSampleOffset:(long long *)arg4;
- (id)initWithFormat:(struct AudioStreamBasicDescription)arg1 headInterval:(float)arg2 tailInterval:(float)arg3 silenceInterval:(float)arg4 maxVoiceLength:(float)arg5;
@end

