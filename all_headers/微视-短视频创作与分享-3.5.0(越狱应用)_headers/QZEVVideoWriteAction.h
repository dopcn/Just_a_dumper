//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QZEVVideoRenderAction.h"

@class NSDictionary, NSString, QZEVGPUImageMaskImageFilter, QZEVGPUImageMovieWriter, QZEVIncrementTimelineReference, UIImage;

@interface QZEVVideoWriteAction : QZEVVideoRenderAction
{
    _Bool _isRecording;
    UIImage *_maskImage;
    double _frameInterval;
    NSString *_outputFile;
    QZEVIncrementTimelineReference *_timelineReference;
    CDUnknownBlockType _completion;
    NSDictionary *_videoSettings;
    QZEVGPUImageMovieWriter *_movieWriter;
    QZEVGPUImageMaskImageFilter *_maskImageFilter;
}

+ (id)actionWithOutputFile:(id)arg1 videoSettings:(id)arg2;
@property(retain, nonatomic) QZEVGPUImageMaskImageFilter *maskImageFilter; // @synthesize maskImageFilter=_maskImageFilter;
@property(retain, nonatomic) QZEVGPUImageMovieWriter *movieWriter; // @synthesize movieWriter=_movieWriter;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(copy, nonatomic) NSDictionary *videoSettings; // @synthesize videoSettings=_videoSettings;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) QZEVIncrementTimelineReference *timelineReference; // @synthesize timelineReference=_timelineReference;
@property(copy, nonatomic) NSString *outputFile; // @synthesize outputFile=_outputFile;
@property(nonatomic) double frameInterval; // @synthesize frameInterval=_frameInterval;
@property(retain, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
- (void).cxx_destruct;
- (void)didFinishWritingVideoWithError:(id)arg1;
- (void)updateFilterChain;
- (void)setMediaState:(long long)arg1;
- (void)didResignActive;
- (void)willBecomeActive;
- (void)initMovieWriter;
- (void)dealloc;
- (id)init;

@end

