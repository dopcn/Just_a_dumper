//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FMAudioRecognizer : NSObject
{
    void *audioRecognizationHandler;
    NSArray *_checkTypes;
}

@property(copy, nonatomic) NSArray *checkTypes; // @synthesize checkTypes=_checkTypes;
- (void).cxx_destruct;
- (int)audioDetector:(struct opaqueCMSampleBuffer *)arg1;
- (id)readRawFile:(id)arg1;
- (void)initTemplateAudioData:(id)arg1 symbolData:(id)arg2 metalData:(id)arg3;
- (id)initWithParamsPath:(id)arg1 symbolPath:(id)arg2 metalPath:(id)arg3 checkTypes:(id)arg4;
- (void)dealloc;

@end

